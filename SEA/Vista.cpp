#include "Vista.h"
#include <chrono>
#include <ctime>



using namespace System;
using namespace System::Windows::Forms;
using namespace System::Globalization;
using namespace System;
using namespace System::IO;


using namespace SEA;    // Reemplazar SEA por el nombre que se le haya dado al proyecto

[STAThread]

//-----------------Variables estáticas
	

void main(array<String^>^ arg) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	//SEA es el nombre del proyecto
	Vista form;	//Reemplazar Vista por el nombre que tenga tu clase 
	Application::Run(%form);
}


SEA::Vista::Vista(void)
{
	InitializeComponent();
	//
	//TODO: agregar código de constructor aquí
	//

	
	//-----------------
	prueba = 3;
	tamanio = 50; //Establece el tamaño del tablero, variable a cambiar en trabajos futuros.
	tableroVisual = gcnew array<Label^, 2>(tamanio, tamanio);
	tablero = gcnew array<NPC^, 2>(tamanio, tamanio);
	
	
	//Valores para prueba, tomar posteriormente de la interfaz en el método de arranque
	detener = false;
	hayEvento = false;
	genomaEvento = gcnew NPC(23);	
	int tipoDistribucion;
	velocidad = trackBar1->Value;	
	//-----------------Arranque
	CrearTablero();
	buttonPausar->Enabled = false;
	buttonAvanzar->Enabled = false;
	buttonDetener->Enabled = false;
	pausa = false;
	avanzar = false;
	inicioSimulacion = false;
	nacidos = 0;
	muertos = 0;
		
	
}




//Creación de métodos

void Vista::correr()
{
	int tamanioCuadricula = 10; //Cambiar por tomado de la interfaz.
	int afectacion = 60; //Cambiar por tomado de la interfaz.
	asignarNPC();
	dibujarNPC();

	while (true)
	{	
		//Se aumenta el tiempo de simulación en 1
		tiempoGeneral++;

		//Se crea el genoma temporal y se aplica a todos los NPC.
		for (int i = 1; i <= 25; i++) //Recorre por cuadrícula.
		{
			NPC^ genomaTemporal = genomaCuadricula(i, tamanioCuadricula); //Crea el genoma temporal a partir de la cuadrícula.
			if (hayEvento)//En caso de haberse enviado un evento, el genoma temporal se afecta con el definido para el evento.
			{
				genomaTemporal->afectarNPCEvento(genomaEvento);
				hayEvento = false;
			}//Para este punto, el genoma ya estaría completo con el evento añadido.
			afectarNpcPorCuadricula(i, tamanioCuadricula, genomaTemporal); //Alterar todos los NPC, cuadrícula por cuadrícula.
		}				
		
		
		//Despues de analizar todo, redibuja el tablero con el nuevo estado.
		dibujarNPC();
		
		
		//Se espera antes de seguir, este tiempo es controlable.				
		if (!avanzar)
		{
			newThread->Sleep(10000 - (velocidad * 1000));
		}
		
		//En caso de que se haya hecho un avance, el estado vuelve a pausa.
		if (avanzar)
		{
			avanzar = false;
		}

		//En caso de pausa, se detiene todo hasta nuevo aviso.
		while (pausa && !detener && !avanzar)
		{
			//En espera
		}

		//En caso de ser solicitado, se detiene la simulación por completo (no es posible reanudarla)
		if (detener)
		{
			detener = false;			
			break;
		}
		

	}
}

