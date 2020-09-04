#pragma once

namespace SEA {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Threading;

		

	/// <summary>
	/// Resumen de Vista
	/// </summary>

	
#include "NPC.h"
	public ref class Vista : public System::Windows::Forms::Form
	{

	public:
		Vista(void);
		void correr();
	private: System::Windows::Forms::Panel^  panel2;
	public:
	private: System::Windows::Forms::Button^  buttonEnviarFiesta;
	private: System::Windows::Forms::NumericUpDown^  numericUpDownVariacionDesagradoFiesta;
	private: System::Windows::Forms::NumericUpDown^  numericUpDownVariacionAlegriaFiesta;
	private: System::Windows::Forms::NumericUpDown^  numericUpDownVariacionTristezaFiesta;
	private: System::Windows::Forms::NumericUpDown^  numericUpDownVariacionIraFiesta;
	private: System::Windows::Forms::NumericUpDown^  numericUpDownVariacionMiedoFiesta;
	private: System::Windows::Forms::Label^  label15;
	private: System::Windows::Forms::NumericUpDown^  numericUpDownDesagradoFiesta;
	private: System::Windows::Forms::NumericUpDown^  numericUpDownAlegriaFiesta;
	private: System::Windows::Forms::NumericUpDown^  numericUpDownTristezaFiesta;
	private: System::Windows::Forms::NumericUpDown^  numericUpDownIraFiesta;
	private: System::Windows::Forms::NumericUpDown^  numericUpDownMiedoFiesta;
	private: System::Windows::Forms::Label^  label16;
	private: System::Windows::Forms::Label^  label17;
	private: System::Windows::Forms::Label^  label18;
	private: System::Windows::Forms::Label^  label19;
	private: System::Windows::Forms::Label^  label20;
	private: System::Windows::Forms::Label^  label21;
	private: System::Windows::Forms::Button^  buttonEnviarIncendio;
	private: System::Windows::Forms::NumericUpDown^  numericUpDownVariacionDesagradoIncendio;
	private: System::Windows::Forms::NumericUpDown^  numericUpDownVariacionAlegriaIncendio;
	private: System::Windows::Forms::NumericUpDown^  numericUpDownVariacionTristezaIncendio;
	private: System::Windows::Forms::NumericUpDown^  numericUpDownVariacionIraIncendio;
	private: System::Windows::Forms::NumericUpDown^  numericUpDownVariacionMiedoIncendio;
	private: System::Windows::Forms::Label^  label22;
	private: System::Windows::Forms::NumericUpDown^  numericUpDownDesagradoIncendio;
	private: System::Windows::Forms::NumericUpDown^  numericUpDownAlegriaIncendio;
	private: System::Windows::Forms::NumericUpDown^  numericUpDownTristezaIncendio;
	private: System::Windows::Forms::NumericUpDown^  numericUpDownIraIncendio;
	private: System::Windows::Forms::NumericUpDown^  numericUpDownMiedoIncendio;
	private: System::Windows::Forms::Label^  label23;
	private: System::Windows::Forms::Label^  label24;
	private: System::Windows::Forms::Label^  label25;
	private: System::Windows::Forms::Label^  label26;
	private: System::Windows::Forms::Label^  label27;
	private: System::Windows::Forms::Label^  label28;
	private: System::Windows::Forms::Button^  buttonEnviarInundacion;
	private: System::Windows::Forms::NumericUpDown^  numericUpDownVariacionDesagradoInundacion;
	private: System::Windows::Forms::NumericUpDown^  numericUpDownVariacionAlegriaInundacion;
	private: System::Windows::Forms::NumericUpDown^  numericUpDownVariacionTristezaInundacion;
	private: System::Windows::Forms::NumericUpDown^  numericUpDownVariacionIraInundacion;
	private: System::Windows::Forms::NumericUpDown^  numericUpDownVariacionMiedoInundacion;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::NumericUpDown^  numericUpDownDesagradoInundacion;
	private: System::Windows::Forms::NumericUpDown^  numericUpDownAlegriaInundacion;
	private: System::Windows::Forms::NumericUpDown^  numericUpDownTristezaInundacion;
	private: System::Windows::Forms::NumericUpDown^  numericUpDownIraInundacion;
	private: System::Windows::Forms::NumericUpDown^  numericUpDownMiedoInundacion;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::Label^  label10;
	private: System::Windows::Forms::Label^  label11;
	private: System::Windows::Forms::Label^  label12;
	private: System::Windows::Forms::Label^  label13;
	private: System::Windows::Forms::Label^  label14;
	private: System::Windows::Forms::Button^  buttonEnviarTerremoto;
	private: System::Windows::Forms::NumericUpDown^  numericUpDownVariacionDesagradoTerremoto;
	private: System::Windows::Forms::NumericUpDown^  numericUpDownVariacionAlegriaTerremoto;
	private: System::Windows::Forms::NumericUpDown^  numericUpDownVariacionTristezaTerremoto;
	private: System::Windows::Forms::NumericUpDown^  numericUpDownVariacionIraTerremoto;
	private: System::Windows::Forms::NumericUpDown^  numericUpDownVariacionMiedoTerremoto;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::NumericUpDown^  numericUpDownDesagradoTerremoto;
	private: System::Windows::Forms::NumericUpDown^  numericUpDownAlegriaTerremoto;
	private: System::Windows::Forms::NumericUpDown^  numericUpDownTristezaTerremoto;
	private: System::Windows::Forms::NumericUpDown^  numericUpDownIraTerremoto;
	private: System::Windows::Forms::NumericUpDown^  numericUpDownMiedoTerremoto;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Button^  buttonEnviarPrimavera;
	private: System::Windows::Forms::NumericUpDown^  numericUpDownVariacionDesagradoPrimavera;
	private: System::Windows::Forms::NumericUpDown^  numericUpDownVariacionAlegriaPrimavera;
	private: System::Windows::Forms::NumericUpDown^  numericUpDownVariacionTristezaPrimavera;
	private: System::Windows::Forms::NumericUpDown^  numericUpDownVariacionIraPrimavera;
	private: System::Windows::Forms::NumericUpDown^  numericUpDownVariacionMiedoPrimavera;
	private: System::Windows::Forms::Label^  label29;
	private: System::Windows::Forms::NumericUpDown^  numericUpDownDesagradoPrimavera;
	private: System::Windows::Forms::NumericUpDown^  numericUpDownAlegriaPrimavera;
	private: System::Windows::Forms::NumericUpDown^  numericUpDownTristezaPrimavera;
	private: System::Windows::Forms::NumericUpDown^  numericUpDownIraPrimavera;
	private: System::Windows::Forms::NumericUpDown^  numericUpDownMiedoPrimavera;
	private: System::Windows::Forms::Label^  label30;
	private: System::Windows::Forms::Label^  label31;
	private: System::Windows::Forms::Label^  label32;
	private: System::Windows::Forms::Label^  label33;
	private: System::Windows::Forms::Label^  label34;
	private: System::Windows::Forms::Label^  label35;
	private: System::Windows::Forms::Button^  buttonEnviarDeporte;
	private: System::Windows::Forms::NumericUpDown^  numericUpDownVariacionDesagradoDeporte;
	private: System::Windows::Forms::NumericUpDown^  numericUpDownVariacionAlegriaDeporte;
	private: System::Windows::Forms::NumericUpDown^  numericUpDownVariacionTristezaDeporte;
	private: System::Windows::Forms::NumericUpDown^  numericUpDownVariacionIraDeporte;
	private: System::Windows::Forms::NumericUpDown^  numericUpDownVariacionMiedoDeporte;
	private: System::Windows::Forms::Label^  label36;
	private: System::Windows::Forms::NumericUpDown^  numericUpDownDesagradoDeporte;
	private: System::Windows::Forms::NumericUpDown^  numericUpDownAlegriaDeporte;
	private: System::Windows::Forms::NumericUpDown^  numericUpDownTristezaDeporte;
	private: System::Windows::Forms::NumericUpDown^  numericUpDownIraDeporte;
private: System::Windows::Forms::NumericUpDown^  numericUpDownMiedoDeporte;

	private: System::Windows::Forms::Label^  label37;
	private: System::Windows::Forms::Label^  label38;
	private: System::Windows::Forms::Label^  label39;
	private: System::Windows::Forms::Label^  label40;
	private: System::Windows::Forms::Label^  label41;
	private: System::Windows::Forms::Label^  label42;
private: System::Windows::Forms::Panel^  panel3;
private: System::Windows::Forms::ComboBox^  comboBoxDispercion;
private: System::Windows::Forms::Label^  label44;
private: System::Windows::Forms::NumericUpDown^  numericUpDownCantidad;
private: System::Windows::Forms::Label^  label43;
private: System::Windows::Forms::NumericUpDown^  numericUpDownTiempoMuerte;
private: System::Windows::Forms::Label^  label45;
private: System::Windows::Forms::Label^  label47;




private: System::Windows::Forms::Label^  label50;



private: System::Windows::Forms::Label^  label51;

private: System::Windows::Forms::NumericUpDown^  numericUpDownVariacionReproduccionMiedo;
private: System::Windows::Forms::NumericUpDown^  numericUpDownVariacionReproduccionIra;
private: System::Windows::Forms::NumericUpDown^  numericUpDownVariacionReproduccionTristeza;
private: System::Windows::Forms::NumericUpDown^  numericUpDownVariacionReproduccionAlegria;
private: System::Windows::Forms::NumericUpDown^  numericUpDownVariacionReproduccionDesagrado;

private: System::Windows::Forms::ComboBox^  comboBoxTipoAcercamiento;
private: System::Windows::Forms::Label^  label54;
private: System::Windows::Forms::NumericUpDown^  numericUpDownSensor;
private: System::Windows::Forms::Label^  label53;
private: System::Windows::Forms::NumericUpDown^  numericUpDownVariacionAcercamientoMiedo;
private: System::Windows::Forms::NumericUpDown^  numericUpDownVariacionAcercamientoIra;
private: System::Windows::Forms::NumericUpDown^  numericUpDownVariacionAcercamientoTristeza;
private: System::Windows::Forms::NumericUpDown^  numericUpDownVariacionAcercamientoAlegria;
private: System::Windows::Forms::NumericUpDown^  numericUpDownVariacionAcercamientoDesagrado;
private: System::Windows::Forms::Label^  label55;
private: System::Windows::Forms::Label^  label56;
private: System::Windows::Forms::NumericUpDown^  numericUpDownAcercamientoMiedo;
private: System::Windows::Forms::Label^  label57;
private: System::Windows::Forms::NumericUpDown^  numericUpDownAcercamientoIra;
private: System::Windows::Forms::NumericUpDown^  numericUpDownAcercamientoTristeza;
private: System::Windows::Forms::Label^  label58;
private: System::Windows::Forms::NumericUpDown^  numericUpDownAcercamientoAlegria;
private: System::Windows::Forms::Label^  label59;
private: System::Windows::Forms::Label^  label60;
private: System::Windows::Forms::Label^  label61;
private: System::Windows::Forms::NumericUpDown^  numericUpDownAcercamientoDesagrado;
private: System::Windows::Forms::NumericUpDown^  numericUpDownVariacionAlejamientoMiedo;
private: System::Windows::Forms::NumericUpDown^  numericUpDownVariacionAlejamientoIra;
private: System::Windows::Forms::NumericUpDown^  numericUpDownVariacionAlejamientoTristeza;
private: System::Windows::Forms::NumericUpDown^  numericUpDownVariacionAlejamientoAlegria;
private: System::Windows::Forms::NumericUpDown^  numericUpDownVariacionAlejamientoDesagrado;
private: System::Windows::Forms::Label^  label62;
private: System::Windows::Forms::Label^  label63;
private: System::Windows::Forms::NumericUpDown^  numericUpDownAlejamientoMiedo;
private: System::Windows::Forms::Label^  label64;
private: System::Windows::Forms::NumericUpDown^  numericUpDownAlejamientoIra;
private: System::Windows::Forms::NumericUpDown^  numericUpDownAlejamientoTristeza;
private: System::Windows::Forms::Label^  label65;
private: System::Windows::Forms::NumericUpDown^  numericUpDownAlejamientoAlegria;
private: System::Windows::Forms::Label^  label66;
private: System::Windows::Forms::Label^  label67;
private: System::Windows::Forms::Label^  label68;
private: System::Windows::Forms::NumericUpDown^  numericUpDownAlejamientoDesagrado;
private: System::Windows::Forms::NumericUpDown^  numericUpDownEventoGenericoDesagrado;
private: System::Windows::Forms::NumericUpDown^  numericUpDownEventoGenericoAlegria;
private: System::Windows::Forms::NumericUpDown^  numericUpDownEventoGenericoTristeza;
private: System::Windows::Forms::NumericUpDown^  numericUpDownEventoGenericoIra;
private: System::Windows::Forms::NumericUpDown^  numericUpDownEventoGenericoMiedo;
private: System::Windows::Forms::Label^  label70;
private: System::Windows::Forms::Label^  label71;
private: System::Windows::Forms::Label^  label72;
private: System::Windows::Forms::Label^  label73;
private: System::Windows::Forms::Label^  label74;
private: System::Windows::Forms::Label^  label75;
private: System::Windows::Forms::NumericUpDown^  numericUpDownLargoPasos;
private: System::Windows::Forms::Label^  label69;
private: System::Windows::Forms::NumericUpDown^  numericUpDownTiempoReproduccion;
private: System::Windows::Forms::Label^  label76;



private: System::Windows::Forms::Label^  label49;

private: System::Windows::Forms::Label^  label48;
private: System::Windows::Forms::Label^  label46;
private: System::Windows::Forms::Label^  label77;
private: System::Windows::Forms::Label^  label52;





	public:

	public:

	public:
		int Data;

		//Funciones auxiliares
		void CrearTablero();
		void asignarNPC();
		void dibujarNPC();		
		void afectarNpcPorCuadricula(int cuadricula, int tamanioCuadricula, NPC^ genoma); //Esta función tiene bastante peso, podría contener partes primordiales de la simulación.
		NPC^ genomaCuadricula(int cuadricula, int tamanioCuadricula);
		int seleccionCuadranteAcercamiento(int fila, int columna);
		int seleccionCuadranteAlejamiento(int fila, int columna);
		void moverHaciaCuadrante(NPC^ nPC, int fila, int columna, int cuadrante);
		void guardarRegistro();
		String^ generarResultados();
		void nacerNPC(NPC^ nuevo, int fila, int columna);
		String^ agrupacionCuadriculas();

			
		

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~Vista()
		{			
			if (components)
			{				
				if (newThread->IsAlive)
					newThread->Abort();				
			}
			delete components;
			
		}
	private: System::Windows::Forms::Panel^  panel1;
	private: System::Windows::Forms::GroupBox^  groupBoxInfoNPC;
	private: System::Windows::Forms::GroupBox^  groupBoxEventos;
	private: System::Windows::Forms::GroupBox^  groupBoxNPC;

	private: System::Windows::Forms::GroupBox^  groupBoxControlSimulacion;
	private: System::Windows::Forms::TextBox^  textBoxInfoNPC;
	private: System::Windows::Forms::TrackBar^  trackBar1;
	private: System::Windows::Forms::Button^  buttonDetener;
	private: System::Windows::Forms::Button^  buttonAvanzar;
	private: System::Windows::Forms::Button^  buttonPausar;
	private: System::Windows::Forms::Button^  buttonIniciar;
	protected:


	protected:

	private:
	
		array<NPC^, 2>^ tablero;
		Thread^ newThread;
		ThreadStart^ threadDelegate;
		int tamanio;
		bool detener;
		int prueba;
		int cantidadNPC;
		int tipoDistribucion;	
		array<Label^, 2>^ tableroVisual;
		bool hayEvento;
		NPC^ genomaEvento;
		String^ tipoAcercamiento;
		int velocidad;	
		NPC^ genomaAcercamiento;
		NPC^ genomaAlejamiento;
		int largoPasos;
		bool pausa;
		bool avanzar;
		bool inicioSimulacion;
		int tiempoGeneral;
		int nacidos;
		int muertos;
		String^ dispersion;		
		
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>
		System::ComponentModel::Container ^components;

		#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Vista::typeid));
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->groupBoxInfoNPC = (gcnew System::Windows::Forms::GroupBox());
			this->textBoxInfoNPC = (gcnew System::Windows::Forms::TextBox());
			this->groupBoxEventos = (gcnew System::Windows::Forms::GroupBox());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->numericUpDownEventoGenericoDesagrado = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDownEventoGenericoAlegria = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDownEventoGenericoTristeza = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDownEventoGenericoIra = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDownEventoGenericoMiedo = (gcnew System::Windows::Forms::NumericUpDown());
			this->label70 = (gcnew System::Windows::Forms::Label());
			this->label71 = (gcnew System::Windows::Forms::Label());
			this->label72 = (gcnew System::Windows::Forms::Label());
			this->label73 = (gcnew System::Windows::Forms::Label());
			this->label74 = (gcnew System::Windows::Forms::Label());
			this->label75 = (gcnew System::Windows::Forms::Label());
			this->buttonEnviarPrimavera = (gcnew System::Windows::Forms::Button());
			this->numericUpDownVariacionDesagradoPrimavera = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDownVariacionAlegriaPrimavera = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDownVariacionTristezaPrimavera = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDownVariacionIraPrimavera = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDownVariacionMiedoPrimavera = (gcnew System::Windows::Forms::NumericUpDown());
			this->label29 = (gcnew System::Windows::Forms::Label());
			this->numericUpDownDesagradoPrimavera = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDownAlegriaPrimavera = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDownTristezaPrimavera = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDownIraPrimavera = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDownMiedoPrimavera = (gcnew System::Windows::Forms::NumericUpDown());
			this->label30 = (gcnew System::Windows::Forms::Label());
			this->label31 = (gcnew System::Windows::Forms::Label());
			this->label32 = (gcnew System::Windows::Forms::Label());
			this->label33 = (gcnew System::Windows::Forms::Label());
			this->label34 = (gcnew System::Windows::Forms::Label());
			this->label35 = (gcnew System::Windows::Forms::Label());
			this->buttonEnviarDeporte = (gcnew System::Windows::Forms::Button());
			this->numericUpDownVariacionDesagradoDeporte = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDownVariacionAlegriaDeporte = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDownVariacionTristezaDeporte = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDownVariacionIraDeporte = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDownVariacionMiedoDeporte = (gcnew System::Windows::Forms::NumericUpDown());
			this->label36 = (gcnew System::Windows::Forms::Label());
			this->numericUpDownDesagradoDeporte = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDownAlegriaDeporte = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDownTristezaDeporte = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDownIraDeporte = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDownMiedoDeporte = (gcnew System::Windows::Forms::NumericUpDown());
			this->label37 = (gcnew System::Windows::Forms::Label());
			this->label38 = (gcnew System::Windows::Forms::Label());
			this->label39 = (gcnew System::Windows::Forms::Label());
			this->label40 = (gcnew System::Windows::Forms::Label());
			this->label41 = (gcnew System::Windows::Forms::Label());
			this->label42 = (gcnew System::Windows::Forms::Label());
			this->buttonEnviarFiesta = (gcnew System::Windows::Forms::Button());
			this->numericUpDownVariacionDesagradoFiesta = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDownVariacionAlegriaFiesta = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDownVariacionTristezaFiesta = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDownVariacionIraFiesta = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDownVariacionMiedoFiesta = (gcnew System::Windows::Forms::NumericUpDown());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->numericUpDownDesagradoFiesta = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDownAlegriaFiesta = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDownTristezaFiesta = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDownIraFiesta = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDownMiedoFiesta = (gcnew System::Windows::Forms::NumericUpDown());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->buttonEnviarIncendio = (gcnew System::Windows::Forms::Button());
			this->numericUpDownVariacionDesagradoIncendio = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDownVariacionAlegriaIncendio = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDownVariacionTristezaIncendio = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDownVariacionIraIncendio = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDownVariacionMiedoIncendio = (gcnew System::Windows::Forms::NumericUpDown());
			this->label22 = (gcnew System::Windows::Forms::Label());
			this->numericUpDownDesagradoIncendio = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDownAlegriaIncendio = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDownTristezaIncendio = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDownIraIncendio = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDownMiedoIncendio = (gcnew System::Windows::Forms::NumericUpDown());
			this->label23 = (gcnew System::Windows::Forms::Label());
			this->label24 = (gcnew System::Windows::Forms::Label());
			this->label25 = (gcnew System::Windows::Forms::Label());
			this->label26 = (gcnew System::Windows::Forms::Label());
			this->label27 = (gcnew System::Windows::Forms::Label());
			this->label28 = (gcnew System::Windows::Forms::Label());
			this->buttonEnviarInundacion = (gcnew System::Windows::Forms::Button());
			this->numericUpDownVariacionDesagradoInundacion = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDownVariacionAlegriaInundacion = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDownVariacionTristezaInundacion = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDownVariacionIraInundacion = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDownVariacionMiedoInundacion = (gcnew System::Windows::Forms::NumericUpDown());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->numericUpDownDesagradoInundacion = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDownAlegriaInundacion = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDownTristezaInundacion = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDownIraInundacion = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDownMiedoInundacion = (gcnew System::Windows::Forms::NumericUpDown());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->buttonEnviarTerremoto = (gcnew System::Windows::Forms::Button());
			this->numericUpDownVariacionDesagradoTerremoto = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDownVariacionAlegriaTerremoto = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDownVariacionTristezaTerremoto = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDownVariacionIraTerremoto = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDownVariacionMiedoTerremoto = (gcnew System::Windows::Forms::NumericUpDown());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->numericUpDownDesagradoTerremoto = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDownAlegriaTerremoto = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDownTristezaTerremoto = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDownIraTerremoto = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDownMiedoTerremoto = (gcnew System::Windows::Forms::NumericUpDown());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->groupBoxNPC = (gcnew System::Windows::Forms::GroupBox());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->numericUpDownTiempoReproduccion = (gcnew System::Windows::Forms::NumericUpDown());
			this->label76 = (gcnew System::Windows::Forms::Label());
			this->numericUpDownLargoPasos = (gcnew System::Windows::Forms::NumericUpDown());
			this->label69 = (gcnew System::Windows::Forms::Label());
			this->numericUpDownVariacionAlejamientoMiedo = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDownVariacionAlejamientoIra = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDownVariacionAlejamientoTristeza = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDownVariacionAlejamientoAlegria = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDownVariacionAlejamientoDesagrado = (gcnew System::Windows::Forms::NumericUpDown());
			this->label62 = (gcnew System::Windows::Forms::Label());
			this->label63 = (gcnew System::Windows::Forms::Label());
			this->numericUpDownAlejamientoMiedo = (gcnew System::Windows::Forms::NumericUpDown());
			this->label64 = (gcnew System::Windows::Forms::Label());
			this->numericUpDownAlejamientoIra = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDownAlejamientoTristeza = (gcnew System::Windows::Forms::NumericUpDown());
			this->label65 = (gcnew System::Windows::Forms::Label());
			this->numericUpDownAlejamientoAlegria = (gcnew System::Windows::Forms::NumericUpDown());
			this->label66 = (gcnew System::Windows::Forms::Label());
			this->label67 = (gcnew System::Windows::Forms::Label());
			this->label68 = (gcnew System::Windows::Forms::Label());
			this->numericUpDownAlejamientoDesagrado = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDownVariacionAcercamientoMiedo = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDownVariacionAcercamientoIra = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDownVariacionAcercamientoTristeza = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDownVariacionAcercamientoAlegria = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDownVariacionAcercamientoDesagrado = (gcnew System::Windows::Forms::NumericUpDown());
			this->label55 = (gcnew System::Windows::Forms::Label());
			this->label56 = (gcnew System::Windows::Forms::Label());
			this->numericUpDownAcercamientoMiedo = (gcnew System::Windows::Forms::NumericUpDown());
			this->label57 = (gcnew System::Windows::Forms::Label());
			this->numericUpDownAcercamientoIra = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDownAcercamientoTristeza = (gcnew System::Windows::Forms::NumericUpDown());
			this->label58 = (gcnew System::Windows::Forms::Label());
			this->numericUpDownAcercamientoAlegria = (gcnew System::Windows::Forms::NumericUpDown());
			this->label59 = (gcnew System::Windows::Forms::Label());
			this->label60 = (gcnew System::Windows::Forms::Label());
			this->label61 = (gcnew System::Windows::Forms::Label());
			this->numericUpDownAcercamientoDesagrado = (gcnew System::Windows::Forms::NumericUpDown());
			this->comboBoxTipoAcercamiento = (gcnew System::Windows::Forms::ComboBox());
			this->label54 = (gcnew System::Windows::Forms::Label());
			this->numericUpDownSensor = (gcnew System::Windows::Forms::NumericUpDown());
			this->label53 = (gcnew System::Windows::Forms::Label());
			this->numericUpDownVariacionReproduccionMiedo = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDownVariacionReproduccionIra = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDownVariacionReproduccionTristeza = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDownVariacionReproduccionAlegria = (gcnew System::Windows::Forms::NumericUpDown());
			this->numericUpDownVariacionReproduccionDesagrado = (gcnew System::Windows::Forms::NumericUpDown());
			this->label51 = (gcnew System::Windows::Forms::Label());
			this->label50 = (gcnew System::Windows::Forms::Label());
			this->label49 = (gcnew System::Windows::Forms::Label());
			this->label48 = (gcnew System::Windows::Forms::Label());
			this->label47 = (gcnew System::Windows::Forms::Label());
			this->label46 = (gcnew System::Windows::Forms::Label());
			this->numericUpDownTiempoMuerte = (gcnew System::Windows::Forms::NumericUpDown());
			this->label45 = (gcnew System::Windows::Forms::Label());
			this->comboBoxDispercion = (gcnew System::Windows::Forms::ComboBox());
			this->label44 = (gcnew System::Windows::Forms::Label());
			this->numericUpDownCantidad = (gcnew System::Windows::Forms::NumericUpDown());
			this->label43 = (gcnew System::Windows::Forms::Label());
			this->groupBoxControlSimulacion = (gcnew System::Windows::Forms::GroupBox());
			this->label77 = (gcnew System::Windows::Forms::Label());
			this->label52 = (gcnew System::Windows::Forms::Label());
			this->buttonDetener = (gcnew System::Windows::Forms::Button());
			this->buttonAvanzar = (gcnew System::Windows::Forms::Button());
			this->buttonPausar = (gcnew System::Windows::Forms::Button());
			this->buttonIniciar = (gcnew System::Windows::Forms::Button());
			this->trackBar1 = (gcnew System::Windows::Forms::TrackBar());
			this->groupBoxInfoNPC->SuspendLayout();
			this->groupBoxEventos->SuspendLayout();
			this->panel2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownEventoGenericoDesagrado))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownEventoGenericoAlegria))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownEventoGenericoTristeza))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownEventoGenericoIra))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownEventoGenericoMiedo))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownVariacionDesagradoPrimavera))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownVariacionAlegriaPrimavera))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownVariacionTristezaPrimavera))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownVariacionIraPrimavera))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownVariacionMiedoPrimavera))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownDesagradoPrimavera))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownAlegriaPrimavera))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownTristezaPrimavera))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownIraPrimavera))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownMiedoPrimavera))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownVariacionDesagradoDeporte))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownVariacionAlegriaDeporte))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownVariacionTristezaDeporte))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownVariacionIraDeporte))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownVariacionMiedoDeporte))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownDesagradoDeporte))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownAlegriaDeporte))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownTristezaDeporte))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownIraDeporte))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownMiedoDeporte))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownVariacionDesagradoFiesta))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownVariacionAlegriaFiesta))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownVariacionTristezaFiesta))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownVariacionIraFiesta))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownVariacionMiedoFiesta))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownDesagradoFiesta))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownAlegriaFiesta))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownTristezaFiesta))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownIraFiesta))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownMiedoFiesta))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownVariacionDesagradoIncendio))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownVariacionAlegriaIncendio))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownVariacionTristezaIncendio))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownVariacionIraIncendio))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownVariacionMiedoIncendio))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownDesagradoIncendio))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownAlegriaIncendio))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownTristezaIncendio))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownIraIncendio))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownMiedoIncendio))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownVariacionDesagradoInundacion))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownVariacionAlegriaInundacion))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownVariacionTristezaInundacion))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownVariacionIraInundacion))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownVariacionMiedoInundacion))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownDesagradoInundacion))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownAlegriaInundacion))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownTristezaInundacion))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownIraInundacion))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownMiedoInundacion))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownVariacionDesagradoTerremoto))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownVariacionAlegriaTerremoto))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownVariacionTristezaTerremoto))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownVariacionIraTerremoto))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownVariacionMiedoTerremoto))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownDesagradoTerremoto))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownAlegriaTerremoto))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownTristezaTerremoto))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownIraTerremoto))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownMiedoTerremoto))->BeginInit();
			this->groupBoxNPC->SuspendLayout();
			this->panel3->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownTiempoReproduccion))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownLargoPasos))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownVariacionAlejamientoMiedo))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownVariacionAlejamientoIra))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownVariacionAlejamientoTristeza))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownVariacionAlejamientoAlegria))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownVariacionAlejamientoDesagrado))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownAlejamientoMiedo))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownAlejamientoIra))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownAlejamientoTristeza))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownAlejamientoAlegria))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownAlejamientoDesagrado))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownVariacionAcercamientoMiedo))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownVariacionAcercamientoIra))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownVariacionAcercamientoTristeza))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownVariacionAcercamientoAlegria))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownVariacionAcercamientoDesagrado))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownAcercamientoMiedo))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownAcercamientoIra))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownAcercamientoTristeza))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownAcercamientoAlegria))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownAcercamientoDesagrado))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownSensor))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownVariacionReproduccionMiedo))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownVariacionReproduccionIra))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownVariacionReproduccionTristeza))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownVariacionReproduccionAlegria))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownVariacionReproduccionDesagrado))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownTiempoMuerte))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownCantidad))->BeginInit();
			this->groupBoxControlSimulacion->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBar1))->BeginInit();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->AutoScroll = true;
			this->panel1->Location = System::Drawing::Point(12, 12);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(600, 600);
			this->panel1->TabIndex = 0;
			// 
			// groupBoxInfoNPC
			// 
			this->groupBoxInfoNPC->Controls->Add(this->textBoxInfoNPC);
			this->groupBoxInfoNPC->Location = System::Drawing::Point(618, 213);
			this->groupBoxInfoNPC->Name = L"groupBoxInfoNPC";
			this->groupBoxInfoNPC->Size = System::Drawing::Size(156, 399);
			this->groupBoxInfoNPC->TabIndex = 1;
			this->groupBoxInfoNPC->TabStop = false;
			this->groupBoxInfoNPC->Text = L"Info NPC";
			// 
			// textBoxInfoNPC
			// 
			this->textBoxInfoNPC->Location = System::Drawing::Point(3, 16);
			this->textBoxInfoNPC->Multiline = true;
			this->textBoxInfoNPC->Name = L"textBoxInfoNPC";
			this->textBoxInfoNPC->ReadOnly = true;
			this->textBoxInfoNPC->Size = System::Drawing::Size(144, 380);
			this->textBoxInfoNPC->TabIndex = 0;
			// 
			// groupBoxEventos
			// 
			this->groupBoxEventos->Controls->Add(this->panel2);
			this->groupBoxEventos->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->groupBoxEventos->Location = System::Drawing::Point(621, 12);
			this->groupBoxEventos->Name = L"groupBoxEventos";
			this->groupBoxEventos->Size = System::Drawing::Size(413, 195);
			this->groupBoxEventos->TabIndex = 2;
			this->groupBoxEventos->TabStop = false;
			this->groupBoxEventos->Text = L"Config Eventos";
			// 
			// panel2
			// 
			this->panel2->AutoScroll = true;
			this->panel2->Controls->Add(this->numericUpDownEventoGenericoDesagrado);
			this->panel2->Controls->Add(this->numericUpDownEventoGenericoAlegria);
			this->panel2->Controls->Add(this->numericUpDownEventoGenericoTristeza);
			this->panel2->Controls->Add(this->numericUpDownEventoGenericoIra);
			this->panel2->Controls->Add(this->numericUpDownEventoGenericoMiedo);
			this->panel2->Controls->Add(this->label70);
			this->panel2->Controls->Add(this->label71);
			this->panel2->Controls->Add(this->label72);
			this->panel2->Controls->Add(this->label73);
			this->panel2->Controls->Add(this->label74);
			this->panel2->Controls->Add(this->label75);
			this->panel2->Controls->Add(this->buttonEnviarPrimavera);
			this->panel2->Controls->Add(this->numericUpDownVariacionDesagradoPrimavera);
			this->panel2->Controls->Add(this->numericUpDownVariacionAlegriaPrimavera);
			this->panel2->Controls->Add(this->numericUpDownVariacionTristezaPrimavera);
			this->panel2->Controls->Add(this->numericUpDownVariacionIraPrimavera);
			this->panel2->Controls->Add(this->numericUpDownVariacionMiedoPrimavera);
			this->panel2->Controls->Add(this->label29);
			this->panel2->Controls->Add(this->numericUpDownDesagradoPrimavera);
			this->panel2->Controls->Add(this->numericUpDownAlegriaPrimavera);
			this->panel2->Controls->Add(this->numericUpDownTristezaPrimavera);
			this->panel2->Controls->Add(this->numericUpDownIraPrimavera);
			this->panel2->Controls->Add(this->numericUpDownMiedoPrimavera);
			this->panel2->Controls->Add(this->label30);
			this->panel2->Controls->Add(this->label31);
			this->panel2->Controls->Add(this->label32);
			this->panel2->Controls->Add(this->label33);
			this->panel2->Controls->Add(this->label34);
			this->panel2->Controls->Add(this->label35);
			this->panel2->Controls->Add(this->buttonEnviarDeporte);
			this->panel2->Controls->Add(this->numericUpDownVariacionDesagradoDeporte);
			this->panel2->Controls->Add(this->numericUpDownVariacionAlegriaDeporte);
			this->panel2->Controls->Add(this->numericUpDownVariacionTristezaDeporte);
			this->panel2->Controls->Add(this->numericUpDownVariacionIraDeporte);
			this->panel2->Controls->Add(this->numericUpDownVariacionMiedoDeporte);
			this->panel2->Controls->Add(this->label36);
			this->panel2->Controls->Add(this->numericUpDownDesagradoDeporte);
			this->panel2->Controls->Add(this->numericUpDownAlegriaDeporte);
			this->panel2->Controls->Add(this->numericUpDownTristezaDeporte);
			this->panel2->Controls->Add(this->numericUpDownIraDeporte);
			this->panel2->Controls->Add(this->numericUpDownMiedoDeporte);
			this->panel2->Controls->Add(this->label37);
			this->panel2->Controls->Add(this->label38);
			this->panel2->Controls->Add(this->label39);
			this->panel2->Controls->Add(this->label40);
			this->panel2->Controls->Add(this->label41);
			this->panel2->Controls->Add(this->label42);
			this->panel2->Controls->Add(this->buttonEnviarFiesta);
			this->panel2->Controls->Add(this->numericUpDownVariacionDesagradoFiesta);
			this->panel2->Controls->Add(this->numericUpDownVariacionAlegriaFiesta);
			this->panel2->Controls->Add(this->numericUpDownVariacionTristezaFiesta);
			this->panel2->Controls->Add(this->numericUpDownVariacionIraFiesta);
			this->panel2->Controls->Add(this->numericUpDownVariacionMiedoFiesta);
			this->panel2->Controls->Add(this->label15);
			this->panel2->Controls->Add(this->numericUpDownDesagradoFiesta);
			this->panel2->Controls->Add(this->numericUpDownAlegriaFiesta);
			this->panel2->Controls->Add(this->numericUpDownTristezaFiesta);
			this->panel2->Controls->Add(this->numericUpDownIraFiesta);
			this->panel2->Controls->Add(this->numericUpDownMiedoFiesta);
			this->panel2->Controls->Add(this->label16);
			this->panel2->Controls->Add(this->label17);
			this->panel2->Controls->Add(this->label18);
			this->panel2->Controls->Add(this->label19);
			this->panel2->Controls->Add(this->label20);
			this->panel2->Controls->Add(this->label21);
			this->panel2->Controls->Add(this->buttonEnviarIncendio);
			this->panel2->Controls->Add(this->numericUpDownVariacionDesagradoIncendio);
			this->panel2->Controls->Add(this->numericUpDownVariacionAlegriaIncendio);
			this->panel2->Controls->Add(this->numericUpDownVariacionTristezaIncendio);
			this->panel2->Controls->Add(this->numericUpDownVariacionIraIncendio);
			this->panel2->Controls->Add(this->numericUpDownVariacionMiedoIncendio);
			this->panel2->Controls->Add(this->label22);
			this->panel2->Controls->Add(this->numericUpDownDesagradoIncendio);
			this->panel2->Controls->Add(this->numericUpDownAlegriaIncendio);
			this->panel2->Controls->Add(this->numericUpDownTristezaIncendio);
			this->panel2->Controls->Add(this->numericUpDownIraIncendio);
			this->panel2->Controls->Add(this->numericUpDownMiedoIncendio);
			this->panel2->Controls->Add(this->label23);
			this->panel2->Controls->Add(this->label24);
			this->panel2->Controls->Add(this->label25);
			this->panel2->Controls->Add(this->label26);
			this->panel2->Controls->Add(this->label27);
			this->panel2->Controls->Add(this->label28);
			this->panel2->Controls->Add(this->buttonEnviarInundacion);
			this->panel2->Controls->Add(this->numericUpDownVariacionDesagradoInundacion);
			this->panel2->Controls->Add(this->numericUpDownVariacionAlegriaInundacion);
			this->panel2->Controls->Add(this->numericUpDownVariacionTristezaInundacion);
			this->panel2->Controls->Add(this->numericUpDownVariacionIraInundacion);
			this->panel2->Controls->Add(this->numericUpDownVariacionMiedoInundacion);
			this->panel2->Controls->Add(this->label8);
			this->panel2->Controls->Add(this->numericUpDownDesagradoInundacion);
			this->panel2->Controls->Add(this->numericUpDownAlegriaInundacion);
			this->panel2->Controls->Add(this->numericUpDownTristezaInundacion);
			this->panel2->Controls->Add(this->numericUpDownIraInundacion);
			this->panel2->Controls->Add(this->numericUpDownMiedoInundacion);
			this->panel2->Controls->Add(this->label9);
			this->panel2->Controls->Add(this->label10);
			this->panel2->Controls->Add(this->label11);
			this->panel2->Controls->Add(this->label12);
			this->panel2->Controls->Add(this->label13);
			this->panel2->Controls->Add(this->label14);
			this->panel2->Controls->Add(this->buttonEnviarTerremoto);
			this->panel2->Controls->Add(this->numericUpDownVariacionDesagradoTerremoto);
			this->panel2->Controls->Add(this->numericUpDownVariacionAlegriaTerremoto);
			this->panel2->Controls->Add(this->numericUpDownVariacionTristezaTerremoto);
			this->panel2->Controls->Add(this->numericUpDownVariacionIraTerremoto);
			this->panel2->Controls->Add(this->numericUpDownVariacionMiedoTerremoto);
			this->panel2->Controls->Add(this->label7);
			this->panel2->Controls->Add(this->numericUpDownDesagradoTerremoto);
			this->panel2->Controls->Add(this->numericUpDownAlegriaTerremoto);
			this->panel2->Controls->Add(this->numericUpDownTristezaTerremoto);
			this->panel2->Controls->Add(this->numericUpDownIraTerremoto);
			this->panel2->Controls->Add(this->numericUpDownMiedoTerremoto);
			this->panel2->Controls->Add(this->label6);
			this->panel2->Controls->Add(this->label5);
			this->panel2->Controls->Add(this->label4);
			this->panel2->Controls->Add(this->label3);
			this->panel2->Controls->Add(this->label2);
			this->panel2->Controls->Add(this->label1);
			this->panel2->Location = System::Drawing::Point(6, 16);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(411, 173);
			this->panel2->TabIndex = 0;
			// 
			// numericUpDownEventoGenericoDesagrado
			// 
			this->numericUpDownEventoGenericoDesagrado->Location = System::Drawing::Point(318, 25);
			this->numericUpDownEventoGenericoDesagrado->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->numericUpDownEventoGenericoDesagrado->Name = L"numericUpDownEventoGenericoDesagrado";
			this->numericUpDownEventoGenericoDesagrado->Size = System::Drawing::Size(41, 20);
			this->numericUpDownEventoGenericoDesagrado->TabIndex = 154;
			this->numericUpDownEventoGenericoDesagrado->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 25, 0, 0, 0 });
			// 
			// numericUpDownEventoGenericoAlegria
			// 
			this->numericUpDownEventoGenericoAlegria->Location = System::Drawing::Point(268, 25);
			this->numericUpDownEventoGenericoAlegria->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->numericUpDownEventoGenericoAlegria->Name = L"numericUpDownEventoGenericoAlegria";
			this->numericUpDownEventoGenericoAlegria->Size = System::Drawing::Size(41, 20);
			this->numericUpDownEventoGenericoAlegria->TabIndex = 153;
			this->numericUpDownEventoGenericoAlegria->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 25, 0, 0, 0 });
			// 
			// numericUpDownEventoGenericoTristeza
			// 
			this->numericUpDownEventoGenericoTristeza->Location = System::Drawing::Point(211, 25);
			this->numericUpDownEventoGenericoTristeza->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->numericUpDownEventoGenericoTristeza->Name = L"numericUpDownEventoGenericoTristeza";
			this->numericUpDownEventoGenericoTristeza->Size = System::Drawing::Size(41, 20);
			this->numericUpDownEventoGenericoTristeza->TabIndex = 152;
			this->numericUpDownEventoGenericoTristeza->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 25, 0, 0, 0 });
			// 
			// numericUpDownEventoGenericoIra
			// 
			this->numericUpDownEventoGenericoIra->Location = System::Drawing::Point(156, 25);
			this->numericUpDownEventoGenericoIra->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->numericUpDownEventoGenericoIra->Name = L"numericUpDownEventoGenericoIra";
			this->numericUpDownEventoGenericoIra->Size = System::Drawing::Size(41, 20);
			this->numericUpDownEventoGenericoIra->TabIndex = 151;
			this->numericUpDownEventoGenericoIra->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 25, 0, 0, 0 });
			// 
			// numericUpDownEventoGenericoMiedo
			// 
			this->numericUpDownEventoGenericoMiedo->Location = System::Drawing::Point(101, 25);
			this->numericUpDownEventoGenericoMiedo->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->numericUpDownEventoGenericoMiedo->Name = L"numericUpDownEventoGenericoMiedo";
			this->numericUpDownEventoGenericoMiedo->Size = System::Drawing::Size(41, 20);
			this->numericUpDownEventoGenericoMiedo->TabIndex = 150;
			this->numericUpDownEventoGenericoMiedo->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 25, 0, 0, 0 });
			// 
			// label70
			// 
			this->label70->AutoSize = true;
			this->label70->Location = System::Drawing::Point(309, 9);
			this->label70->Name = L"label70";
			this->label70->Size = System::Drawing::Size(59, 13);
			this->label70->TabIndex = 149;
			this->label70->Text = L"Desagrado";
			// 
			// label71
			// 
			this->label71->AutoSize = true;
			this->label71->Location = System::Drawing::Point(259, 9);
			this->label71->Name = L"label71";
			this->label71->Size = System::Drawing::Size(39, 13);
			this->label71->TabIndex = 148;
			this->label71->Text = L"Alegria";
			// 
			// label72
			// 
			this->label72->AutoSize = true;
			this->label72->Location = System::Drawing::Point(202, 9);
			this->label72->Name = L"label72";
			this->label72->Size = System::Drawing::Size(44, 13);
			this->label72->TabIndex = 147;
			this->label72->Text = L"Tristeza";
			// 
			// label73
			// 
			this->label73->AutoSize = true;
			this->label73->Location = System::Drawing::Point(147, 9);
			this->label73->Name = L"label73";
			this->label73->Size = System::Drawing::Size(19, 13);
			this->label73->TabIndex = 146;
			this->label73->Text = L"Ira";
			// 
			// label74
			// 
			this->label74->AutoSize = true;
			this->label74->Location = System::Drawing::Point(92, 9);
			this->label74->Name = L"label74";
			this->label74->Size = System::Drawing::Size(36, 13);
			this->label74->TabIndex = 145;
			this->label74->Text = L"Miedo";
			// 
			// label75
			// 
			this->label75->AutoSize = true;
			this->label75->Location = System::Drawing::Point(6, 9);
			this->label75->Name = L"label75";
			this->label75->Size = System::Drawing::Size(85, 13);
			this->label75->TabIndex = 144;
			this->label75->Text = L"Evento generico";
			// 
			// buttonEnviarPrimavera
			// 
			this->buttonEnviarPrimavera->Location = System::Drawing::Point(344, 458);
			this->buttonEnviarPrimavera->Name = L"buttonEnviarPrimavera";
			this->buttonEnviarPrimavera->Size = System::Drawing::Size(47, 46);
			this->buttonEnviarPrimavera->TabIndex = 143;
			this->buttonEnviarPrimavera->Text = L"Enviar";
			this->buttonEnviarPrimavera->UseVisualStyleBackColor = true;
			this->buttonEnviarPrimavera->Click += gcnew System::EventHandler(this, &Vista::buttonEnviarPrimavera_Click);
			// 
			// numericUpDownVariacionDesagradoPrimavera
			// 
			this->numericUpDownVariacionDesagradoPrimavera->Location = System::Drawing::Point(297, 484);
			this->numericUpDownVariacionDesagradoPrimavera->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) {
				1, 0, 0,
					0
			});
			this->numericUpDownVariacionDesagradoPrimavera->Name = L"numericUpDownVariacionDesagradoPrimavera";
			this->numericUpDownVariacionDesagradoPrimavera->Size = System::Drawing::Size(41, 20);
			this->numericUpDownVariacionDesagradoPrimavera->TabIndex = 142;
			this->numericUpDownVariacionDesagradoPrimavera->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 20, 0, 0, 0 });
			// 
			// numericUpDownVariacionAlegriaPrimavera
			// 
			this->numericUpDownVariacionAlegriaPrimavera->Location = System::Drawing::Point(247, 484);
			this->numericUpDownVariacionAlegriaPrimavera->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->numericUpDownVariacionAlegriaPrimavera->Name = L"numericUpDownVariacionAlegriaPrimavera";
			this->numericUpDownVariacionAlegriaPrimavera->Size = System::Drawing::Size(41, 20);
			this->numericUpDownVariacionAlegriaPrimavera->TabIndex = 141;
			this->numericUpDownVariacionAlegriaPrimavera->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 80, 0, 0, 0 });
			// 
			// numericUpDownVariacionTristezaPrimavera
			// 
			this->numericUpDownVariacionTristezaPrimavera->Location = System::Drawing::Point(190, 484);
			this->numericUpDownVariacionTristezaPrimavera->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->numericUpDownVariacionTristezaPrimavera->Name = L"numericUpDownVariacionTristezaPrimavera";
			this->numericUpDownVariacionTristezaPrimavera->Size = System::Drawing::Size(41, 20);
			this->numericUpDownVariacionTristezaPrimavera->TabIndex = 140;
			this->numericUpDownVariacionTristezaPrimavera->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 30, 0, 0, 0 });
			// 
			// numericUpDownVariacionIraPrimavera
			// 
			this->numericUpDownVariacionIraPrimavera->Location = System::Drawing::Point(135, 484);
			this->numericUpDownVariacionIraPrimavera->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->numericUpDownVariacionIraPrimavera->Name = L"numericUpDownVariacionIraPrimavera";
			this->numericUpDownVariacionIraPrimavera->Size = System::Drawing::Size(41, 20);
			this->numericUpDownVariacionIraPrimavera->TabIndex = 139;
			this->numericUpDownVariacionIraPrimavera->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 20, 0, 0, 0 });
			// 
			// numericUpDownVariacionMiedoPrimavera
			// 
			this->numericUpDownVariacionMiedoPrimavera->Location = System::Drawing::Point(80, 484);
			this->numericUpDownVariacionMiedoPrimavera->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->numericUpDownVariacionMiedoPrimavera->Name = L"numericUpDownVariacionMiedoPrimavera";
			this->numericUpDownVariacionMiedoPrimavera->Size = System::Drawing::Size(41, 20);
			this->numericUpDownVariacionMiedoPrimavera->TabIndex = 138;
			this->numericUpDownVariacionMiedoPrimavera->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 25, 0, 0, 0 });
			// 
			// label29
			// 
			this->label29->AutoSize = true;
			this->label29->Location = System::Drawing::Point(19, 481);
			this->label29->Name = L"label29";
			this->label29->Size = System::Drawing::Size(58, 13);
			this->label29->TabIndex = 137;
			this->label29->Text = L"Afectación";
			// 
			// numericUpDownDesagradoPrimavera
			// 
			this->numericUpDownDesagradoPrimavera->Location = System::Drawing::Point(287, 458);
			this->numericUpDownDesagradoPrimavera->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->numericUpDownDesagradoPrimavera->Name = L"numericUpDownDesagradoPrimavera";
			this->numericUpDownDesagradoPrimavera->Size = System::Drawing::Size(41, 20);
			this->numericUpDownDesagradoPrimavera->TabIndex = 136;
			this->numericUpDownDesagradoPrimavera->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 15, 0, 0, 0 });
			// 
			// numericUpDownAlegriaPrimavera
			// 
			this->numericUpDownAlegriaPrimavera->Location = System::Drawing::Point(237, 458);
			this->numericUpDownAlegriaPrimavera->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->numericUpDownAlegriaPrimavera->Name = L"numericUpDownAlegriaPrimavera";
			this->numericUpDownAlegriaPrimavera->Size = System::Drawing::Size(41, 20);
			this->numericUpDownAlegriaPrimavera->TabIndex = 135;
			this->numericUpDownAlegriaPrimavera->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 80, 0, 0, 0 });
			// 
			// numericUpDownTristezaPrimavera
			// 
			this->numericUpDownTristezaPrimavera->Location = System::Drawing::Point(180, 458);
			this->numericUpDownTristezaPrimavera->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->numericUpDownTristezaPrimavera->Name = L"numericUpDownTristezaPrimavera";
			this->numericUpDownTristezaPrimavera->Size = System::Drawing::Size(41, 20);
			this->numericUpDownTristezaPrimavera->TabIndex = 134;
			this->numericUpDownTristezaPrimavera->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 10, 0, 0, 0 });
			// 
			// numericUpDownIraPrimavera
			// 
			this->numericUpDownIraPrimavera->Location = System::Drawing::Point(125, 458);
			this->numericUpDownIraPrimavera->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->numericUpDownIraPrimavera->Name = L"numericUpDownIraPrimavera";
			this->numericUpDownIraPrimavera->Size = System::Drawing::Size(41, 20);
			this->numericUpDownIraPrimavera->TabIndex = 133;
			this->numericUpDownIraPrimavera->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 5, 0, 0, 0 });
			// 
			// numericUpDownMiedoPrimavera
			// 
			this->numericUpDownMiedoPrimavera->Location = System::Drawing::Point(70, 458);
			this->numericUpDownMiedoPrimavera->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->numericUpDownMiedoPrimavera->Name = L"numericUpDownMiedoPrimavera";
			this->numericUpDownMiedoPrimavera->Size = System::Drawing::Size(41, 20);
			this->numericUpDownMiedoPrimavera->TabIndex = 132;
			this->numericUpDownMiedoPrimavera->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 15, 0, 0, 0 });
			// 
			// label30
			// 
			this->label30->AutoSize = true;
			this->label30->Location = System::Drawing::Point(284, 441);
			this->label30->Name = L"label30";
			this->label30->Size = System::Drawing::Size(59, 13);
			this->label30->TabIndex = 131;
			this->label30->Text = L"Desagrado";
			// 
			// label31
			// 
			this->label31->AutoSize = true;
			this->label31->Location = System::Drawing::Point(234, 441);
			this->label31->Name = L"label31";
			this->label31->Size = System::Drawing::Size(39, 13);
			this->label31->TabIndex = 130;
			this->label31->Text = L"Alegria";
			// 
			// label32
			// 
			this->label32->AutoSize = true;
			this->label32->Location = System::Drawing::Point(177, 441);
			this->label32->Name = L"label32";
			this->label32->Size = System::Drawing::Size(44, 13);
			this->label32->TabIndex = 129;
			this->label32->Text = L"Tristeza";
			// 
			// label33
			// 
			this->label33->AutoSize = true;
			this->label33->Location = System::Drawing::Point(122, 441);
			this->label33->Name = L"label33";
			this->label33->Size = System::Drawing::Size(19, 13);
			this->label33->TabIndex = 128;
			this->label33->Text = L"Ira";
			// 
			// label34
			// 
			this->label34->AutoSize = true;
			this->label34->Location = System::Drawing::Point(67, 441);
			this->label34->Name = L"label34";
			this->label34->Size = System::Drawing::Size(36, 13);
			this->label34->TabIndex = 127;
			this->label34->Text = L"Miedo";
			// 
			// label35
			// 
			this->label35->AutoSize = true;
			this->label35->Location = System::Drawing::Point(6, 441);
			this->label35->Name = L"label35";
			this->label35->Size = System::Drawing::Size(54, 13);
			this->label35->TabIndex = 126;
			this->label35->Text = L"Primavera";
			// 
			// buttonEnviarDeporte
			// 
			this->buttonEnviarDeporte->Location = System::Drawing::Point(344, 384);
			this->buttonEnviarDeporte->Name = L"buttonEnviarDeporte";
			this->buttonEnviarDeporte->Size = System::Drawing::Size(47, 46);
			this->buttonEnviarDeporte->TabIndex = 125;
			this->buttonEnviarDeporte->Text = L"Enviar";
			this->buttonEnviarDeporte->UseVisualStyleBackColor = true;
			this->buttonEnviarDeporte->Click += gcnew System::EventHandler(this, &Vista::buttonEnviarDeporte_Click);
			// 
			// numericUpDownVariacionDesagradoDeporte
			// 
			this->numericUpDownVariacionDesagradoDeporte->Location = System::Drawing::Point(297, 410);
			this->numericUpDownVariacionDesagradoDeporte->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->numericUpDownVariacionDesagradoDeporte->Name = L"numericUpDownVariacionDesagradoDeporte";
			this->numericUpDownVariacionDesagradoDeporte->Size = System::Drawing::Size(41, 20);
			this->numericUpDownVariacionDesagradoDeporte->TabIndex = 124;
			this->numericUpDownVariacionDesagradoDeporte->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 20, 0, 0, 0 });
			// 
			// numericUpDownVariacionAlegriaDeporte
			// 
			this->numericUpDownVariacionAlegriaDeporte->Location = System::Drawing::Point(247, 410);
			this->numericUpDownVariacionAlegriaDeporte->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->numericUpDownVariacionAlegriaDeporte->Name = L"numericUpDownVariacionAlegriaDeporte";
			this->numericUpDownVariacionAlegriaDeporte->Size = System::Drawing::Size(41, 20);
			this->numericUpDownVariacionAlegriaDeporte->TabIndex = 123;
			this->numericUpDownVariacionAlegriaDeporte->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 60, 0, 0, 0 });
			// 
			// numericUpDownVariacionTristezaDeporte
			// 
			this->numericUpDownVariacionTristezaDeporte->Location = System::Drawing::Point(190, 410);
			this->numericUpDownVariacionTristezaDeporte->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->numericUpDownVariacionTristezaDeporte->Name = L"numericUpDownVariacionTristezaDeporte";
			this->numericUpDownVariacionTristezaDeporte->Size = System::Drawing::Size(41, 20);
			this->numericUpDownVariacionTristezaDeporte->TabIndex = 122;
			this->numericUpDownVariacionTristezaDeporte->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 10, 0, 0, 0 });
			// 
			// numericUpDownVariacionIraDeporte
			// 
			this->numericUpDownVariacionIraDeporte->Location = System::Drawing::Point(135, 410);
			this->numericUpDownVariacionIraDeporte->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->numericUpDownVariacionIraDeporte->Name = L"numericUpDownVariacionIraDeporte";
			this->numericUpDownVariacionIraDeporte->Size = System::Drawing::Size(41, 20);
			this->numericUpDownVariacionIraDeporte->TabIndex = 121;
			this->numericUpDownVariacionIraDeporte->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 20, 0, 0, 0 });
			// 
			// numericUpDownVariacionMiedoDeporte
			// 
			this->numericUpDownVariacionMiedoDeporte->Location = System::Drawing::Point(80, 410);
			this->numericUpDownVariacionMiedoDeporte->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->numericUpDownVariacionMiedoDeporte->Name = L"numericUpDownVariacionMiedoDeporte";
			this->numericUpDownVariacionMiedoDeporte->Size = System::Drawing::Size(41, 20);
			this->numericUpDownVariacionMiedoDeporte->TabIndex = 120;
			this->numericUpDownVariacionMiedoDeporte->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 40, 0, 0, 0 });
			// 
			// label36
			// 
			this->label36->AutoSize = true;
			this->label36->Location = System::Drawing::Point(19, 407);
			this->label36->Name = L"label36";
			this->label36->Size = System::Drawing::Size(58, 13);
			this->label36->TabIndex = 119;
			this->label36->Text = L"Afectación";
			// 
			// numericUpDownDesagradoDeporte
			// 
			this->numericUpDownDesagradoDeporte->Location = System::Drawing::Point(287, 384);
			this->numericUpDownDesagradoDeporte->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->numericUpDownDesagradoDeporte->Name = L"numericUpDownDesagradoDeporte";
			this->numericUpDownDesagradoDeporte->Size = System::Drawing::Size(41, 20);
			this->numericUpDownDesagradoDeporte->TabIndex = 118;
			this->numericUpDownDesagradoDeporte->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 15, 0, 0, 0 });
			// 
			// numericUpDownAlegriaDeporte
			// 
			this->numericUpDownAlegriaDeporte->Location = System::Drawing::Point(237, 384);
			this->numericUpDownAlegriaDeporte->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->numericUpDownAlegriaDeporte->Name = L"numericUpDownAlegriaDeporte";
			this->numericUpDownAlegriaDeporte->Size = System::Drawing::Size(41, 20);
			this->numericUpDownAlegriaDeporte->TabIndex = 117;
			this->numericUpDownAlegriaDeporte->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 60, 0, 0, 0 });
			// 
			// numericUpDownTristezaDeporte
			// 
			this->numericUpDownTristezaDeporte->Location = System::Drawing::Point(180, 384);
			this->numericUpDownTristezaDeporte->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->numericUpDownTristezaDeporte->Name = L"numericUpDownTristezaDeporte";
			this->numericUpDownTristezaDeporte->Size = System::Drawing::Size(41, 20);
			this->numericUpDownTristezaDeporte->TabIndex = 116;
			this->numericUpDownTristezaDeporte->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 10, 0, 0, 0 });
			// 
			// numericUpDownIraDeporte
			// 
			this->numericUpDownIraDeporte->Location = System::Drawing::Point(125, 384);
			this->numericUpDownIraDeporte->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->numericUpDownIraDeporte->Name = L"numericUpDownIraDeporte";
			this->numericUpDownIraDeporte->Size = System::Drawing::Size(41, 20);
			this->numericUpDownIraDeporte->TabIndex = 115;
			this->numericUpDownIraDeporte->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 5, 0, 0, 0 });
			// 
			// numericUpDownMiedoDeporte
			// 
			this->numericUpDownMiedoDeporte->Location = System::Drawing::Point(70, 384);
			this->numericUpDownMiedoDeporte->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->numericUpDownMiedoDeporte->Name = L"numericUpDownMiedoDeporte";
			this->numericUpDownMiedoDeporte->Size = System::Drawing::Size(41, 20);
			this->numericUpDownMiedoDeporte->TabIndex = 114;
			this->numericUpDownMiedoDeporte->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 20, 0, 0, 0 });
			// 
			// label37
			// 
			this->label37->AutoSize = true;
			this->label37->Location = System::Drawing::Point(284, 367);
			this->label37->Name = L"label37";
			this->label37->Size = System::Drawing::Size(59, 13);
			this->label37->TabIndex = 113;
			this->label37->Text = L"Desagrado";
			// 
			// label38
			// 
			this->label38->AutoSize = true;
			this->label38->Location = System::Drawing::Point(234, 367);
			this->label38->Name = L"label38";
			this->label38->Size = System::Drawing::Size(39, 13);
			this->label38->TabIndex = 112;
			this->label38->Text = L"Alegria";
			// 
			// label39
			// 
			this->label39->AutoSize = true;
			this->label39->Location = System::Drawing::Point(177, 367);
			this->label39->Name = L"label39";
			this->label39->Size = System::Drawing::Size(44, 13);
			this->label39->TabIndex = 111;
			this->label39->Text = L"Tristeza";
			// 
			// label40
			// 
			this->label40->AutoSize = true;
			this->label40->Location = System::Drawing::Point(122, 367);
			this->label40->Name = L"label40";
			this->label40->Size = System::Drawing::Size(19, 13);
			this->label40->TabIndex = 110;
			this->label40->Text = L"Ira";
			// 
			// label41
			// 
			this->label41->AutoSize = true;
			this->label41->Location = System::Drawing::Point(67, 367);
			this->label41->Name = L"label41";
			this->label41->Size = System::Drawing::Size(36, 13);
			this->label41->TabIndex = 109;
			this->label41->Text = L"Miedo";
			// 
			// label42
			// 
			this->label42->AutoSize = true;
			this->label42->Location = System::Drawing::Point(6, 367);
			this->label42->Name = L"label42";
			this->label42->Size = System::Drawing::Size(45, 13);
			this->label42->TabIndex = 108;
			this->label42->Text = L"Deporte";
			// 
			// buttonEnviarFiesta
			// 
			this->buttonEnviarFiesta->Location = System::Drawing::Point(344, 308);
			this->buttonEnviarFiesta->Name = L"buttonEnviarFiesta";
			this->buttonEnviarFiesta->Size = System::Drawing::Size(47, 46);
			this->buttonEnviarFiesta->TabIndex = 107;
			this->buttonEnviarFiesta->Text = L"Enviar";
			this->buttonEnviarFiesta->UseVisualStyleBackColor = true;
			this->buttonEnviarFiesta->Click += gcnew System::EventHandler(this, &Vista::buttonEnviarFiesta_Click);
			// 
			// numericUpDownVariacionDesagradoFiesta
			// 
			this->numericUpDownVariacionDesagradoFiesta->Location = System::Drawing::Point(297, 334);
			this->numericUpDownVariacionDesagradoFiesta->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->numericUpDownVariacionDesagradoFiesta->Name = L"numericUpDownVariacionDesagradoFiesta";
			this->numericUpDownVariacionDesagradoFiesta->Size = System::Drawing::Size(41, 20);
			this->numericUpDownVariacionDesagradoFiesta->TabIndex = 106;
			this->numericUpDownVariacionDesagradoFiesta->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 10, 0, 0, 0 });
			// 
			// numericUpDownVariacionAlegriaFiesta
			// 
			this->numericUpDownVariacionAlegriaFiesta->Location = System::Drawing::Point(247, 334);
			this->numericUpDownVariacionAlegriaFiesta->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->numericUpDownVariacionAlegriaFiesta->Name = L"numericUpDownVariacionAlegriaFiesta";
			this->numericUpDownVariacionAlegriaFiesta->Size = System::Drawing::Size(41, 20);
			this->numericUpDownVariacionAlegriaFiesta->TabIndex = 105;
			this->numericUpDownVariacionAlegriaFiesta->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 80, 0, 0, 0 });
			// 
			// numericUpDownVariacionTristezaFiesta
			// 
			this->numericUpDownVariacionTristezaFiesta->Location = System::Drawing::Point(190, 334);
			this->numericUpDownVariacionTristezaFiesta->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->numericUpDownVariacionTristezaFiesta->Name = L"numericUpDownVariacionTristezaFiesta";
			this->numericUpDownVariacionTristezaFiesta->Size = System::Drawing::Size(41, 20);
			this->numericUpDownVariacionTristezaFiesta->TabIndex = 104;
			this->numericUpDownVariacionTristezaFiesta->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 10, 0, 0, 0 });
			// 
			// numericUpDownVariacionIraFiesta
			// 
			this->numericUpDownVariacionIraFiesta->Location = System::Drawing::Point(135, 334);
			this->numericUpDownVariacionIraFiesta->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->numericUpDownVariacionIraFiesta->Name = L"numericUpDownVariacionIraFiesta";
			this->numericUpDownVariacionIraFiesta->Size = System::Drawing::Size(41, 20);
			this->numericUpDownVariacionIraFiesta->TabIndex = 103;
			this->numericUpDownVariacionIraFiesta->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 10, 0, 0, 0 });
			// 
			// numericUpDownVariacionMiedoFiesta
			// 
			this->numericUpDownVariacionMiedoFiesta->Location = System::Drawing::Point(80, 334);
			this->numericUpDownVariacionMiedoFiesta->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->numericUpDownVariacionMiedoFiesta->Name = L"numericUpDownVariacionMiedoFiesta";
			this->numericUpDownVariacionMiedoFiesta->Size = System::Drawing::Size(41, 20);
			this->numericUpDownVariacionMiedoFiesta->TabIndex = 102;
			this->numericUpDownVariacionMiedoFiesta->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 10, 0, 0, 0 });
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Location = System::Drawing::Point(19, 331);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(58, 13);
			this->label15->TabIndex = 101;
			this->label15->Text = L"Afectación";
			// 
			// numericUpDownDesagradoFiesta
			// 
			this->numericUpDownDesagradoFiesta->Location = System::Drawing::Point(287, 308);
			this->numericUpDownDesagradoFiesta->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->numericUpDownDesagradoFiesta->Name = L"numericUpDownDesagradoFiesta";
			this->numericUpDownDesagradoFiesta->Size = System::Drawing::Size(41, 20);
			this->numericUpDownDesagradoFiesta->TabIndex = 100;
			this->numericUpDownDesagradoFiesta->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 10, 0, 0, 0 });
			// 
			// numericUpDownAlegriaFiesta
			// 
			this->numericUpDownAlegriaFiesta->Location = System::Drawing::Point(237, 308);
			this->numericUpDownAlegriaFiesta->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->numericUpDownAlegriaFiesta->Name = L"numericUpDownAlegriaFiesta";
			this->numericUpDownAlegriaFiesta->Size = System::Drawing::Size(41, 20);
			this->numericUpDownAlegriaFiesta->TabIndex = 99;
			this->numericUpDownAlegriaFiesta->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 70, 0, 0, 0 });
			// 
			// numericUpDownTristezaFiesta
			// 
			this->numericUpDownTristezaFiesta->Location = System::Drawing::Point(180, 308);
			this->numericUpDownTristezaFiesta->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->numericUpDownTristezaFiesta->Name = L"numericUpDownTristezaFiesta";
			this->numericUpDownTristezaFiesta->Size = System::Drawing::Size(41, 20);
			this->numericUpDownTristezaFiesta->TabIndex = 98;
			this->numericUpDownTristezaFiesta->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 5, 0, 0, 0 });
			// 
			// numericUpDownIraFiesta
			// 
			this->numericUpDownIraFiesta->Location = System::Drawing::Point(125, 308);
			this->numericUpDownIraFiesta->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->numericUpDownIraFiesta->Name = L"numericUpDownIraFiesta";
			this->numericUpDownIraFiesta->Size = System::Drawing::Size(41, 20);
			this->numericUpDownIraFiesta->TabIndex = 97;
			this->numericUpDownIraFiesta->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 5, 0, 0, 0 });
			// 
			// numericUpDownMiedoFiesta
			// 
			this->numericUpDownMiedoFiesta->Location = System::Drawing::Point(70, 308);
			this->numericUpDownMiedoFiesta->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->numericUpDownMiedoFiesta->Name = L"numericUpDownMiedoFiesta";
			this->numericUpDownMiedoFiesta->Size = System::Drawing::Size(41, 20);
			this->numericUpDownMiedoFiesta->TabIndex = 96;
			this->numericUpDownMiedoFiesta->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 10, 0, 0, 0 });
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Location = System::Drawing::Point(284, 291);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(59, 13);
			this->label16->TabIndex = 95;
			this->label16->Text = L"Desagrado";
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Location = System::Drawing::Point(234, 291);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(39, 13);
			this->label17->TabIndex = 94;
			this->label17->Text = L"Alegria";
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->Location = System::Drawing::Point(177, 291);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(44, 13);
			this->label18->TabIndex = 93;
			this->label18->Text = L"Tristeza";
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->Location = System::Drawing::Point(122, 291);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(19, 13);
			this->label19->TabIndex = 92;
			this->label19->Text = L"Ira";
			// 
			// label20
			// 
			this->label20->AutoSize = true;
			this->label20->Location = System::Drawing::Point(67, 291);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(36, 13);
			this->label20->TabIndex = 91;
			this->label20->Text = L"Miedo";
			// 
			// label21
			// 
			this->label21->AutoSize = true;
			this->label21->Location = System::Drawing::Point(6, 291);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(35, 13);
			this->label21->TabIndex = 90;
			this->label21->Text = L"Fiesta";
			// 
			// buttonEnviarIncendio
			// 
			this->buttonEnviarIncendio->Location = System::Drawing::Point(344, 234);
			this->buttonEnviarIncendio->Name = L"buttonEnviarIncendio";
			this->buttonEnviarIncendio->Size = System::Drawing::Size(47, 46);
			this->buttonEnviarIncendio->TabIndex = 89;
			this->buttonEnviarIncendio->Text = L"Enviar";
			this->buttonEnviarIncendio->UseVisualStyleBackColor = true;
			this->buttonEnviarIncendio->Click += gcnew System::EventHandler(this, &Vista::buttonEnviarIncendio_Click);
			// 
			// numericUpDownVariacionDesagradoIncendio
			// 
			this->numericUpDownVariacionDesagradoIncendio->Location = System::Drawing::Point(297, 260);
			this->numericUpDownVariacionDesagradoIncendio->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->numericUpDownVariacionDesagradoIncendio->Name = L"numericUpDownVariacionDesagradoIncendio";
			this->numericUpDownVariacionDesagradoIncendio->Size = System::Drawing::Size(41, 20);
			this->numericUpDownVariacionDesagradoIncendio->TabIndex = 88;
			this->numericUpDownVariacionDesagradoIncendio->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 25, 0, 0, 0 });
			// 
			// numericUpDownVariacionAlegriaIncendio
			// 
			this->numericUpDownVariacionAlegriaIncendio->Location = System::Drawing::Point(247, 260);
			this->numericUpDownVariacionAlegriaIncendio->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->numericUpDownVariacionAlegriaIncendio->Name = L"numericUpDownVariacionAlegriaIncendio";
			this->numericUpDownVariacionAlegriaIncendio->Size = System::Drawing::Size(41, 20);
			this->numericUpDownVariacionAlegriaIncendio->TabIndex = 87;
			this->numericUpDownVariacionAlegriaIncendio->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 10, 0, 0, 0 });
			// 
			// numericUpDownVariacionTristezaIncendio
			// 
			this->numericUpDownVariacionTristezaIncendio->Location = System::Drawing::Point(190, 260);
			this->numericUpDownVariacionTristezaIncendio->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->numericUpDownVariacionTristezaIncendio->Name = L"numericUpDownVariacionTristezaIncendio";
			this->numericUpDownVariacionTristezaIncendio->Size = System::Drawing::Size(41, 20);
			this->numericUpDownVariacionTristezaIncendio->TabIndex = 86;
			this->numericUpDownVariacionTristezaIncendio->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 25, 0, 0, 0 });
			// 
			// numericUpDownVariacionIraIncendio
			// 
			this->numericUpDownVariacionIraIncendio->Location = System::Drawing::Point(135, 260);
			this->numericUpDownVariacionIraIncendio->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->numericUpDownVariacionIraIncendio->Name = L"numericUpDownVariacionIraIncendio";
			this->numericUpDownVariacionIraIncendio->Size = System::Drawing::Size(41, 20);
			this->numericUpDownVariacionIraIncendio->TabIndex = 85;
			this->numericUpDownVariacionIraIncendio->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 30, 0, 0, 0 });
			// 
			// numericUpDownVariacionMiedoIncendio
			// 
			this->numericUpDownVariacionMiedoIncendio->Location = System::Drawing::Point(80, 260);
			this->numericUpDownVariacionMiedoIncendio->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->numericUpDownVariacionMiedoIncendio->Name = L"numericUpDownVariacionMiedoIncendio";
			this->numericUpDownVariacionMiedoIncendio->Size = System::Drawing::Size(41, 20);
			this->numericUpDownVariacionMiedoIncendio->TabIndex = 84;
			this->numericUpDownVariacionMiedoIncendio->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 50, 0, 0, 0 });
			// 
			// label22
			// 
			this->label22->AutoSize = true;
			this->label22->Location = System::Drawing::Point(19, 257);
			this->label22->Name = L"label22";
			this->label22->Size = System::Drawing::Size(58, 13);
			this->label22->TabIndex = 83;
			this->label22->Text = L"Afectación";
			// 
			// numericUpDownDesagradoIncendio
			// 
			this->numericUpDownDesagradoIncendio->Location = System::Drawing::Point(287, 234);
			this->numericUpDownDesagradoIncendio->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->numericUpDownDesagradoIncendio->Name = L"numericUpDownDesagradoIncendio";
			this->numericUpDownDesagradoIncendio->Size = System::Drawing::Size(41, 20);
			this->numericUpDownDesagradoIncendio->TabIndex = 82;
			this->numericUpDownDesagradoIncendio->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 10, 0, 0, 0 });
			// 
			// numericUpDownAlegriaIncendio
			// 
			this->numericUpDownAlegriaIncendio->Location = System::Drawing::Point(237, 234);
			this->numericUpDownAlegriaIncendio->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->numericUpDownAlegriaIncendio->Name = L"numericUpDownAlegriaIncendio";
			this->numericUpDownAlegriaIncendio->Size = System::Drawing::Size(41, 20);
			this->numericUpDownAlegriaIncendio->TabIndex = 81;
			this->numericUpDownAlegriaIncendio->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 5, 0, 0, 0 });
			// 
			// numericUpDownTristezaIncendio
			// 
			this->numericUpDownTristezaIncendio->Location = System::Drawing::Point(180, 234);
			this->numericUpDownTristezaIncendio->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->numericUpDownTristezaIncendio->Name = L"numericUpDownTristezaIncendio";
			this->numericUpDownTristezaIncendio->Size = System::Drawing::Size(41, 20);
			this->numericUpDownTristezaIncendio->TabIndex = 80;
			this->numericUpDownTristezaIncendio->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 20, 0, 0, 0 });
			// 
			// numericUpDownIraIncendio
			// 
			this->numericUpDownIraIncendio->Location = System::Drawing::Point(125, 234);
			this->numericUpDownIraIncendio->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->numericUpDownIraIncendio->Name = L"numericUpDownIraIncendio";
			this->numericUpDownIraIncendio->Size = System::Drawing::Size(41, 20);
			this->numericUpDownIraIncendio->TabIndex = 79;
			this->numericUpDownIraIncendio->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 20, 0, 0, 0 });
			// 
			// numericUpDownMiedoIncendio
			// 
			this->numericUpDownMiedoIncendio->Location = System::Drawing::Point(70, 234);
			this->numericUpDownMiedoIncendio->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->numericUpDownMiedoIncendio->Name = L"numericUpDownMiedoIncendio";
			this->numericUpDownMiedoIncendio->Size = System::Drawing::Size(41, 20);
			this->numericUpDownMiedoIncendio->TabIndex = 78;
			this->numericUpDownMiedoIncendio->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 60, 0, 0, 0 });
			// 
			// label23
			// 
			this->label23->AutoSize = true;
			this->label23->Location = System::Drawing::Point(284, 217);
			this->label23->Name = L"label23";
			this->label23->Size = System::Drawing::Size(59, 13);
			this->label23->TabIndex = 77;
			this->label23->Text = L"Desagrado";
			// 
			// label24
			// 
			this->label24->AutoSize = true;
			this->label24->Location = System::Drawing::Point(234, 217);
			this->label24->Name = L"label24";
			this->label24->Size = System::Drawing::Size(39, 13);
			this->label24->TabIndex = 76;
			this->label24->Text = L"Alegria";
			// 
			// label25
			// 
			this->label25->AutoSize = true;
			this->label25->Location = System::Drawing::Point(177, 217);
			this->label25->Name = L"label25";
			this->label25->Size = System::Drawing::Size(44, 13);
			this->label25->TabIndex = 75;
			this->label25->Text = L"Tristeza";
			// 
			// label26
			// 
			this->label26->AutoSize = true;
			this->label26->Location = System::Drawing::Point(122, 217);
			this->label26->Name = L"label26";
			this->label26->Size = System::Drawing::Size(19, 13);
			this->label26->TabIndex = 74;
			this->label26->Text = L"Ira";
			// 
			// label27
			// 
			this->label27->AutoSize = true;
			this->label27->Location = System::Drawing::Point(67, 217);
			this->label27->Name = L"label27";
			this->label27->Size = System::Drawing::Size(36, 13);
			this->label27->TabIndex = 73;
			this->label27->Text = L"Miedo";
			// 
			// label28
			// 
			this->label28->AutoSize = true;
			this->label28->Location = System::Drawing::Point(6, 217);
			this->label28->Name = L"label28";
			this->label28->Size = System::Drawing::Size(48, 13);
			this->label28->TabIndex = 72;
			this->label28->Text = L"Incendio";
			// 
			// buttonEnviarInundacion
			// 
			this->buttonEnviarInundacion->Location = System::Drawing::Point(344, 161);
			this->buttonEnviarInundacion->Name = L"buttonEnviarInundacion";
			this->buttonEnviarInundacion->Size = System::Drawing::Size(47, 46);
			this->buttonEnviarInundacion->TabIndex = 71;
			this->buttonEnviarInundacion->Text = L"Enviar";
			this->buttonEnviarInundacion->UseVisualStyleBackColor = true;
			this->buttonEnviarInundacion->Click += gcnew System::EventHandler(this, &Vista::buttonEnviarInundacion_Click);
			// 
			// numericUpDownVariacionDesagradoInundacion
			// 
			this->numericUpDownVariacionDesagradoInundacion->Location = System::Drawing::Point(297, 187);
			this->numericUpDownVariacionDesagradoInundacion->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) {
				1, 0, 0,
					0
			});
			this->numericUpDownVariacionDesagradoInundacion->Name = L"numericUpDownVariacionDesagradoInundacion";
			this->numericUpDownVariacionDesagradoInundacion->Size = System::Drawing::Size(41, 20);
			this->numericUpDownVariacionDesagradoInundacion->TabIndex = 70;
			this->numericUpDownVariacionDesagradoInundacion->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) {
				50, 0, 0,
					0
			});
			// 
			// numericUpDownVariacionAlegriaInundacion
			// 
			this->numericUpDownVariacionAlegriaInundacion->Location = System::Drawing::Point(247, 187);
			this->numericUpDownVariacionAlegriaInundacion->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->numericUpDownVariacionAlegriaInundacion->Name = L"numericUpDownVariacionAlegriaInundacion";
			this->numericUpDownVariacionAlegriaInundacion->Size = System::Drawing::Size(41, 20);
			this->numericUpDownVariacionAlegriaInundacion->TabIndex = 69;
			this->numericUpDownVariacionAlegriaInundacion->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 30, 0, 0, 0 });
			// 
			// numericUpDownVariacionTristezaInundacion
			// 
			this->numericUpDownVariacionTristezaInundacion->Location = System::Drawing::Point(190, 187);
			this->numericUpDownVariacionTristezaInundacion->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) {
				1, 0, 0,
					0
			});
			this->numericUpDownVariacionTristezaInundacion->Name = L"numericUpDownVariacionTristezaInundacion";
			this->numericUpDownVariacionTristezaInundacion->Size = System::Drawing::Size(41, 20);
			this->numericUpDownVariacionTristezaInundacion->TabIndex = 68;
			this->numericUpDownVariacionTristezaInundacion->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 65, 0, 0, 0 });
			// 
			// numericUpDownVariacionIraInundacion
			// 
			this->numericUpDownVariacionIraInundacion->Location = System::Drawing::Point(135, 187);
			this->numericUpDownVariacionIraInundacion->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->numericUpDownVariacionIraInundacion->Name = L"numericUpDownVariacionIraInundacion";
			this->numericUpDownVariacionIraInundacion->Size = System::Drawing::Size(41, 20);
			this->numericUpDownVariacionIraInundacion->TabIndex = 67;
			this->numericUpDownVariacionIraInundacion->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 55, 0, 0, 0 });
			// 
			// numericUpDownVariacionMiedoInundacion
			// 
			this->numericUpDownVariacionMiedoInundacion->Location = System::Drawing::Point(80, 187);
			this->numericUpDownVariacionMiedoInundacion->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->numericUpDownVariacionMiedoInundacion->Name = L"numericUpDownVariacionMiedoInundacion";
			this->numericUpDownVariacionMiedoInundacion->Size = System::Drawing::Size(41, 20);
			this->numericUpDownVariacionMiedoInundacion->TabIndex = 66;
			this->numericUpDownVariacionMiedoInundacion->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 60, 0, 0, 0 });
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(19, 184);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(58, 13);
			this->label8->TabIndex = 65;
			this->label8->Text = L"Afectación";
			// 
			// numericUpDownDesagradoInundacion
			// 
			this->numericUpDownDesagradoInundacion->Location = System::Drawing::Point(287, 161);
			this->numericUpDownDesagradoInundacion->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->numericUpDownDesagradoInundacion->Name = L"numericUpDownDesagradoInundacion";
			this->numericUpDownDesagradoInundacion->Size = System::Drawing::Size(41, 20);
			this->numericUpDownDesagradoInundacion->TabIndex = 64;
			this->numericUpDownDesagradoInundacion->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 30, 0, 0, 0 });
			// 
			// numericUpDownAlegriaInundacion
			// 
			this->numericUpDownAlegriaInundacion->Location = System::Drawing::Point(237, 161);
			this->numericUpDownAlegriaInundacion->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->numericUpDownAlegriaInundacion->Name = L"numericUpDownAlegriaInundacion";
			this->numericUpDownAlegriaInundacion->Size = System::Drawing::Size(41, 20);
			this->numericUpDownAlegriaInundacion->TabIndex = 63;
			this->numericUpDownAlegriaInundacion->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 10, 0, 0, 0 });
			// 
			// numericUpDownTristezaInundacion
			// 
			this->numericUpDownTristezaInundacion->Location = System::Drawing::Point(180, 161);
			this->numericUpDownTristezaInundacion->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->numericUpDownTristezaInundacion->Name = L"numericUpDownTristezaInundacion";
			this->numericUpDownTristezaInundacion->Size = System::Drawing::Size(41, 20);
			this->numericUpDownTristezaInundacion->TabIndex = 62;
			this->numericUpDownTristezaInundacion->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 15, 0, 0, 0 });
			// 
			// numericUpDownIraInundacion
			// 
			this->numericUpDownIraInundacion->Location = System::Drawing::Point(125, 161);
			this->numericUpDownIraInundacion->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->numericUpDownIraInundacion->Name = L"numericUpDownIraInundacion";
			this->numericUpDownIraInundacion->Size = System::Drawing::Size(41, 20);
			this->numericUpDownIraInundacion->TabIndex = 61;
			this->numericUpDownIraInundacion->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 35, 0, 0, 0 });
			// 
			// numericUpDownMiedoInundacion
			// 
			this->numericUpDownMiedoInundacion->Location = System::Drawing::Point(70, 161);
			this->numericUpDownMiedoInundacion->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->numericUpDownMiedoInundacion->Name = L"numericUpDownMiedoInundacion";
			this->numericUpDownMiedoInundacion->Size = System::Drawing::Size(41, 20);
			this->numericUpDownMiedoInundacion->TabIndex = 60;
			this->numericUpDownMiedoInundacion->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 50, 0, 0, 0 });
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(278, 142);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(59, 13);
			this->label9->TabIndex = 59;
			this->label9->Text = L"Desagrado";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(228, 142);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(39, 13);
			this->label10->TabIndex = 58;
			this->label10->Text = L"Alegria";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(171, 142);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(44, 13);
			this->label11->TabIndex = 57;
			this->label11->Text = L"Tristeza";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(116, 142);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(19, 13);
			this->label12->TabIndex = 56;
			this->label12->Text = L"Ira";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Location = System::Drawing::Point(61, 142);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(36, 13);
			this->label13->TabIndex = 55;
			this->label13->Text = L"Miedo";
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Location = System::Drawing::Point(0, 142);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(60, 13);
			this->label14->TabIndex = 54;
			this->label14->Text = L"Inundacion";
			// 
			// buttonEnviarTerremoto
			// 
			this->buttonEnviarTerremoto->Location = System::Drawing::Point(344, 79);
			this->buttonEnviarTerremoto->Name = L"buttonEnviarTerremoto";
			this->buttonEnviarTerremoto->Size = System::Drawing::Size(47, 46);
			this->buttonEnviarTerremoto->TabIndex = 53;
			this->buttonEnviarTerremoto->Text = L"Enviar";
			this->buttonEnviarTerremoto->UseVisualStyleBackColor = true;
			this->buttonEnviarTerremoto->Click += gcnew System::EventHandler(this, &Vista::buttonEnviarTerremoto_Click);
			// 
			// numericUpDownVariacionDesagradoTerremoto
			// 
			this->numericUpDownVariacionDesagradoTerremoto->Location = System::Drawing::Point(297, 105);
			this->numericUpDownVariacionDesagradoTerremoto->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) {
				1, 0, 0,
					0
			});
			this->numericUpDownVariacionDesagradoTerremoto->Name = L"numericUpDownVariacionDesagradoTerremoto";
			this->numericUpDownVariacionDesagradoTerremoto->Size = System::Drawing::Size(41, 20);
			this->numericUpDownVariacionDesagradoTerremoto->TabIndex = 52;
			this->numericUpDownVariacionDesagradoTerremoto->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 25, 0, 0, 0 });
			// 
			// numericUpDownVariacionAlegriaTerremoto
			// 
			this->numericUpDownVariacionAlegriaTerremoto->Location = System::Drawing::Point(247, 105);
			this->numericUpDownVariacionAlegriaTerremoto->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->numericUpDownVariacionAlegriaTerremoto->Name = L"numericUpDownVariacionAlegriaTerremoto";
			this->numericUpDownVariacionAlegriaTerremoto->Size = System::Drawing::Size(41, 20);
			this->numericUpDownVariacionAlegriaTerremoto->TabIndex = 51;
			this->numericUpDownVariacionAlegriaTerremoto->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 10, 0, 0, 0 });
			// 
			// numericUpDownVariacionTristezaTerremoto
			// 
			this->numericUpDownVariacionTristezaTerremoto->Location = System::Drawing::Point(190, 105);
			this->numericUpDownVariacionTristezaTerremoto->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->numericUpDownVariacionTristezaTerremoto->Name = L"numericUpDownVariacionTristezaTerremoto";
			this->numericUpDownVariacionTristezaTerremoto->Size = System::Drawing::Size(41, 20);
			this->numericUpDownVariacionTristezaTerremoto->TabIndex = 50;
			this->numericUpDownVariacionTristezaTerremoto->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 50, 0, 0, 0 });
			// 
			// numericUpDownVariacionIraTerremoto
			// 
			this->numericUpDownVariacionIraTerremoto->Location = System::Drawing::Point(135, 105);
			this->numericUpDownVariacionIraTerremoto->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->numericUpDownVariacionIraTerremoto->Name = L"numericUpDownVariacionIraTerremoto";
			this->numericUpDownVariacionIraTerremoto->Size = System::Drawing::Size(41, 20);
			this->numericUpDownVariacionIraTerremoto->TabIndex = 49;
			this->numericUpDownVariacionIraTerremoto->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 60, 0, 0, 0 });
			// 
			// numericUpDownVariacionMiedoTerremoto
			// 
			this->numericUpDownVariacionMiedoTerremoto->Location = System::Drawing::Point(80, 105);
			this->numericUpDownVariacionMiedoTerremoto->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->numericUpDownVariacionMiedoTerremoto->Name = L"numericUpDownVariacionMiedoTerremoto";
			this->numericUpDownVariacionMiedoTerremoto->Size = System::Drawing::Size(41, 20);
			this->numericUpDownVariacionMiedoTerremoto->TabIndex = 48;
			this->numericUpDownVariacionMiedoTerremoto->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 80, 0, 0, 0 });
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(19, 107);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(58, 13);
			this->label7->TabIndex = 47;
			this->label7->Text = L"Afectación";
			// 
			// numericUpDownDesagradoTerremoto
			// 
			this->numericUpDownDesagradoTerremoto->Location = System::Drawing::Point(287, 79);
			this->numericUpDownDesagradoTerremoto->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->numericUpDownDesagradoTerremoto->Name = L"numericUpDownDesagradoTerremoto";
			this->numericUpDownDesagradoTerremoto->Size = System::Drawing::Size(41, 20);
			this->numericUpDownDesagradoTerremoto->TabIndex = 46;
			this->numericUpDownDesagradoTerremoto->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 20, 0, 0, 0 });
			// 
			// numericUpDownAlegriaTerremoto
			// 
			this->numericUpDownAlegriaTerremoto->Location = System::Drawing::Point(237, 79);
			this->numericUpDownAlegriaTerremoto->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->numericUpDownAlegriaTerremoto->Name = L"numericUpDownAlegriaTerremoto";
			this->numericUpDownAlegriaTerremoto->Size = System::Drawing::Size(41, 20);
			this->numericUpDownAlegriaTerremoto->TabIndex = 45;
			this->numericUpDownAlegriaTerremoto->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 5, 0, 0, 0 });
			// 
			// numericUpDownTristezaTerremoto
			// 
			this->numericUpDownTristezaTerremoto->Location = System::Drawing::Point(180, 79);
			this->numericUpDownTristezaTerremoto->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->numericUpDownTristezaTerremoto->Name = L"numericUpDownTristezaTerremoto";
			this->numericUpDownTristezaTerremoto->Size = System::Drawing::Size(41, 20);
			this->numericUpDownTristezaTerremoto->TabIndex = 44;
			this->numericUpDownTristezaTerremoto->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 20, 0, 0, 0 });
			// 
			// numericUpDownIraTerremoto
			// 
			this->numericUpDownIraTerremoto->Location = System::Drawing::Point(125, 79);
			this->numericUpDownIraTerremoto->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->numericUpDownIraTerremoto->Name = L"numericUpDownIraTerremoto";
			this->numericUpDownIraTerremoto->Size = System::Drawing::Size(41, 20);
			this->numericUpDownIraTerremoto->TabIndex = 43;
			this->numericUpDownIraTerremoto->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 25, 0, 0, 0 });
			// 
			// numericUpDownMiedoTerremoto
			// 
			this->numericUpDownMiedoTerremoto->Location = System::Drawing::Point(70, 79);
			this->numericUpDownMiedoTerremoto->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->numericUpDownMiedoTerremoto->Name = L"numericUpDownMiedoTerremoto";
			this->numericUpDownMiedoTerremoto->Size = System::Drawing::Size(41, 20);
			this->numericUpDownMiedoTerremoto->TabIndex = 42;
			this->numericUpDownMiedoTerremoto->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 30, 0, 0, 0 });
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(278, 63);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(59, 13);
			this->label6->TabIndex = 41;
			this->label6->Text = L"Desagrado";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(228, 63);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(39, 13);
			this->label5->TabIndex = 40;
			this->label5->Text = L"Alegria";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(171, 63);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(44, 13);
			this->label4->TabIndex = 39;
			this->label4->Text = L"Tristeza";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(116, 63);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(19, 13);
			this->label3->TabIndex = 38;
			this->label3->Text = L"Ira";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(61, 63);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(36, 13);
			this->label2->TabIndex = 37;
			this->label2->Text = L"Miedo";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(0, 63);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(55, 13);
			this->label1->TabIndex = 36;
			this->label1->Text = L"Terremoto";
			// 
			// groupBoxNPC
			// 
			this->groupBoxNPC->Controls->Add(this->panel3);
			this->groupBoxNPC->Location = System::Drawing::Point(780, 213);
			this->groupBoxNPC->Name = L"groupBoxNPC";
			this->groupBoxNPC->Size = System::Drawing::Size(254, 396);
			this->groupBoxNPC->TabIndex = 3;
			this->groupBoxNPC->TabStop = false;
			this->groupBoxNPC->Text = L"Config NPC\'s";
			// 
			// panel3
			// 
			this->panel3->AutoScroll = true;
			this->panel3->Controls->Add(this->numericUpDownTiempoReproduccion);
			this->panel3->Controls->Add(this->label76);
			this->panel3->Controls->Add(this->numericUpDownLargoPasos);
			this->panel3->Controls->Add(this->label69);
			this->panel3->Controls->Add(this->numericUpDownVariacionAlejamientoMiedo);
			this->panel3->Controls->Add(this->numericUpDownVariacionAlejamientoIra);
			this->panel3->Controls->Add(this->numericUpDownVariacionAlejamientoTristeza);
			this->panel3->Controls->Add(this->numericUpDownVariacionAlejamientoAlegria);
			this->panel3->Controls->Add(this->numericUpDownVariacionAlejamientoDesagrado);
			this->panel3->Controls->Add(this->label62);
			this->panel3->Controls->Add(this->label63);
			this->panel3->Controls->Add(this->numericUpDownAlejamientoMiedo);
			this->panel3->Controls->Add(this->label64);
			this->panel3->Controls->Add(this->numericUpDownAlejamientoIra);
			this->panel3->Controls->Add(this->numericUpDownAlejamientoTristeza);
			this->panel3->Controls->Add(this->label65);
			this->panel3->Controls->Add(this->numericUpDownAlejamientoAlegria);
			this->panel3->Controls->Add(this->label66);
			this->panel3->Controls->Add(this->label67);
			this->panel3->Controls->Add(this->label68);
			this->panel3->Controls->Add(this->numericUpDownAlejamientoDesagrado);
			this->panel3->Controls->Add(this->numericUpDownVariacionAcercamientoMiedo);
			this->panel3->Controls->Add(this->numericUpDownVariacionAcercamientoIra);
			this->panel3->Controls->Add(this->numericUpDownVariacionAcercamientoTristeza);
			this->panel3->Controls->Add(this->numericUpDownVariacionAcercamientoAlegria);
			this->panel3->Controls->Add(this->numericUpDownVariacionAcercamientoDesagrado);
			this->panel3->Controls->Add(this->label55);
			this->panel3->Controls->Add(this->label56);
			this->panel3->Controls->Add(this->numericUpDownAcercamientoMiedo);
			this->panel3->Controls->Add(this->label57);
			this->panel3->Controls->Add(this->numericUpDownAcercamientoIra);
			this->panel3->Controls->Add(this->numericUpDownAcercamientoTristeza);
			this->panel3->Controls->Add(this->label58);
			this->panel3->Controls->Add(this->numericUpDownAcercamientoAlegria);
			this->panel3->Controls->Add(this->label59);
			this->panel3->Controls->Add(this->label60);
			this->panel3->Controls->Add(this->label61);
			this->panel3->Controls->Add(this->numericUpDownAcercamientoDesagrado);
			this->panel3->Controls->Add(this->comboBoxTipoAcercamiento);
			this->panel3->Controls->Add(this->label54);
			this->panel3->Controls->Add(this->numericUpDownSensor);
			this->panel3->Controls->Add(this->label53);
			this->panel3->Controls->Add(this->numericUpDownVariacionReproduccionMiedo);
			this->panel3->Controls->Add(this->numericUpDownVariacionReproduccionIra);
			this->panel3->Controls->Add(this->numericUpDownVariacionReproduccionTristeza);
			this->panel3->Controls->Add(this->numericUpDownVariacionReproduccionAlegria);
			this->panel3->Controls->Add(this->numericUpDownVariacionReproduccionDesagrado);
			this->panel3->Controls->Add(this->label51);
			this->panel3->Controls->Add(this->label50);
			this->panel3->Controls->Add(this->label49);
			this->panel3->Controls->Add(this->label48);
			this->panel3->Controls->Add(this->label47);
			this->panel3->Controls->Add(this->label46);
			this->panel3->Controls->Add(this->numericUpDownTiempoMuerte);
			this->panel3->Controls->Add(this->label45);
			this->panel3->Controls->Add(this->comboBoxDispercion);
			this->panel3->Controls->Add(this->label44);
			this->panel3->Controls->Add(this->numericUpDownCantidad);
			this->panel3->Controls->Add(this->label43);
			this->panel3->Location = System::Drawing::Point(3, 16);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(251, 374);
			this->panel3->TabIndex = 0;
			// 
			// numericUpDownTiempoReproduccion
			// 
			this->numericUpDownTiempoReproduccion->Location = System::Drawing::Point(61, 173);
			this->numericUpDownTiempoReproduccion->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->numericUpDownTiempoReproduccion->Name = L"numericUpDownTiempoReproduccion";
			this->numericUpDownTiempoReproduccion->Size = System::Drawing::Size(41, 20);
			this->numericUpDownTiempoReproduccion->TabIndex = 199;
			this->numericUpDownTiempoReproduccion->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 8, 0, 0, 0 });
			// 
			// label76
			// 
			this->label76->AutoSize = true;
			this->label76->Location = System::Drawing::Point(21, 175);
			this->label76->Name = L"label76";
			this->label76->Size = System::Drawing::Size(42, 13);
			this->label76->TabIndex = 198;
			this->label76->Text = L"Tiempo";
			// 
			// numericUpDownLargoPasos
			// 
			this->numericUpDownLargoPasos->Location = System::Drawing::Point(88, 448);
			this->numericUpDownLargoPasos->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 3, 0, 0, 0 });
			this->numericUpDownLargoPasos->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->numericUpDownLargoPasos->Name = L"numericUpDownLargoPasos";
			this->numericUpDownLargoPasos->Size = System::Drawing::Size(41, 20);
			this->numericUpDownLargoPasos->TabIndex = 197;
			this->numericUpDownLargoPasos->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 2, 0, 0, 0 });
			// 
			// label69
			// 
			this->label69->AutoSize = true;
			this->label69->Location = System::Drawing::Point(21, 450);
			this->label69->Name = L"label69";
			this->label69->Size = System::Drawing::Size(65, 13);
			this->label69->TabIndex = 196;
			this->label69->Text = L"Largo pasos";
			// 
			// numericUpDownVariacionAlejamientoMiedo
			// 
			this->numericUpDownVariacionAlejamientoMiedo->Location = System::Drawing::Point(21, 414);
			this->numericUpDownVariacionAlejamientoMiedo->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->numericUpDownVariacionAlejamientoMiedo->Name = L"numericUpDownVariacionAlejamientoMiedo";
			this->numericUpDownVariacionAlejamientoMiedo->Size = System::Drawing::Size(41, 20);
			this->numericUpDownVariacionAlejamientoMiedo->TabIndex = 195;
			this->numericUpDownVariacionAlejamientoMiedo->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 15, 0, 0, 0 });
			// 
			// numericUpDownVariacionAlejamientoIra
			// 
			this->numericUpDownVariacionAlejamientoIra->Location = System::Drawing::Point(61, 414);
			this->numericUpDownVariacionAlejamientoIra->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->numericUpDownVariacionAlejamientoIra->Name = L"numericUpDownVariacionAlejamientoIra";
			this->numericUpDownVariacionAlejamientoIra->Size = System::Drawing::Size(41, 20);
			this->numericUpDownVariacionAlejamientoIra->TabIndex = 194;
			this->numericUpDownVariacionAlejamientoIra->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 20, 0, 0, 0 });
			// 
			// numericUpDownVariacionAlejamientoTristeza
			// 
			this->numericUpDownVariacionAlejamientoTristeza->Location = System::Drawing::Point(99, 414);
			this->numericUpDownVariacionAlejamientoTristeza->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) {
				1, 0, 0,
					0
			});
			this->numericUpDownVariacionAlejamientoTristeza->Name = L"numericUpDownVariacionAlejamientoTristeza";
			this->numericUpDownVariacionAlejamientoTristeza->Size = System::Drawing::Size(41, 20);
			this->numericUpDownVariacionAlejamientoTristeza->TabIndex = 193;
			this->numericUpDownVariacionAlejamientoTristeza->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) {
				20, 0, 0,
					0
			});
			// 
			// numericUpDownVariacionAlejamientoAlegria
			// 
			this->numericUpDownVariacionAlejamientoAlegria->Location = System::Drawing::Point(137, 414);
			this->numericUpDownVariacionAlejamientoAlegria->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) {
				1, 0, 0,
					0
			});
			this->numericUpDownVariacionAlejamientoAlegria->Name = L"numericUpDownVariacionAlejamientoAlegria";
			this->numericUpDownVariacionAlejamientoAlegria->Size = System::Drawing::Size(41, 20);
			this->numericUpDownVariacionAlejamientoAlegria->TabIndex = 192;
			this->numericUpDownVariacionAlejamientoAlegria->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 5, 0, 0, 0 });
			// 
			// numericUpDownVariacionAlejamientoDesagrado
			// 
			this->numericUpDownVariacionAlejamientoDesagrado->Location = System::Drawing::Point(179, 414);
			this->numericUpDownVariacionAlejamientoDesagrado->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) {
				1, 0, 0,
					0
			});
			this->numericUpDownVariacionAlejamientoDesagrado->Name = L"numericUpDownVariacionAlejamientoDesagrado";
			this->numericUpDownVariacionAlejamientoDesagrado->Size = System::Drawing::Size(41, 20);
			this->numericUpDownVariacionAlejamientoDesagrado->TabIndex = 191;
			this->numericUpDownVariacionAlejamientoDesagrado->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) {
				20, 0, 0,
					0
			});
			// 
			// label62
			// 
			this->label62->AutoSize = true;
			this->label62->Location = System::Drawing::Point(28, 398);
			this->label62->Name = L"label62";
			this->label62->Size = System::Drawing::Size(51, 13);
			this->label62->TabIndex = 190;
			this->label62->Text = L"Variación";
			// 
			// label63
			// 
			this->label63->AutoSize = true;
			this->label63->Location = System::Drawing::Point(20, 365);
			this->label63->Name = L"label63";
			this->label63->Size = System::Drawing::Size(36, 13);
			this->label63->TabIndex = 189;
			this->label63->Text = L"Miedo";
			// 
			// numericUpDownAlejamientoMiedo
			// 
			this->numericUpDownAlejamientoMiedo->Location = System::Drawing::Point(21, 380);
			this->numericUpDownAlejamientoMiedo->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->numericUpDownAlejamientoMiedo->Name = L"numericUpDownAlejamientoMiedo";
			this->numericUpDownAlejamientoMiedo->Size = System::Drawing::Size(41, 20);
			this->numericUpDownAlejamientoMiedo->TabIndex = 188;
			this->numericUpDownAlejamientoMiedo->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 25, 0, 0, 0 });
			// 
			// label64
			// 
			this->label64->AutoSize = true;
			this->label64->Location = System::Drawing::Point(58, 365);
			this->label64->Name = L"label64";
			this->label64->Size = System::Drawing::Size(19, 13);
			this->label64->TabIndex = 187;
			this->label64->Text = L"Ira";
			// 
			// numericUpDownAlejamientoIra
			// 
			this->numericUpDownAlejamientoIra->Location = System::Drawing::Point(61, 380);
			this->numericUpDownAlejamientoIra->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->numericUpDownAlejamientoIra->Name = L"numericUpDownAlejamientoIra";
			this->numericUpDownAlejamientoIra->Size = System::Drawing::Size(41, 20);
			this->numericUpDownAlejamientoIra->TabIndex = 186;
			this->numericUpDownAlejamientoIra->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 30, 0, 0, 0 });
			// 
			// numericUpDownAlejamientoTristeza
			// 
			this->numericUpDownAlejamientoTristeza->Location = System::Drawing::Point(99, 380);
			this->numericUpDownAlejamientoTristeza->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->numericUpDownAlejamientoTristeza->Name = L"numericUpDownAlejamientoTristeza";
			this->numericUpDownAlejamientoTristeza->Size = System::Drawing::Size(41, 20);
			this->numericUpDownAlejamientoTristeza->TabIndex = 185;
			this->numericUpDownAlejamientoTristeza->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 40, 0, 0, 0 });
			// 
			// label65
			// 
			this->label65->AutoSize = true;
			this->label65->Location = System::Drawing::Point(96, 364);
			this->label65->Name = L"label65";
			this->label65->Size = System::Drawing::Size(33, 13);
			this->label65->TabIndex = 184;
			this->label65->Text = L"Triste";
			// 
			// numericUpDownAlejamientoAlegria
			// 
			this->numericUpDownAlejamientoAlegria->Location = System::Drawing::Point(137, 380);
			this->numericUpDownAlejamientoAlegria->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->numericUpDownAlejamientoAlegria->Name = L"numericUpDownAlejamientoAlegria";
			this->numericUpDownAlejamientoAlegria->Size = System::Drawing::Size(41, 20);
			this->numericUpDownAlejamientoAlegria->TabIndex = 183;
			this->numericUpDownAlejamientoAlegria->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 15, 0, 0, 0 });
			// 
			// label66
			// 
			this->label66->AutoSize = true;
			this->label66->Location = System::Drawing::Point(135, 365);
			this->label66->Name = L"label66";
			this->label66->Size = System::Drawing::Size(39, 13);
			this->label66->TabIndex = 182;
			this->label66->Text = L"Alegria";
			// 
			// label67
			// 
			this->label67->AutoSize = true;
			this->label67->Location = System::Drawing::Point(28, 345);
			this->label67->Name = L"label67";
			this->label67->Size = System::Drawing::Size(96, 13);
			this->label67->TabIndex = 181;
			this->label67->Text = L"Criterio Alejamiento";
			// 
			// label68
			// 
			this->label68->AutoSize = true;
			this->label68->Location = System::Drawing::Point(182, 365);
			this->label68->Name = L"label68";
			this->label68->Size = System::Drawing::Size(38, 13);
			this->label68->TabIndex = 180;
			this->label68->Text = L"Desag";
			// 
			// numericUpDownAlejamientoDesagrado
			// 
			this->numericUpDownAlejamientoDesagrado->Location = System::Drawing::Point(179, 380);
			this->numericUpDownAlejamientoDesagrado->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->numericUpDownAlejamientoDesagrado->Name = L"numericUpDownAlejamientoDesagrado";
			this->numericUpDownAlejamientoDesagrado->Size = System::Drawing::Size(41, 20);
			this->numericUpDownAlejamientoDesagrado->TabIndex = 179;
			this->numericUpDownAlejamientoDesagrado->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 25, 0, 0, 0 });
			// 
			// numericUpDownVariacionAcercamientoMiedo
			// 
			this->numericUpDownVariacionAcercamientoMiedo->Location = System::Drawing::Point(21, 310);
			this->numericUpDownVariacionAcercamientoMiedo->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->numericUpDownVariacionAcercamientoMiedo->Name = L"numericUpDownVariacionAcercamientoMiedo";
			this->numericUpDownVariacionAcercamientoMiedo->Size = System::Drawing::Size(41, 20);
			this->numericUpDownVariacionAcercamientoMiedo->TabIndex = 178;
			this->numericUpDownVariacionAcercamientoMiedo->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 5, 0, 0, 0 });
			// 
			// numericUpDownVariacionAcercamientoIra
			// 
			this->numericUpDownVariacionAcercamientoIra->Location = System::Drawing::Point(61, 310);
			this->numericUpDownVariacionAcercamientoIra->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->numericUpDownVariacionAcercamientoIra->Name = L"numericUpDownVariacionAcercamientoIra";
			this->numericUpDownVariacionAcercamientoIra->Size = System::Drawing::Size(41, 20);
			this->numericUpDownVariacionAcercamientoIra->TabIndex = 177;
			this->numericUpDownVariacionAcercamientoIra->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 15, 0, 0, 0 });
			// 
			// numericUpDownVariacionAcercamientoTristeza
			// 
			this->numericUpDownVariacionAcercamientoTristeza->Location = System::Drawing::Point(99, 310);
			this->numericUpDownVariacionAcercamientoTristeza->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) {
				1, 0, 0,
					0
			});
			this->numericUpDownVariacionAcercamientoTristeza->Name = L"numericUpDownVariacionAcercamientoTristeza";
			this->numericUpDownVariacionAcercamientoTristeza->Size = System::Drawing::Size(41, 20);
			this->numericUpDownVariacionAcercamientoTristeza->TabIndex = 176;
			this->numericUpDownVariacionAcercamientoTristeza->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) {
				20, 0, 0,
					0
			});
			// 
			// numericUpDownVariacionAcercamientoAlegria
			// 
			this->numericUpDownVariacionAcercamientoAlegria->Location = System::Drawing::Point(137, 310);
			this->numericUpDownVariacionAcercamientoAlegria->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) {
				1, 0, 0,
					0
			});
			this->numericUpDownVariacionAcercamientoAlegria->Name = L"numericUpDownVariacionAcercamientoAlegria";
			this->numericUpDownVariacionAcercamientoAlegria->Size = System::Drawing::Size(41, 20);
			this->numericUpDownVariacionAcercamientoAlegria->TabIndex = 175;
			this->numericUpDownVariacionAcercamientoAlegria->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) {
				25, 0, 0,
					0
			});
			// 
			// numericUpDownVariacionAcercamientoDesagrado
			// 
			this->numericUpDownVariacionAcercamientoDesagrado->Location = System::Drawing::Point(179, 310);
			this->numericUpDownVariacionAcercamientoDesagrado->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) {
				1, 0,
					0, 0
			});
			this->numericUpDownVariacionAcercamientoDesagrado->Name = L"numericUpDownVariacionAcercamientoDesagrado";
			this->numericUpDownVariacionAcercamientoDesagrado->Size = System::Drawing::Size(41, 20);
			this->numericUpDownVariacionAcercamientoDesagrado->TabIndex = 174;
			this->numericUpDownVariacionAcercamientoDesagrado->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) {
				10, 0, 0,
					0
			});
			// 
			// label55
			// 
			this->label55->AutoSize = true;
			this->label55->Location = System::Drawing::Point(28, 294);
			this->label55->Name = L"label55";
			this->label55->Size = System::Drawing::Size(51, 13);
			this->label55->TabIndex = 173;
			this->label55->Text = L"Variación";
			// 
			// label56
			// 
			this->label56->AutoSize = true;
			this->label56->Location = System::Drawing::Point(20, 261);
			this->label56->Name = L"label56";
			this->label56->Size = System::Drawing::Size(36, 13);
			this->label56->TabIndex = 172;
			this->label56->Text = L"Miedo";
			// 
			// numericUpDownAcercamientoMiedo
			// 
			this->numericUpDownAcercamientoMiedo->Location = System::Drawing::Point(21, 276);
			this->numericUpDownAcercamientoMiedo->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->numericUpDownAcercamientoMiedo->Name = L"numericUpDownAcercamientoMiedo";
			this->numericUpDownAcercamientoMiedo->Size = System::Drawing::Size(41, 20);
			this->numericUpDownAcercamientoMiedo->TabIndex = 171;
			this->numericUpDownAcercamientoMiedo->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 10, 0, 0, 0 });
			// 
			// label57
			// 
			this->label57->AutoSize = true;
			this->label57->Location = System::Drawing::Point(58, 261);
			this->label57->Name = L"label57";
			this->label57->Size = System::Drawing::Size(19, 13);
			this->label57->TabIndex = 170;
			this->label57->Text = L"Ira";
			// 
			// numericUpDownAcercamientoIra
			// 
			this->numericUpDownAcercamientoIra->Location = System::Drawing::Point(61, 276);
			this->numericUpDownAcercamientoIra->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->numericUpDownAcercamientoIra->Name = L"numericUpDownAcercamientoIra";
			this->numericUpDownAcercamientoIra->Size = System::Drawing::Size(41, 20);
			this->numericUpDownAcercamientoIra->TabIndex = 169;
			this->numericUpDownAcercamientoIra->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 20, 0, 0, 0 });
			// 
			// numericUpDownAcercamientoTristeza
			// 
			this->numericUpDownAcercamientoTristeza->Location = System::Drawing::Point(99, 276);
			this->numericUpDownAcercamientoTristeza->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->numericUpDownAcercamientoTristeza->Name = L"numericUpDownAcercamientoTristeza";
			this->numericUpDownAcercamientoTristeza->Size = System::Drawing::Size(41, 20);
			this->numericUpDownAcercamientoTristeza->TabIndex = 168;
			this->numericUpDownAcercamientoTristeza->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 25, 0, 0, 0 });
			// 
			// label58
			// 
			this->label58->AutoSize = true;
			this->label58->Location = System::Drawing::Point(96, 260);
			this->label58->Name = L"label58";
			this->label58->Size = System::Drawing::Size(33, 13);
			this->label58->TabIndex = 167;
			this->label58->Text = L"Triste";
			// 
			// numericUpDownAcercamientoAlegria
			// 
			this->numericUpDownAcercamientoAlegria->Location = System::Drawing::Point(137, 276);
			this->numericUpDownAcercamientoAlegria->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->numericUpDownAcercamientoAlegria->Name = L"numericUpDownAcercamientoAlegria";
			this->numericUpDownAcercamientoAlegria->Size = System::Drawing::Size(41, 20);
			this->numericUpDownAcercamientoAlegria->TabIndex = 166;
			this->numericUpDownAcercamientoAlegria->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 40, 0, 0, 0 });
			// 
			// label59
			// 
			this->label59->AutoSize = true;
			this->label59->Location = System::Drawing::Point(135, 261);
			this->label59->Name = L"label59";
			this->label59->Size = System::Drawing::Size(39, 13);
			this->label59->TabIndex = 165;
			this->label59->Text = L"Alegria";
			// 
			// label60
			// 
			this->label60->AutoSize = true;
			this->label60->Location = System::Drawing::Point(28, 247);
			this->label60->Name = L"label60";
			this->label60->Size = System::Drawing::Size(107, 13);
			this->label60->TabIndex = 164;
			this->label60->Text = L"Criterio Acercamiento";
			// 
			// label61
			// 
			this->label61->AutoSize = true;
			this->label61->Location = System::Drawing::Point(182, 261);
			this->label61->Name = L"label61";
			this->label61->Size = System::Drawing::Size(38, 13);
			this->label61->TabIndex = 163;
			this->label61->Text = L"Desag";
			// 
			// numericUpDownAcercamientoDesagrado
			// 
			this->numericUpDownAcercamientoDesagrado->Location = System::Drawing::Point(179, 276);
			this->numericUpDownAcercamientoDesagrado->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->numericUpDownAcercamientoDesagrado->Name = L"numericUpDownAcercamientoDesagrado";
			this->numericUpDownAcercamientoDesagrado->Size = System::Drawing::Size(41, 20);
			this->numericUpDownAcercamientoDesagrado->TabIndex = 162;
			this->numericUpDownAcercamientoDesagrado->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 25, 0, 0, 0 });
			// 
			// comboBoxTipoAcercamiento
			// 
			this->comboBoxTipoAcercamiento->FormattingEnabled = true;
			this->comboBoxTipoAcercamiento->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"Empatia", L"Complemento" });
			this->comboBoxTipoAcercamiento->Location = System::Drawing::Point(138, 205);
			this->comboBoxTipoAcercamiento->Name = L"comboBoxTipoAcercamiento";
			this->comboBoxTipoAcercamiento->Size = System::Drawing::Size(82, 21);
			this->comboBoxTipoAcercamiento->TabIndex = 161;
			this->comboBoxTipoAcercamiento->Text = L"Empatia";
			// 
			// label54
			// 
			this->label54->AutoSize = true;
			this->label54->Location = System::Drawing::Point(28, 208);
			this->label54->Name = L"label54";
			this->label54->Size = System::Drawing::Size(95, 13);
			this->label54->TabIndex = 160;
			this->label54->Text = L"Tipo acercamiento";
			// 
			// numericUpDownSensor
			// 
			this->numericUpDownSensor->Location = System::Drawing::Point(152, 82);
			this->numericUpDownSensor->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 7, 0, 0, 0 });
			this->numericUpDownSensor->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 2, 0, 0, 0 });
			this->numericUpDownSensor->Name = L"numericUpDownSensor";
			this->numericUpDownSensor->Size = System::Drawing::Size(41, 20);
			this->numericUpDownSensor->TabIndex = 159;
			this->numericUpDownSensor->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 3, 0, 0, 0 });
			// 
			// label53
			// 
			this->label53->AutoSize = true;
			this->label53->Location = System::Drawing::Point(128, 67);
			this->label53->Name = L"label53";
			this->label53->Size = System::Drawing::Size(40, 13);
			this->label53->TabIndex = 158;
			this->label53->Text = L"Sensor";
			// 
			// numericUpDownVariacionReproduccionMiedo
			// 
			this->numericUpDownVariacionReproduccionMiedo->Location = System::Drawing::Point(21, 138);
			this->numericUpDownVariacionReproduccionMiedo->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->numericUpDownVariacionReproduccionMiedo->Name = L"numericUpDownVariacionReproduccionMiedo";
			this->numericUpDownVariacionReproduccionMiedo->Size = System::Drawing::Size(41, 20);
			this->numericUpDownVariacionReproduccionMiedo->TabIndex = 157;
			this->numericUpDownVariacionReproduccionMiedo->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 5, 0, 0, 0 });
			// 
			// numericUpDownVariacionReproduccionIra
			// 
			this->numericUpDownVariacionReproduccionIra->Location = System::Drawing::Point(61, 138);
			this->numericUpDownVariacionReproduccionIra->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->numericUpDownVariacionReproduccionIra->Name = L"numericUpDownVariacionReproduccionIra";
			this->numericUpDownVariacionReproduccionIra->Size = System::Drawing::Size(41, 20);
			this->numericUpDownVariacionReproduccionIra->TabIndex = 156;
			this->numericUpDownVariacionReproduccionIra->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 5, 0, 0, 0 });
			// 
			// numericUpDownVariacionReproduccionTristeza
			// 
			this->numericUpDownVariacionReproduccionTristeza->Location = System::Drawing::Point(99, 138);
			this->numericUpDownVariacionReproduccionTristeza->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) {
				1, 0, 0,
					0
			});
			this->numericUpDownVariacionReproduccionTristeza->Name = L"numericUpDownVariacionReproduccionTristeza";
			this->numericUpDownVariacionReproduccionTristeza->Size = System::Drawing::Size(41, 20);
			this->numericUpDownVariacionReproduccionTristeza->TabIndex = 155;
			this->numericUpDownVariacionReproduccionTristeza->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) {
				5, 0, 0,
					0
			});
			// 
			// numericUpDownVariacionReproduccionAlegria
			// 
			this->numericUpDownVariacionReproduccionAlegria->Location = System::Drawing::Point(137, 138);
			this->numericUpDownVariacionReproduccionAlegria->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) {
				1, 0, 0,
					0
			});
			this->numericUpDownVariacionReproduccionAlegria->Name = L"numericUpDownVariacionReproduccionAlegria";
			this->numericUpDownVariacionReproduccionAlegria->Size = System::Drawing::Size(41, 20);
			this->numericUpDownVariacionReproduccionAlegria->TabIndex = 154;
			this->numericUpDownVariacionReproduccionAlegria->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 5, 0, 0, 0 });
			// 
			// numericUpDownVariacionReproduccionDesagrado
			// 
			this->numericUpDownVariacionReproduccionDesagrado->Location = System::Drawing::Point(179, 138);
			this->numericUpDownVariacionReproduccionDesagrado->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) {
				1, 0,
					0, 0
			});
			this->numericUpDownVariacionReproduccionDesagrado->Name = L"numericUpDownVariacionReproduccionDesagrado";
			this->numericUpDownVariacionReproduccionDesagrado->Size = System::Drawing::Size(41, 20);
			this->numericUpDownVariacionReproduccionDesagrado->TabIndex = 153;
			this->numericUpDownVariacionReproduccionDesagrado->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) {
				5, 0, 0,
					0
			});
			// 
			// label51
			// 
			this->label51->AutoSize = true;
			this->label51->Location = System::Drawing::Point(20, 120);
			this->label51->Name = L"label51";
			this->label51->Size = System::Drawing::Size(36, 13);
			this->label51->TabIndex = 151;
			this->label51->Text = L"Miedo";
			// 
			// label50
			// 
			this->label50->AutoSize = true;
			this->label50->Location = System::Drawing::Point(58, 120);
			this->label50->Name = L"label50";
			this->label50->Size = System::Drawing::Size(19, 13);
			this->label50->TabIndex = 149;
			this->label50->Text = L"Ira";
			// 
			// label49
			// 
			this->label49->AutoSize = true;
			this->label49->Location = System::Drawing::Point(96, 119);
			this->label49->Name = L"label49";
			this->label49->Size = System::Drawing::Size(33, 13);
			this->label49->TabIndex = 146;
			this->label49->Text = L"Triste";
			// 
			// label48
			// 
			this->label48->AutoSize = true;
			this->label48->Location = System::Drawing::Point(135, 120);
			this->label48->Name = L"label48";
			this->label48->Size = System::Drawing::Size(39, 13);
			this->label48->TabIndex = 144;
			this->label48->Text = L"Alegria";
			// 
			// label47
			// 
			this->label47->AutoSize = true;
			this->label47->Location = System::Drawing::Point(28, 106);
			this->label47->Name = L"label47";
			this->label47->Size = System::Drawing::Size(185, 13);
			this->label47->TabIndex = 70;
			this->label47->Text = L"Rango compatibilidad (Reproducción)";
			// 
			// label46
			// 
			this->label46->AutoSize = true;
			this->label46->Location = System::Drawing::Point(182, 120);
			this->label46->Name = L"label46";
			this->label46->Size = System::Drawing::Size(38, 13);
			this->label46->TabIndex = 69;
			this->label46->Text = L"Desag";
			// 
			// numericUpDownTiempoMuerte
			// 
			this->numericUpDownTiempoMuerte->Location = System::Drawing::Point(76, 83);
			this->numericUpDownTiempoMuerte->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1000, 0, 0, 0 });
			this->numericUpDownTiempoMuerte->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->numericUpDownTiempoMuerte->Name = L"numericUpDownTiempoMuerte";
			this->numericUpDownTiempoMuerte->Size = System::Drawing::Size(41, 20);
			this->numericUpDownTiempoMuerte->TabIndex = 67;
			this->numericUpDownTiempoMuerte->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 25, 0, 0, 0 });
			// 
			// label45
			// 
			this->label45->AutoSize = true;
			this->label45->Location = System::Drawing::Point(24, 68);
			this->label45->Name = L"label45";
			this->label45->Size = System::Drawing::Size(78, 13);
			this->label45->TabIndex = 66;
			this->label45->Text = L"Tiempo Muerte";
			// 
			// comboBoxDispercion
			// 
			this->comboBoxDispercion->FormattingEnabled = true;
			this->comboBoxDispercion->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"Alta", L"Media", L"Baja" });
			this->comboBoxDispercion->Location = System::Drawing::Point(99, 40);
			this->comboBoxDispercion->Name = L"comboBoxDispercion";
			this->comboBoxDispercion->Size = System::Drawing::Size(121, 21);
			this->comboBoxDispercion->TabIndex = 65;
			this->comboBoxDispercion->Text = L"Media";
			// 
			// label44
			// 
			this->label44->AutoSize = true;
			this->label44->Location = System::Drawing::Point(28, 43);
			this->label44->Name = L"label44";
			this->label44->Size = System::Drawing::Size(56, 13);
			this->label44->TabIndex = 64;
			this->label44->Text = L"Dispersión";
			// 
			// numericUpDownCantidad
			// 
			this->numericUpDownCantidad->Location = System::Drawing::Point(99, 7);
			this->numericUpDownCantidad->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 2500, 0, 0, 0 });
			this->numericUpDownCantidad->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->numericUpDownCantidad->Name = L"numericUpDownCantidad";
			this->numericUpDownCantidad->Size = System::Drawing::Size(41, 20);
			this->numericUpDownCantidad->TabIndex = 63;
			this->numericUpDownCantidad->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 50, 0, 0, 0 });
			// 
			// label43
			// 
			this->label43->AutoSize = true;
			this->label43->Location = System::Drawing::Point(28, 12);
			this->label43->Name = L"label43";
			this->label43->Size = System::Drawing::Size(49, 13);
			this->label43->TabIndex = 0;
			this->label43->Text = L"Cantidad";
			// 
			// groupBoxControlSimulacion
			// 
			this->groupBoxControlSimulacion->Controls->Add(this->label77);
			this->groupBoxControlSimulacion->Controls->Add(this->label52);
			this->groupBoxControlSimulacion->Controls->Add(this->buttonDetener);
			this->groupBoxControlSimulacion->Controls->Add(this->buttonAvanzar);
			this->groupBoxControlSimulacion->Controls->Add(this->buttonPausar);
			this->groupBoxControlSimulacion->Controls->Add(this->buttonIniciar);
			this->groupBoxControlSimulacion->Controls->Add(this->trackBar1);
			this->groupBoxControlSimulacion->Location = System::Drawing::Point(12, 618);
			this->groupBoxControlSimulacion->Name = L"groupBoxControlSimulacion";
			this->groupBoxControlSimulacion->Size = System::Drawing::Size(1022, 68);
			this->groupBoxControlSimulacion->TabIndex = 5;
			this->groupBoxControlSimulacion->TabStop = false;
			this->groupBoxControlSimulacion->Text = L"Control Simulación";
			// 
			// label77
			// 
			this->label77->AutoSize = true;
			this->label77->Location = System::Drawing::Point(555, 49);
			this->label77->Name = L"label77";
			this->label77->Size = System::Drawing::Size(41, 13);
			this->label77->TabIndex = 7;
			this->label77->Text = L"Rápido";
			// 
			// label52
			// 
			this->label52->AutoSize = true;
			this->label52->Location = System::Drawing::Point(7, 50);
			this->label52->Name = L"label52";
			this->label52->Size = System::Drawing::Size(34, 13);
			this->label52->TabIndex = 6;
			this->label52->Text = L"Lento";
			// 
			// buttonDetener
			// 
			this->buttonDetener->Location = System::Drawing::Point(917, 19);
			this->buttonDetener->Name = L"buttonDetener";
			this->buttonDetener->Size = System::Drawing::Size(99, 43);
			this->buttonDetener->TabIndex = 5;
			this->buttonDetener->Text = L"Detener";
			this->buttonDetener->UseVisualStyleBackColor = true;
			this->buttonDetener->Click += gcnew System::EventHandler(this, &Vista::buttonDetener_Click);
			// 
			// buttonAvanzar
			// 
			this->buttonAvanzar->Location = System::Drawing::Point(822, 19);
			this->buttonAvanzar->Name = L"buttonAvanzar";
			this->buttonAvanzar->Size = System::Drawing::Size(89, 43);
			this->buttonAvanzar->TabIndex = 4;
			this->buttonAvanzar->Text = L"Avanzar";
			this->buttonAvanzar->UseVisualStyleBackColor = true;
			this->buttonAvanzar->Click += gcnew System::EventHandler(this, &Vista::buttonAvanzar_Click);
			// 
			// buttonPausar
			// 
			this->buttonPausar->Location = System::Drawing::Point(716, 19);
			this->buttonPausar->Name = L"buttonPausar";
			this->buttonPausar->Size = System::Drawing::Size(100, 43);
			this->buttonPausar->TabIndex = 3;
			this->buttonPausar->Text = L"Pausar";
			this->buttonPausar->UseVisualStyleBackColor = true;
			this->buttonPausar->Click += gcnew System::EventHandler(this, &Vista::buttonPausar_Click);
			// 
			// buttonIniciar
			// 
			this->buttonIniciar->Location = System::Drawing::Point(609, 19);
			this->buttonIniciar->Name = L"buttonIniciar";
			this->buttonIniciar->Size = System::Drawing::Size(101, 43);
			this->buttonIniciar->TabIndex = 2;
			this->buttonIniciar->Text = L"Iniciar";
			this->buttonIniciar->UseVisualStyleBackColor = true;
			this->buttonIniciar->Click += gcnew System::EventHandler(this, &Vista::buttonIniciar_Click);
			// 
			// trackBar1
			// 
			this->trackBar1->Location = System::Drawing::Point(6, 19);
			this->trackBar1->Name = L"trackBar1";
			this->trackBar1->Size = System::Drawing::Size(594, 45);
			this->trackBar1->TabIndex = 1;
			this->trackBar1->Value = 3;
			this->trackBar1->Scroll += gcnew System::EventHandler(this, &Vista::trackBar1_Scroll);
			// 
			// Vista
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1050, 699);
			this->Controls->Add(this->groupBoxControlSimulacion);
			this->Controls->Add(this->groupBoxNPC);
			this->Controls->Add(this->groupBoxEventos);
			this->Controls->Add(this->groupBoxInfoNPC);
			this->Controls->Add(this->panel1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MaximizeBox = false;
			this->Name = L"Vista";
			this->Text = L"SEA (Ser Emocional Artificial)";
			this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &Vista::Vista_FormClosing);
			this->groupBoxInfoNPC->ResumeLayout(false);
			this->groupBoxInfoNPC->PerformLayout();
			this->groupBoxEventos->ResumeLayout(false);
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownEventoGenericoDesagrado))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownEventoGenericoAlegria))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownEventoGenericoTristeza))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownEventoGenericoIra))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownEventoGenericoMiedo))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownVariacionDesagradoPrimavera))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownVariacionAlegriaPrimavera))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownVariacionTristezaPrimavera))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownVariacionIraPrimavera))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownVariacionMiedoPrimavera))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownDesagradoPrimavera))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownAlegriaPrimavera))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownTristezaPrimavera))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownIraPrimavera))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownMiedoPrimavera))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownVariacionDesagradoDeporte))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownVariacionAlegriaDeporte))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownVariacionTristezaDeporte))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownVariacionIraDeporte))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownVariacionMiedoDeporte))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownDesagradoDeporte))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownAlegriaDeporte))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownTristezaDeporte))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownIraDeporte))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownMiedoDeporte))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownVariacionDesagradoFiesta))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownVariacionAlegriaFiesta))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownVariacionTristezaFiesta))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownVariacionIraFiesta))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownVariacionMiedoFiesta))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownDesagradoFiesta))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownAlegriaFiesta))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownTristezaFiesta))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownIraFiesta))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownMiedoFiesta))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownVariacionDesagradoIncendio))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownVariacionAlegriaIncendio))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownVariacionTristezaIncendio))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownVariacionIraIncendio))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownVariacionMiedoIncendio))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownDesagradoIncendio))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownAlegriaIncendio))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownTristezaIncendio))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownIraIncendio))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownMiedoIncendio))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownVariacionDesagradoInundacion))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownVariacionAlegriaInundacion))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownVariacionTristezaInundacion))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownVariacionIraInundacion))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownVariacionMiedoInundacion))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownDesagradoInundacion))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownAlegriaInundacion))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownTristezaInundacion))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownIraInundacion))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownMiedoInundacion))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownVariacionDesagradoTerremoto))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownVariacionAlegriaTerremoto))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownVariacionTristezaTerremoto))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownVariacionIraTerremoto))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownVariacionMiedoTerremoto))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownDesagradoTerremoto))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownAlegriaTerremoto))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownTristezaTerremoto))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownIraTerremoto))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownMiedoTerremoto))->EndInit();
			this->groupBoxNPC->ResumeLayout(false);
			this->panel3->ResumeLayout(false);
			this->panel3->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownTiempoReproduccion))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownLargoPasos))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownVariacionAlejamientoMiedo))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownVariacionAlejamientoIra))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownVariacionAlejamientoTristeza))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownVariacionAlejamientoAlegria))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownVariacionAlejamientoDesagrado))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownAlejamientoMiedo))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownAlejamientoIra))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownAlejamientoTristeza))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownAlejamientoAlegria))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownAlejamientoDesagrado))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownVariacionAcercamientoMiedo))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownVariacionAcercamientoIra))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownVariacionAcercamientoTristeza))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownVariacionAcercamientoAlegria))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownVariacionAcercamientoDesagrado))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownAcercamientoMiedo))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownAcercamientoIra))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownAcercamientoTristeza))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownAcercamientoAlegria))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownAcercamientoDesagrado))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownSensor))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownVariacionReproduccionMiedo))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownVariacionReproduccionIra))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownVariacionReproduccionTristeza))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownVariacionReproduccionAlegria))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownVariacionReproduccionDesagrado))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownTiempoMuerte))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDownCantidad))->EndInit();
			this->groupBoxControlSimulacion->ResumeLayout(false);
			this->groupBoxControlSimulacion->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackBar1))->EndInit();
			this->ResumeLayout(false);

		}

		// 
		// Acciones de los botones
		// 
		#pragma endregion
		private: System::Void buttonIniciar_Click(System::Object^  sender, System::EventArgs^  e);
		private: System::Void buttonPausar_Click(System::Object^  sender, System::EventArgs^  e);
		private: System::Void buttonAvanzar_Click(System::Object^  sender, System::EventArgs^  e);
		private: System::Void buttonDetener_Click(System::Object^  sender, System::EventArgs^  e);
		private: System::Void trackBar1_Scroll(System::Object^  sender, System::EventArgs^  e);
		private: System::Void labelNPCs_Click(System::Object^  sender, System::EventArgs^  e);