//-------------------------------Funciones auxiliares
void Vista::afectarNpcPorCuadricula(int cuadricula, int tamanioCuadricula, NPC^ genoma) //Esta función tiene bastante peso, podría contener partes primordiales de la simulación.
{
	//int i = (ceil(cuadricula / 5));
	int j = 0;
	if ((cuadricula % 5) == 0)
	{
		j = 5;
	}
	else
	{
		j = cuadricula % 5;
	}
	if (j == 0)j = 1;
	int i = cuadricula;
	if (i >= 1 && i <= 5)
	{
		i = 1;
	}
	else
	{
		if (i >= 6 && i <= 10)
		{
			i = 2;
		}
		else
		{
			if (i >= 11 && i <= 15)
			{
				i = 3;
			}
			else
			{
				if (i >= 16 && i <= 20)
				{
					i = 4;
				}
				else
				{
					i = 5;
				}
			}
		}
	}
	i -= 1;
	j -= 1;
	for (int fila = tamanioCuadricula*i; fila < (tamanioCuadricula*i + tamanioCuadricula); fila++)
	{
		for (int columna = tamanioCuadricula*j; columna < (tamanioCuadricula*j + tamanioCuadricula); columna++)
		{
			if (!tablero[fila, columna]->isDead())
			{
				//Aquí se inserta todo el código de las cosas que cambian en el NPC en una transición de estado.
				
				System::Threading::Thread::Sleep(1);
				srand(DateTime::Now.ToUniversalTime().Ticks);

				//Se afecta el NPC con el genoma entrante (este ya viene modificado, o no, por un evento).
				tablero[fila, columna]->afectarNPC(genoma, (int) (rand() % genoma->getAfectacionMiedo()), (int) (rand() % genoma->getafectacionIra()), (int) (rand() % genoma->getafectacionTristeza()), (int) (rand() % genoma->getafectacionAlegria()), (int) (rand() % genoma->getafectacionDisgusto()));
					
				//Se cambian los contadores del NPC.
				tablero[fila, columna]->aumentarContadores();

				//Buscar pareja
				if (tablero[fila, columna]->getFilaPareja()==-1) //Asegura que busque pareja sólo si no tiene una.
				{
					//En este punto busca pareja en el radio definido:
					int sensor = (int)numericUpDownSensor->Value;
					int tipo = 1;
					if (tipoAcercamiento== "Complemento")
					{
						tipo = 2;
					};
					bool encontro = false; //Variable de para saber si encuentra pareja.

					//-----------------Se toman los valores de la interfaz respecto al vector de reproduccion.

					NPC^ vectorReproduccion = gcnew NPC(23);//Vector vacío para reproducción.
					
					/*
					//Toma de valores emocionales.
					vectorReproduccion->setMiedo((int)numericUpDownReproduccionMiedo->Value);
					vectorReproduccion->setira((int)numericUpDownReproduccionIra->Value);
					vectorReproduccion->settristeza((int)numericUpDownReproduccionTristeza->Value);
					vectorReproduccion->setalegria((int)numericUpDownReproduccionAlegria->Value);
					vectorReproduccion->setdisgusto((int)numericUpDownReproduccionDesagrado->Value);

					vectorReproduccion->normalizarEmociones();//Se normalizan dichos valores.
					*/ 

					//Toma de afectacion a las emociones.
					vectorReproduccion->setAfectacionMiedo((int)numericUpDownVariacionReproduccionMiedo->Value);
					vectorReproduccion->setafectacionIra((int)numericUpDownVariacionReproduccionIra->Value);
					vectorReproduccion->setafectacionTristeza((int)numericUpDownVariacionReproduccionTristeza->Value);
					vectorReproduccion->setafectacionAlegria((int)numericUpDownVariacionReproduccionAlegria->Value);
					vectorReproduccion->setafectacionDisgusto((int)numericUpDownVariacionReproduccionDesagrado->Value);		

					//----------------------------------------------------------------------
					for (int k = fila - sensor; k < fila + sensor; k++)
					{
						if (k > 49 || k < 0)
						{
							//No hace nada, está fuera del tablero.
						}
						else
						{
							for (int l = columna - sensor; l < columna + sensor; l++)
							{
								if (l > 49 || l < 0)
								{
									//No hace nada, está fuera del tablero.
								}
								else
								{									
									if (fila!= k && columna !=l && !tablero[k,l]->isDead()) //Asegura que no se enamore de si mismo y que no se enamore de la "nada".
									{
										//En este punto analiza cada pareja, cuando encuentre una, sale de ambos for.
										if (tablero[fila, columna]->esCompatible(tablero[k, l], vectorReproduccion, tipo) && !encontro) //Agregar la comprobración de encontró, es por si no se rompe el for.
										{
											tablero[fila, columna]->setFilaPareja(k);
											tablero[fila, columna]->setColumnaPareja(l);
											tablero[k, l]->setFilaPareja(fila);
											tablero[k, l]->setColumnaPareja(columna);
											encontro = true;
											break;

										}
									}
								}
							}
						};
						if (encontro)//Si encontró pareja, sale de este for.
						{							
							break;
						}

					}
				}//--------------------Fin buscar pareja
								

				//Se determina si un NPC nace

				if (tablero[fila, columna]->getContadorProcreacion() >= (int)numericUpDownTiempoReproduccion->Value)//Verifica si el contador de procreacion se alcanzó
				{
					NPC^ nuevoNPC = gcnew NPC(23);
					//Se crea el NPC nato con los valores del padre.
					nuevoNPC->copiar(tablero[fila, columna]);
					NPC^ madre = gcnew NPC(23);
					madre= (tablero[(tablero[fila, columna]->getFilaPareja()),(tablero[fila, columna]->getColumnaPareja())]);

					//Se procede a afectar al NPC con la madre.
					nuevoNPC->afectarNPC(madre, madre->getAfectacionMiedo(), madre->getafectacionIra(), madre->getafectacionTristeza(), madre->getafectacionAlegria(), madre->getafectacionDisgusto());
					
					//Se resetea contador reproduccion a la madre y el padre.
					tablero[(tablero[fila, columna]->getFilaPareja()), (tablero[fila, columna]->getColumnaPareja())]->setContadorProcreacion(0);
					tablero[fila, columna]->setContadorProcreacion(0);
					
					//Ha nacido un NPC, ahora se debe buscar donde asignarlo
					int sensor = (int)numericUpDownSensor->Value;
					bool encontro = false; //Variable de para si encuentra espacio para nacer.
					nacerNPC(nuevoNPC, fila, columna);
									
				}

				//-----------------------Se determina el movimiento del NPC.

				//Acercamiento
				if (tablero[fila, columna]->seMueve(genomaAcercamiento))
				{
					int cuadrante = seleccionCuadranteAcercamiento(fila, columna);
					moverHaciaCuadrante(tablero[fila, columna], fila, columna, cuadrante);
				}

				//Alejamiento
				if (tablero[fila, columna]->seMueve(genomaAlejamiento))
				{
					int cuadrante = seleccionCuadranteAlejamiento(fila, columna);
					moverHaciaCuadrante(tablero[fila, columna], fila, columna, cuadrante);
				}

				//-----------------------Finaliza el movimiento de NPC.

				//En este punto se determina si el NPC muere.
				if (tablero[fila, columna]->getContadorGeneral()>= tablero[fila, columna]->getTiempoMuerte())
				{
					tablero[fila, columna] = gcnew NPC(23); //Crea un NPC vacío (no hay NPC).
					muertos++;
				}
			}
		}
	}
}

void Vista::nacerNPC(NPC^ nuevo, int fila, int columna)
{
	System::Threading::Thread::Sleep(1);
	//time_t time(time_t *);
	//void srand(unsigned int);					
	srand(DateTime::Now.ToUniversalTime().Ticks);
	bool encontro = false; //Variable de para si encuentra espacio para nacer.
	int cuadrante = rand() % 4;

	if (cuadrante==0)
	{
		for (int i = fila - (int)numericUpDownSensor->Value; i <= fila; i++)//Primer cuadrante
		{
			if (i > 49 || i < 0)
			{
				//No hace nada, está fuera del tablero.
			}
			else
			{
				for (int j = columna + (int)numericUpDownSensor->Value; j >= columna; j--)
				{
					if (j > 49 || j < 0)
					{
						//No hace nada, está fuera del tablero.
					}
					else
					{
						//En este punto analiza el espacio, en caso de ser vacio, allí nace el NPC.
						if (tablero[i, j]->isDead() && !encontro) //Agregar la comprobración de encontró, es por si no se rompe el for.)
						{
							tablero[i, j] = nuevo; //El NPC ha nacido.										
							encontro = true;
							nacidos++;
							break;
						}
					}
				}
			};
			if (encontro)//Si nacio, sale de este for.
			{
				break;
			}
		}
	}

	if (cuadrante == 1)
	{
		for (int i = fila - (int)numericUpDownSensor->Value; i <= fila; i++)//Segundo cuadrante
		{
			if (i > 49 || i < 0)
			{
				//No hace nada, está fuera del tablero.
			}
			else
			{
				for (int j = columna - (int)numericUpDownSensor->Value; j <= columna; j++)
				{
					if (j > 49 || j < 0)
					{
						//No hace nada, está fuera del tablero.
					}
					else
					{
						//En este punto analiza el espacio, en caso de ser vacio, allí nace el NPC.
						if (tablero[i, j]->isDead() && !encontro) //Agregar la comprobración de encontró, es por si no se rompe el for.)
						{
							tablero[i, j] = nuevo; //El NPC ha nacido.										
							encontro = true;
							nacidos++;
							break;
						}
					}
				}
			};
			if (encontro)//Si nacio, sale de este for.
			{
				break;
			}
		}
	}

	if (cuadrante == 2)
	{
		for (int i = fila + (int)numericUpDownSensor->Value; i >= fila; i--)//Tercer cuadrante
		{
			if (i > 49 || i < 0)
			{
				//No hace nada, está fuera del tablero.
			}
			else
			{
				for (int j = columna - (int)numericUpDownSensor->Value; j <= columna; j++)
				{
					if (j > 49 || j < 0)
					{
						//No hace nada, está fuera del tablero.
					}
					else
					{
						//En este punto analiza el espacio, en caso de ser vacio, allí nace el NPC.
						if (tablero[i, j]->isDead() && !encontro) //Agregar la comprobración de encontró, es por si no se rompe el for.)
						{
							tablero[i, j] = nuevo; //El NPC ha nacido.										
							encontro = true;
							nacidos++;
							break;
						}
					}
				}
			};
			if (encontro)//Si nacio, sale de este for.
			{
				break;
			}
		}
	}
	
	if (cuadrante == 3)
	{
		for (int i = fila + (int)numericUpDownSensor->Value; i >= fila; i--)//Cuarto cuadrante
		{
			if (i > 49 || i < 0)
			{
				//No hace nada, está fuera del tablero.
			}
			else
			{
				for (int j = columna + (int)numericUpDownSensor->Value; j >= columna; j--)
				{
					if (j > 49 || j < 0)
					{
						//No hace nada, está fuera del tablero.
					}
					else
					{
						//En este punto analiza el espacio, en caso de ser vacio, allí nace el NPC.
						if (tablero[i, j]->isDead() && !encontro) //Agregar la comprobración de encontró, es por si no se rompe el for.)
						{
							tablero[i, j] = nuevo; //El NPC ha nacido.										
							encontro = true;
							nacidos++;
							break;
						}
					}
				}
			};
			if (encontro)//Si nacio, sale de este for.
			{
				break;
			}
		}
	}
}

int Vista::seleccionCuadranteAcercamiento(int fila, int columna)
{
	int resultado = 1;
	int cantidadNPC = 0;
	int conteoTemporalNPC = 0;
	for (int i = fila - (int)numericUpDownSensor->Value; i <= fila; i++)//Primer cuadrante
	{
		if (i > 49 || i < 0)
		{
			//No hace nada, está fuera del tablero.
		}else
		{
			for (int j = columna + (int)numericUpDownSensor->Value; j >= columna; j--)
			{
				if (j > 49 || j < 0)
				{
					//No hace nada, está fuera del tablero.
				}
				else 
				{
					if (!tablero[i, j]->isDead())
					{
						conteoTemporalNPC++;
					}
				}
			}			
		}		
	}
	if (cantidadNPC < conteoTemporalNPC)
	{
		cantidadNPC = conteoTemporalNPC;
		resultado = 1;
	}

	for (int i = fila - (int)numericUpDownSensor->Value; i <= fila; i++)//Segundo cuadrante
	{
		if (i > 49 || i < 0)
		{
			//No hace nada, está fuera del tablero.
		}
		else
		{
			for (int j = columna - (int)numericUpDownSensor->Value; j <= columna; j++)
			{
				if (j > 49 || j < 0)
				{
					//No hace nada, está fuera del tablero.
				}
				else
				{
					if (!tablero[i, j]->isDead())
					{
						conteoTemporalNPC++;
					}
				}
			}
		}
	}
	if (cantidadNPC < conteoTemporalNPC)
	{
		cantidadNPC = conteoTemporalNPC;
		resultado = 2;
	}

	for (int i = fila + (int)numericUpDownSensor->Value; i >= fila; i--)//Tercer cuadrante
	{
		if (i > 49 || i < 0)
		{
			//No hace nada, está fuera del tablero.
		}
		else
		{
			for (int j = columna - (int)numericUpDownSensor->Value; j <= columna; j++)
			{
				if (j > 49 || j < 0)
				{
					//No hace nada, está fuera del tablero.
				}
				else
				{
					if (!tablero[i, j]->isDead())
					{
						conteoTemporalNPC++;
					}
				}
			}
		}
	}
	if (cantidadNPC < conteoTemporalNPC)
	{
		cantidadNPC = conteoTemporalNPC;
		resultado = 3;
	}

	for (int i = fila + (int)numericUpDownSensor->Value; i >= fila; i--)//Cuarto cuadrante
	{
		if (i > 49 || i < 0)
		{
			//No hace nada, está fuera del tablero.
		}
		else
		{
			for (int j = columna + (int)numericUpDownSensor->Value; j >= columna; j--)
			{
				if (j > 49 || j < 0)
				{
					//No hace nada, está fuera del tablero.
				}
				else
				{
					if (!tablero[i, j]->isDead())
					{
						conteoTemporalNPC++;
					}
				}
			}
		}
	}
	if (cantidadNPC < conteoTemporalNPC)
	{
		cantidadNPC = conteoTemporalNPC;
		resultado = 4;
	}
	return resultado;
}