private: System::Void buttonEnviarTerremoto_Click(System::Object^  sender, System::EventArgs^  e) {
	hayEvento = true;
	genomaEvento = gcnew NPC(23);

	genomaEvento->setMiedo((int)numericUpDownMiedoTerremoto->Value);
	genomaEvento->setira((int)numericUpDownIraTerremoto->Value);
	genomaEvento->settristeza((int)numericUpDownTristezaTerremoto->Value);
	genomaEvento->setalegria((int)numericUpDownAlegriaTerremoto->Value);
	genomaEvento->setdisgusto((int)numericUpDownDesagradoTerremoto->Value);
	
	genomaEvento->normalizarEmociones();//Se normalizan dichos valores.
	

	//Toma de afectacion a las emociones.
	genomaEvento->setAfectacionMiedo((int)numericUpDownVariacionMiedoTerremoto->Value);
	genomaEvento->setafectacionIra((int)numericUpDownVariacionIraTerremoto->Value);
	genomaEvento->setafectacionTristeza((int)numericUpDownVariacionTristezaTerremoto->Value);
	genomaEvento->setafectacionAlegria((int)numericUpDownVariacionAlegriaTerremoto->Value);
	genomaEvento->setafectacionDisgusto((int)numericUpDownVariacionDesagradoTerremoto->Value);
}
private: System::Void buttonEnviarInundacion_Click(System::Object^  sender, System::EventArgs^  e) {
	hayEvento = true;
	genomaEvento = gcnew NPC(23);

	genomaEvento->setMiedo((int)numericUpDownMiedoInundacion->Value);
	genomaEvento->setira((int)numericUpDownIraInundacion->Value);
	genomaEvento->settristeza((int)numericUpDownTristezaInundacion->Value);
	genomaEvento->setalegria((int)numericUpDownAlegriaInundacion->Value);
	genomaEvento->setdisgusto((int)numericUpDownDesagradoInundacion->Value);

	genomaEvento->normalizarEmociones();//Se normalizan dichos valores.


										//Toma de afectacion a las emociones.
	genomaEvento->setAfectacionMiedo((int)numericUpDownVariacionMiedoInundacion->Value);
	genomaEvento->setafectacionIra((int)numericUpDownVariacionIraInundacion->Value);
	genomaEvento->setafectacionTristeza((int)numericUpDownVariacionTristezaInundacion->Value);
	genomaEvento->setafectacionAlegria((int)numericUpDownVariacionAlegriaInundacion->Value);
	genomaEvento->setafectacionDisgusto((int)numericUpDownVariacionDesagradoInundacion->Value);
}
private: System::Void buttonEnviarIncendio_Click(System::Object^  sender, System::EventArgs^  e) {
	hayEvento = true;
	genomaEvento = gcnew NPC(23);

	genomaEvento->setMiedo((int)numericUpDownMiedoIncendio->Value);
	genomaEvento->setira((int)numericUpDownIraIncendio->Value);
	genomaEvento->settristeza((int)numericUpDownTristezaIncendio->Value);
	genomaEvento->setalegria((int)numericUpDownAlegriaIncendio->Value);
	genomaEvento->setdisgusto((int)numericUpDownDesagradoIncendio->Value);

	genomaEvento->normalizarEmociones();//Se normalizan dichos valores.


										//Toma de afectacion a las emociones.
	genomaEvento->setAfectacionMiedo((int)numericUpDownVariacionMiedoIncendio->Value);
	genomaEvento->setafectacionIra((int)numericUpDownVariacionIraIncendio->Value);
	genomaEvento->setafectacionTristeza((int)numericUpDownVariacionTristezaIncendio->Value);
	genomaEvento->setafectacionAlegria((int)numericUpDownVariacionAlegriaIncendio->Value);
	genomaEvento->setafectacionDisgusto((int)numericUpDownVariacionDesagradoIncendio->Value);
}
private: System::Void buttonEnviarFiesta_Click(System::Object^  sender, System::EventArgs^  e) {
	hayEvento = true;
	genomaEvento = gcnew NPC(23);

	genomaEvento->setMiedo((int)numericUpDownMiedoFiesta->Value);
	genomaEvento->setira((int)numericUpDownIraFiesta->Value);
	genomaEvento->settristeza((int)numericUpDownTristezaFiesta->Value);
	genomaEvento->setalegria((int)numericUpDownAlegriaFiesta->Value);
	genomaEvento->setdisgusto((int)numericUpDownDesagradoFiesta->Value);

	genomaEvento->normalizarEmociones();//Se normalizan dichos valores.


										//Toma de afectacion a las emociones.
	genomaEvento->setAfectacionMiedo((int)numericUpDownVariacionMiedoFiesta->Value);
	genomaEvento->setafectacionIra((int)numericUpDownVariacionIraFiesta->Value);
	genomaEvento->setafectacionTristeza((int)numericUpDownVariacionTristezaFiesta->Value);
	genomaEvento->setafectacionAlegria((int)numericUpDownVariacionAlegriaFiesta->Value);
	genomaEvento->setafectacionDisgusto((int)numericUpDownVariacionDesagradoFiesta->Value);
}
private: System::Void buttonEnviarDeporte_Click(System::Object^  sender, System::EventArgs^  e) {
	hayEvento = true;
	genomaEvento = gcnew NPC(23);

	genomaEvento->setMiedo((int)numericUpDownMiedoDeporte->Value);
	genomaEvento->setira((int)numericUpDownIraDeporte->Value);
	genomaEvento->settristeza((int)numericUpDownTristezaDeporte->Value);
	genomaEvento->setalegria((int)numericUpDownAlegriaDeporte->Value);
	genomaEvento->setdisgusto((int)numericUpDownDesagradoDeporte->Value);

	genomaEvento->normalizarEmociones();//Se normalizan dichos valores.


										//Toma de afectacion a las emociones.
	genomaEvento->setAfectacionMiedo((int)numericUpDownVariacionMiedoDeporte->Value);
	genomaEvento->setafectacionIra((int)numericUpDownVariacionIraDeporte->Value);
	genomaEvento->setafectacionTristeza((int)numericUpDownVariacionTristezaDeporte->Value);
	genomaEvento->setafectacionAlegria((int)numericUpDownVariacionAlegriaDeporte->Value);
	genomaEvento->setafectacionDisgusto((int)numericUpDownVariacionDesagradoDeporte->Value);
}
private: System::Void buttonEnviarPrimavera_Click(System::Object^  sender, System::EventArgs^  e) {
	hayEvento = true;
	genomaEvento = gcnew NPC(23);

	genomaEvento->setMiedo((int)numericUpDownMiedoPrimavera->Value);
	genomaEvento->setira((int)numericUpDownIraPrimavera->Value);
	genomaEvento->settristeza((int)numericUpDownTristezaPrimavera->Value);
	genomaEvento->setalegria((int)numericUpDownAlegriaPrimavera->Value);
	genomaEvento->setdisgusto((int)numericUpDownDesagradoPrimavera->Value);

	genomaEvento->normalizarEmociones();//Se normalizan dichos valores.


										//Toma de afectacion a las emociones.
	genomaEvento->setAfectacionMiedo((int)numericUpDownVariacionMiedoPrimavera->Value);
	genomaEvento->setafectacionIra((int)numericUpDownVariacionIraPrimavera->Value);
	genomaEvento->setafectacionTristeza((int)numericUpDownVariacionTristezaPrimavera->Value);
	genomaEvento->setafectacionAlegria((int)numericUpDownVariacionAlegriaPrimavera->Value);
	genomaEvento->setafectacionDisgusto((int)numericUpDownVariacionDesagradoPrimavera->Value);
}
private: System::Void Vista_FormClosing(System::Object^  sender, System::Windows::Forms::FormClosingEventArgs^  e) {
	if (inicioSimulacion)
	{
		if (newThread->IsAlive)
		{
			newThread->Abort();
		}
	}
		
}
};
}