int Vista::seleccionCuadranteAlejamiento(int fila, int columna)
{
	int resultado = 1;
	int cantidadNPC = 0;
	int conteoTemporalNPC = 0;
	for (int i = fila - (int)numericUpDownSensor->Value; i <= fila; i++)//Primer cuadrante
	{
		if (i > 49 || i < 0)
		{
			//No hace nada, está fuera del tablero.
		}
		else
		{
			for (int j = columna + (int)numericUpDownSensor->Value; j >= columna; j--)
			{
				if (j > 49 || j < 0)
				{
					//No hace nada, está fuera del tablero.
				}
				else
				{
					if (!tablero[i, j]->isDead())
					{
						conteoTemporalNPC++;
					}
				}
			}
		}
	}
	cantidadNPC = conteoTemporalNPC;

	for (int i = fila - (int)numericUpDownSensor->Value; i <= fila; i++)//Segundo cuadrante
	{
		if (i > 49 || i < 0)
		{
			//No hace nada, está fuera del tablero.
		}
		else
		{
			for (int j = columna - (int)numericUpDownSensor->Value; j <= columna; j++)
			{
				if (j > 49 || j < 0)
				{
					//No hace nada, está fuera del tablero.
				}
				else
				{
					if (!tablero[i, j]->isDead())
					{
						conteoTemporalNPC++;
					}
				}
			}
		}
	}
	if (cantidadNPC > conteoTemporalNPC)
	{
		cantidadNPC = conteoTemporalNPC;
		resultado = 2;
	}

	for (int i = fila + (int)numericUpDownSensor->Value; i >= fila; i--)//Tercer cuadrante
	{
		if (i > 49 || i < 0)
		{
			//No hace nada, está fuera del tablero.
		}
		else
		{
			for (int j = columna - (int)numericUpDownSensor->Value; j <= columna; j++)
			{
				if (j > 49 || j < 0)
				{
					//No hace nada, está fuera del tablero.
				}
				else
				{
					if (!tablero[i, j]->isDead())
					{
						conteoTemporalNPC++;
					}
				}
			}
		}
	}
	if (cantidadNPC > conteoTemporalNPC)
	{
		cantidadNPC = conteoTemporalNPC;
		resultado = 3;
	}

	for (int i = fila + (int)numericUpDownSensor->Value; i >= fila; i--)//Cuarto cuadrante
	{
		if (i > 49 || i < 0)
		{
			//No hace nada, está fuera del tablero.
		}
		else
		{
			for (int j = columna + (int)numericUpDownSensor->Value; j >= columna; j--)
			{
				if (j > 49 || j < 0)
				{
					//No hace nada, está fuera del tablero.
				}
				else
				{
					if (!tablero[i, j]->isDead())
					{
						conteoTemporalNPC++;
					}
				}
			}
		}
	}
	if (cantidadNPC > conteoTemporalNPC)
	{
		cantidadNPC = conteoTemporalNPC;
		resultado = 4;
	}
	return resultado;
}

void Vista::moverHaciaCuadrante(NPC^ nPC, int fila, int columna, int cuadrante)
{
	if (cuadrante == 1)
	{
		int moverse = largoPasos;
		int i = fila-moverse;
		int j = columna+moverse;
		while (i<fila && j>columna)
		{
			if (i > 49 || i < 0)
			{
				//No hace nada, está fuera del tablero.
			}
			else
			{
				if (j > 49 || j < 0)
				{
					//No hace nada, está fuera del tablero.
				}
				else
				{
					if (tablero[i, j]->isDead())//Si el espacio está vacío, el NPC se puede mover.
					{
						tablero[i, j] = nPC;
						if (tablero[i, j]->getFilaPareja() != -1)//Se debe avisar a la pareja el cambio de posición.
						{
							tablero[tablero[i, j]->getFilaPareja(), tablero[i, j]->getColumnaPareja()]->setFilaPareja(i);
							tablero[tablero[i, j]->getFilaPareja(), tablero[i, j]->getColumnaPareja()]->setColumnaPareja(j);
						}
						tablero[fila, columna] = gcnew NPC(23);
						i = fila;
						j = columna;
					}
				}			
			}
			i++;
			j--;

		}
	}

	if (cuadrante == 2)
	{
		int moverse = largoPasos;
		int i = fila - moverse;
		int j = columna - moverse;
		while (i<fila && j<columna)
		{
			if (i > 49 || i < 0)
			{
				//No hace nada, está fuera del tablero.
			}
			else
			{
				if (j > 49 || j < 0)
				{
					//No hace nada, está fuera del tablero.
				}
				else
				{
					if (tablero[i, j]->isDead())//Si el espacio está vacío, el NPC se puede mover.
					{
						tablero[i, j] = nPC;
						if (tablero[i, j]->getFilaPareja() != -1)//Se debe avisar a la pareja el cambio de posición.
						{
							tablero[tablero[i, j]->getFilaPareja(), tablero[i, j]->getColumnaPareja()]->setFilaPareja(i);
							tablero[tablero[i, j]->getFilaPareja(), tablero[i, j]->getColumnaPareja()]->setColumnaPareja(j);
						}
						tablero[fila, columna] = gcnew NPC(23);
						i = fila;
						j = columna;
					}
				}
			}
			i++;
			j++;

		}
	}

	if (cuadrante == 3)
	{
		int moverse = largoPasos;
		int i = fila + moverse;
		int j = columna - moverse;
		while (i>fila && j<columna)
		{
			if (i > 49 || i < 0)
			{
				//No hace nada, está fuera del tablero.
			}
			else
			{
				if (j > 49 || j < 0)
				{
					//No hace nada, está fuera del tablero.
				}
				else
				{
					if (tablero[i, j]->isDead())//Si el espacio está vacío, el NPC se puede mover.
					{
						tablero[i, j] = nPC;
						if (tablero[i, j]->getFilaPareja() != -1)//Se debe avisar a la pareja el cambio de posición.
						{
							tablero[tablero[i, j]->getFilaPareja(), tablero[i, j]->getColumnaPareja()]->setFilaPareja(i);
							tablero[tablero[i, j]->getFilaPareja(), tablero[i, j]->getColumnaPareja()]->setColumnaPareja(j);
						}
						tablero[fila, columna] = gcnew NPC(23);
						i = fila;
						j = columna;
					}
				}
			}
			i--;
			j++;

		}
	}

	if (cuadrante == 4)
	{
		int moverse = largoPasos;
		int i = fila + moverse;
		int j = columna + moverse;
		while (i>fila && j>columna)
		{
			if (i > 49 || i < 0)
			{
				//No hace nada, está fuera del tablero.
			}
			else
			{
				if (j > 49 || j < 0)
				{
					//No hace nada, está fuera del tablero.
				}
				else
				{
					if (tablero[i, j]->isDead())//Si el espacio está vacío, el NPC se puede mover.
					{
						tablero[i, j] = nPC;
						if (tablero[i, j]->getFilaPareja() != -1)//Se debe avisar a la pareja el cambio de posición.
						{
							tablero[tablero[i, j]->getFilaPareja(), tablero[i, j]->getColumnaPareja()]->setFilaPareja(i);
							tablero[tablero[i, j]->getFilaPareja(), tablero[i, j]->getColumnaPareja()]->setColumnaPareja(j);
						}
						tablero[fila, columna] = gcnew NPC(23);
						i = fila;
						j = columna;
					}
				}
			}
			i--;
			j--;
		}
	}

}

NPC^ Vista::genomaCuadricula(int cuadricula, int tamanioCuadricula)
{
	int miedo= 0;
	int ira = 0;
	int tristeza= 0;
	int alegria= 0;
	int disgusto= 0;	

	int j = 0;
	if ((cuadricula % 5) == 0)
	{
		j = 5;
	}
	else
	{
		j = cuadricula % 5;
	}
	if (j == 0)j = 1;
	int i = cuadricula;
	if (i >= 1 && i <= 5)
	{
		i = 1;
	}
	else
	{
		if (i >= 6 && i <= 10)
		{
			i = 2;
		}
		else
		{
			if (i >= 11 && i <= 15)
			{
				i = 3;
			}
			else
			{
				if (i >= 16 && i <= 20)
				{
					i = 4;
				}
				else
				{
					i = 5;
				}
			}
		}
	}
	i -= 1;
	j -= 1;
	for (int fila = tamanioCuadricula*i; fila < (tamanioCuadricula*i + tamanioCuadricula); fila++)
	{
		for (int columna = tamanioCuadricula*j; columna < (tamanioCuadricula*j + tamanioCuadricula); columna++)
		{
			miedo += tablero[fila, columna]->getMiedo();
			ira += tablero[fila, columna]->getira();
			tristeza += tablero[fila, columna]->gettristeza();
			alegria += tablero[fila, columna]->getalegria();
			disgusto += tablero[fila, columna]->getdisgusto();
		}
	}
	miedo = (miedo / 100);
	ira = (ira / 100);
	tristeza= (tristeza / 100);
	alegria = (alegria / 100);
	disgusto = (disgusto / 100);
	NPC^ resultado = gcnew NPC(miedo, (int) numericUpDownEventoGenericoMiedo->Value, ira, (int)numericUpDownEventoGenericoIra->Value, tristeza, (int)numericUpDownEventoGenericoTristeza->Value, alegria, (int)numericUpDownEventoGenericoAlegria->Value, disgusto, (int)numericUpDownEventoGenericoDesagrado->Value, 0);
	return resultado;
}

void Vista::CrearTablero()
{
	for (int i = 0; i < tamanio; i++)
	{
		for (int j = 0; j < tamanio; j++)
		{
			System::Windows::Forms::Label^  labelNPC;
			labelNPC = (gcnew System::Windows::Forms::Label());
			labelNPC->Size = System::Drawing::Size(15, 15);
			labelNPC->Location = System::Drawing::Point(15 * i, 15 * j);
			labelNPC->Name = L"" + i + "," + j;
			labelNPC->TabIndex = 5;
			labelNPC->Text = L"";
			labelNPC->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			labelNPC->Click += gcnew System::EventHandler(this, &Vista::labelNPCs_Click);
			tableroVisual[i, j] = labelNPC;
			panel1->Controls->Add(tableroVisual[i, j]);			
		}
	}
}

void Vista::asignarNPC() //Mejorar método para distribución uniforme
{
	for (int i = 0; i < tamanio; i++)
	{
		for (int j = 0; j < tamanio; j++)
		{
			tablero[i, j] = gcnew NPC(23); //Crea NPC vacíos.
		}
	}

	if (dispersion == "Alta")
	{
		int contador = 0;
		int variacionI = 1;
		int variacionJ = 2;
		for (int i = 0; i <= sqrt(cantidadNPC) * 4; i += variacionI)
		{
			if (i > 49)
			{

			}
			else
			{
				for (int j = 0; j <= sqrt(cantidadNPC) * 4; j += variacionJ)
				{
					if (contador<cantidadNPC)
					{
						if (j < 49)
						{
							System::Threading::Thread::Sleep(1);
							//time_t time(time_t *);
							//void srand(unsigned int);					
							srand(DateTime::Now.ToUniversalTime().Ticks);
							int miedo = rand() % 80 + 20;
							int afectacionMiedo = rand() % 80 + 20;
							int ira = rand() % 80 + 20;
							int afectacionIra = rand() % 80 + 20;
							int tristeza = rand() % 80 + 20;
							int afectacionTristeza = rand() % 80 + 20;
							int alegria = rand() % 80 + 20;
							int afectacionAlegria = rand() % 80 + 20;
							int disgusto = rand() % 80 + 20;
							int afectacionDisgusto = rand() % 80 + 20;
							int tiempoMuerte = (int)numericUpDownTiempoMuerte->Value;
							tablero[i, j] = gcnew NPC(miedo, afectacionMiedo, ira, afectacionIra, tristeza, afectacionTristeza, alegria, afectacionAlegria, disgusto, afectacionDisgusto, tiempoMuerte);
							contador++;
							variacionI = (rand() % 3) + 2;
							variacionJ = (rand() % 3) + 2;
						}
					}
					else
					{
						break;
					}

				}
				if (contador >= cantidadNPC) break;
			}

		}
		if(contador<cantidadNPC)
		{
			for (int i = 2; i <= sqrt(cantidadNPC) * 4; i += variacionI)
			{
				if (i > 49)
				{

				}
				else
				{
					for (int j = 2; j <= sqrt(cantidadNPC) * 4; j += variacionJ)
					{
						if (contador<cantidadNPC)
						{
							if (j < 49 && tablero[i, j]->isDead())
							{
								System::Threading::Thread::Sleep(1);
								//time_t time(time_t *);
								//void srand(unsigned int);					
								srand(DateTime::Now.ToUniversalTime().Ticks);
								int miedo = rand() % 80 + 20;
								int afectacionMiedo = rand() % 80 + 20;
								int ira = rand() % 80 + 20;
								int afectacionIra = rand() % 80 + 20;
								int tristeza = rand() % 80 + 20;
								int afectacionTristeza = rand() % 80 + 20;
								int alegria = rand() % 80 + 20;
								int afectacionAlegria = rand() % 80 + 20;
								int disgusto = rand() % 80 + 20;
								int afectacionDisgusto = rand() % 80 + 20;
								int tiempoMuerte = (int)numericUpDownTiempoMuerte->Value;
								tablero[i, j] = gcnew NPC(miedo, afectacionMiedo, ira, afectacionIra, tristeza, afectacionTristeza, alegria, afectacionAlegria, disgusto, afectacionDisgusto, tiempoMuerte);
								contador++;
								variacionI = (rand() % 3) + 2;
								variacionJ = (rand() % 3) + 2;
							}
						}
						else
						{
							break;
						}

					}
					if (contador >= cantidadNPC) break;
				}

			}
		}
	}
	else
	{
		if (dispersion == "Media")
		{
			int contador = 0;
			for (int i = 0; i <= sqrt(cantidadNPC)*2; i += 2)
			{
				if (i > 49)
				{

				}
				else
				{					
					for (int j = 0; j <= sqrt(cantidadNPC)*2; j += 2)
					{
						if (contador<cantidadNPC)
						{
							if (j < 49)
							{
								System::Threading::Thread::Sleep(1);
								//time_t time(time_t *);
								//void srand(unsigned int);					
								srand(DateTime::Now.ToUniversalTime().Ticks);
								int miedo = rand() % 80 + 20;
								int afectacionMiedo = rand() % 80 + 20;
								int ira = rand() % 80 + 20;
								int afectacionIra = rand() % 80 + 20;
								int tristeza = rand() % 80 + 20;
								int afectacionTristeza = rand() % 80 + 20;
								int alegria = rand() % 80 + 20;
								int afectacionAlegria = rand() % 80 + 20;
								int disgusto = rand() % 80 + 20;
								int afectacionDisgusto = rand() % 80 + 20;
								int tiempoMuerte = (int)numericUpDownTiempoMuerte->Value;
								tablero[i, j] = gcnew NPC(miedo, afectacionMiedo, ira, afectacionIra, tristeza, afectacionTristeza, alegria, afectacionAlegria, disgusto, afectacionDisgusto, tiempoMuerte);
								contador++;
							}
						}
						else
						{
							break;
						}
						
					}
					if (contador >= cantidadNPC) break;
				}
				
			}			
		}
		else //Dispersión baja
		{
			int contador = 0;
			for (int i = 0; i <= (cantidadNPC / 2)+2; i++)
			{
				if (i > 49)
				{

				}
				else
				{
					for (int j = 0; j <= (cantidadNPC/2) + 2; j++)
					{
						if (contador<cantidadNPC)
						{
							if (j < 49)
							{
								System::Threading::Thread::Sleep(1);
								//time_t time(time_t *);
								//void srand(unsigned int);					
								srand(DateTime::Now.ToUniversalTime().Ticks);
								int miedo = rand() % 80 + 20;
								int afectacionMiedo = rand() % 80 + 20;
								int ira = rand() % 80 + 20;
								int afectacionIra = rand() % 80 + 20;
								int tristeza = rand() % 80 + 20;
								int afectacionTristeza = rand() % 80 + 20;
								int alegria = rand() % 80 + 20;
								int afectacionAlegria = rand() % 80 + 20;
								int disgusto = rand() % 80 + 20;
								int afectacionDisgusto = rand() % 80 + 20;
								int tiempoMuerte = (int)numericUpDownTiempoMuerte->Value;
								tablero[i, j] = gcnew NPC(miedo, afectacionMiedo, ira, afectacionIra, tristeza, afectacionTristeza, alegria, afectacionAlegria, disgusto, afectacionDisgusto, tiempoMuerte);
								contador++;
							}
						}
						else
						{
							break;
						}

					}
					if (contador >= cantidadNPC) break;
				}

			}
		}
	}
	
}

void Vista::dibujarNPC()
{
	for (int i = 0; i < tamanio; i++)
	{
		for (int j = 0; j < tamanio; j++)
		{
			if (tablero[i, j]->isDead())
			{
				tableroVisual[i, j]->BackColor = System::Drawing::SystemColors::ButtonHighlight;
				
			}
			else
			{
				tableroVisual[i, j]->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			}
		}
	}
	
}

String^ Vista::agrupacionCuadriculas()
{
	String^ resultado = "";
	int tamanioCuadricula = 10;
	for (int cuadricula = 1; cuadricula <= 25; cuadricula++)
	{
		resultado += ",";
		int cantidad= 0;
		int j = 0;
		if ((cuadricula % 5) == 0)
		{
			j = 5;
		}
		else
		{
			j = cuadricula % 5;
		}
		if (j == 0)j = 1;
		int i = cuadricula;
		if (i >= 1 && i <= 5)
		{
			i = 1;
		}
		else
		{
			if (i >= 6 && i <= 10)
			{
				i = 2;
			}
			else
			{
				if (i >= 11 && i <= 15)
				{
					i = 3;
				}
				else
				{
					if (i >= 16 && i <= 20)
					{
						i = 4;
					}
					else
					{
						i = 5;
					}
				}
			}
		}
		i -= 1;
		j -= 1;
		for (int fila = tamanioCuadricula*i; fila < (tamanioCuadricula*i + tamanioCuadricula); fila++)
		{
			for (int columna = tamanioCuadricula*j; columna < (tamanioCuadricula*j + tamanioCuadricula); columna++)
			{
				if (!tablero[fila, columna]->isDead()) cantidad++;
			}
		}
		resultado += cantidad;
	}
	return resultado;

}

String^ Vista::generarResultados()
{
	String^ resultado= "soft"+ "," + (int) numericUpDownCantidad->Value + "," + comboBoxDispercion->Text + "," + (int) numericUpDownTiempoMuerte->Value + "," + (int) numericUpDownSensor->Value + "," + numericUpDownTiempoReproduccion->Value + "," + comboBoxTipoAcercamiento->Text + "," + (int) numericUpDownLargoPasos->Value + "," + nacidos+ "," + muertos + agrupacionCuadriculas();
	return resultado;
}

void Vista::guardarRegistro()
{
	StreamWriter^ myStream;
	SaveFileDialog^ saveFileDialog1 = gcnew SaveFileDialog;
	
	saveFileDialog1->Filter = "ARFF Data File (.arff)|*.arff|All files (*.*)|*.*";
	saveFileDialog1->FilterIndex = 1;
	saveFileDialog1->RestoreDirectory = false;
	saveFileDialog1->CreatePrompt = true;
	if (saveFileDialog1->ShowDialog() == ::DialogResult::OK)
	{
		String^ ruta= Path::GetDirectoryName(saveFileDialog1->FileName);
		String^ archivo= Path::GetFileName(saveFileDialog1->FileName);

		String^ str;

		try
		{
			StreamReader^ din = File::OpenText(ruta + "\\" + archivo);			
			str = din->ReadToEnd();
			din->Close();
		}
		catch(Exception^ e)//Si el archivo no existe, debe agregar el encabezado para weka.
		{
			str = "@RELATION relation\r\n" +
				"@ATTRIBUTE intensidadEventos{  \"soft \", \"mid \", \"hard \" }\r\n" +
				"@ATTRIBUTE cantidadNPC{ 50,80,220,600 }\r\n" +
				"@ATTRIBUTE dispersion{  \"Baja \", \"Media \", \"Alta \" }\r\n" +
				"@ATTRIBUTE tiempoMuerte{ 10, 25, 60 }\r\n" +
				"@ATTRIBUTE tamanioRadar{ 3, 6, 10 }\r\n" +
				"@ATTRIBUTE tiempoReproduccion{ 2, 5, 9 }\r\n" +
				"@ATTRIBUTE tipoAcercamiento{  \"Empatia \",  \"Complemento \" }\r\n" +
				"@ATTRIBUTE largoPasos{ 1, 2, 3 }\r\n" +
				"@ATTRIBUTE tiempoMuerte{ 10, 25, 60 }\r\n" +
				"@ATTRIBUTE nacidos real\r\n" +
				"@ATTRIBUTE muertos real\r\n" +
				"@ATTRIBUTE cantidadCuadricula1 real\r\n" +
				"@ATTRIBUTE cantidadCuadricula2 real\r\n" +
				"@ATTRIBUTE cantidadCuadricula3 real\r\n" +
				"@ATTRIBUTE cantidadCuadricula4 real\r\n" +
				"@ATTRIBUTE cantidadCuadricula5 real\r\n" +
				"@ATTRIBUTE cantidadCuadricula6 real\r\n" +
				"@ATTRIBUTE cantidadCuadricula7 real\r\n" +
				"@ATTRIBUTE cantidadCuadricula8 real\r\n" +
				"@ATTRIBUTE cantidadCuadricula9 real\r\n" +
				"@ATTRIBUTE cantidadCuadricula10 real\r\n" +
				"@ATTRIBUTE cantidadCuadricula11 real\r\n" +
				"@ATTRIBUTE cantidadCuadricula12 real\r\n" +
				"@ATTRIBUTE cantidadCuadricula13 real\r\n" +
				"@ATTRIBUTE cantidadCuadricula14 real\r\n" +
				"@ATTRIBUTE cantidadCuadricula15 real\r\n" +
				"@ATTRIBUTE cantidadCuadricula16 real\r\n" +
				"@ATTRIBUTE cantidadCuadricula17 real\r\n" +
				"@ATTRIBUTE cantidadCuadricula18 real\r\n" +
				"@ATTRIBUTE cantidadCuadricula19 real\r\n" +
				"@ATTRIBUTE cantidadCuadricula20 real\r\n" +
				"@ATTRIBUTE cantidadCuadricula21 real\r\n" +
				"@ATTRIBUTE cantidadCuadricula22 real\r\n" +
				"@ATTRIBUTE cantidadCuadricula23 real\r\n" +
				"@ATTRIBUTE cantidadCuadricula24 real\r\n" +
				"@ATTRIBUTE cantidadCuadricula25 real\r\n" +
				"@DATA\r\n";
		}

		myStream = gcnew StreamWriter(ruta + "\\" + archivo);

		myStream->Write(str);
		String^ escribrir = generarResultados();
		myStream->WriteLine(escribrir);
		myStream->Close();
	}

}



//-------------------------------Fin de funciones auxiliares

// 
// Acciones de los botones
// 


System::Void SEA::Vista::buttonIniciar_Click(System::Object ^ sender, System::EventArgs ^ e)
{
	//Se establece el genoma de acercamiento
	genomaAcercamiento = gcnew NPC(23);
	genomaAcercamiento->setMiedo((int)numericUpDownAcercamientoMiedo->Value);
	genomaAcercamiento->setira((int)numericUpDownAcercamientoIra->Value);
	genomaAcercamiento->settristeza((int)numericUpDownAcercamientoTristeza->Value);
	genomaAcercamiento->setalegria((int)numericUpDownAcercamientoAlegria->Value);
	genomaAcercamiento->setdisgusto((int)numericUpDownAcercamientoDesagrado->Value);

	genomaAcercamiento->setAfectacionMiedo((int)numericUpDownVariacionAcercamientoMiedo->Value);
	genomaAcercamiento->setafectacionIra((int)numericUpDownVariacionAcercamientoIra->Value);
	genomaAcercamiento->setafectacionTristeza((int)numericUpDownVariacionAcercamientoTristeza->Value);
	genomaAcercamiento->setafectacionAlegria((int)numericUpDownVariacionAcercamientoAlegria->Value);
	genomaAcercamiento->setafectacionDisgusto((int)numericUpDownVariacionAcercamientoDesagrado->Value);

	//Se establece el genoma de alejamiento
	genomaAlejamiento = gcnew NPC(23);
	genomaAlejamiento->setMiedo((int)numericUpDownAlejamientoMiedo->Value);
	genomaAlejamiento->setira((int)numericUpDownAlejamientoIra->Value);
	genomaAlejamiento->settristeza((int)numericUpDownAlejamientoTristeza->Value);
	genomaAlejamiento->setalegria((int)numericUpDownAlejamientoAlegria->Value);
	genomaAlejamiento->setdisgusto((int)numericUpDownAlejamientoDesagrado->Value);

	genomaAlejamiento->setAfectacionMiedo((int)numericUpDownVariacionAlejamientoMiedo->Value);
	genomaAlejamiento->setafectacionIra((int)numericUpDownVariacionAlejamientoIra->Value);
	genomaAlejamiento->setafectacionTristeza((int)numericUpDownVariacionAlejamientoTristeza->Value);
	genomaAlejamiento->setafectacionAlegria((int)numericUpDownVariacionAlejamientoAlegria->Value);
	genomaAlejamiento->setafectacionDisgusto((int)numericUpDownVariacionAlejamientoDesagrado->Value);

	//Se establece el largo de los pasos
	largoPasos = (int) numericUpDownLargoPasos->Value;

	//Se establece la cantidad de NPC
	cantidadNPC = (int)numericUpDownCantidad->Value;

	//Se establece el tipo de acercamiento
	tipoAcercamiento = "Empatia";
	if (comboBoxTipoAcercamiento->SelectedValue == "Complemento")
	{
		tipoAcercamiento = "Complemento";
	}

	
	
	
	//Se activan los botones correspondientes
	buttonPausar->Enabled = true;	
	buttonPausar->Text = L"Pausar";
	buttonDetener->Enabled = true;

	//Se desactiva el botón inciar
	buttonIniciar->Enabled = false;

	//Se indica que inició la simulación
	inicioSimulacion = true;

	//Se inicia el tiempo general en 0
	tiempoGeneral = 0;

	//Se obtiene la dispersión
	dispersion = comboBoxDispercion->Text;

	//Se crea el hilo principal	
	threadDelegate = gcnew ThreadStart(this, &Vista::correr);
	newThread = gcnew Thread(threadDelegate);

	//Inicio de la simulación
	newThread->Start();
	//Thread ^thr1 = gcnew Thread(gcnew ThreadStart(Vista::correr()));
	//thr1->Start();
	//textBoxInfoNPC->Text = L"Se ha presionado el boton Iniciar"+hola.getMiedo();
	
}

System::Void SEA::Vista::buttonPausar_Click(System::Object ^ sender, System::EventArgs ^ e)
{
	//textBoxInfoNPC->Text = L"Se ha presionado el boton Pausar"+prueba;
	if (buttonPausar->Text == "Pausar")
	{		
		buttonAvanzar->Enabled = true;
		buttonPausar->Text = L"Reanudar";
		
	}
	else
	{
		if (buttonPausar->Text == "Reanudar")
		{
			buttonAvanzar->Enabled = false;
			buttonPausar->Text = L"Pausar";
			pausa = false;
		}
	}
	
}

System::Void SEA::Vista::buttonAvanzar_Click(System::Object ^ sender, System::EventArgs ^ e)
{
	avanzar = true;
}

System::Void SEA::Vista::buttonDetener_Click(System::Object ^ sender, System::EventArgs ^ e)
{
	//textBoxInfoNPC->Text = L"Se ha presionado el boton Detener";
	detener = true;
	inicioSimulacion = false;
	buttonPausar->Enabled = false;
	buttonAvanzar->Enabled = false;
	buttonDetener->Enabled = false;
	buttonIniciar->Enabled = true;
	guardarRegistro();
}

System::Void SEA::Vista::trackBar1_Scroll(System::Object ^ sender, System::EventArgs ^ e)
{
	velocidad = (int) trackBar1->Value;
}

System::Void SEA::Vista::labelNPCs_Click(System::Object^  sender, System::EventArgs^  e)
{
	Label^ boton = (Label^)sender;
	String^ delimStr = ",";
	array<Char>^ delimiter = delimStr->ToCharArray();
	array<String^>^ words;
	String^ line = boton->Name;
	words = line->Split(delimiter);
	int fila= int::Parse(words[0]);
	int columna = int::Parse(words[1]);

	if (inicioSimulacion)
	{
		String^ tienePareja = "No tiene pareja";
		if (tablero[fila, columna]->getFilaPareja() != -1)
		{
			tienePareja = "Si tiene pareja, es el NPC [" + tablero[fila, columna]->getFilaPareja() + " , " + tablero[fila, columna]->getColumnaPareja() + " ]";
		}
		textBoxInfoNPC->Text = L"NPC [ " + fila + " , " + columna + " ]:" + "\r\n" + "\r\n" +
			"Alegria: " + tablero[fila, columna]->getalegria() + "\r\n" +
			"miedo: " + tablero[fila, columna]->getMiedo() + "\r\n" +
			"Ira: " + tablero[fila, columna]->getira() + "\r\n" +
			"Tristeza: " + tablero[fila, columna]->gettristeza() + "\r\n" +
			"Disgusto: " + tablero[fila, columna]->getdisgusto() + "\r\n" + "\r\n" +
			"Tiempo de vida: " + tablero[fila, columna]->getContadorGeneral() + "\r\n" + "\r\n" +
			"Contador procreacion: " + tablero[fila, columna]->getContadorProcreacion() + "\r\n" + "\r\n" +
			tienePareja + "\r\n" + "\r\n" +
			"Tiempo general de la simulación: " + tiempoGeneral;

	}
	else
	{
		textBoxInfoNPC->Text = L"Aún no ha iniciado la simulación";
	}
	
	
}


