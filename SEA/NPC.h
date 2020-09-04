#pragma once
ref class NPC
{

//#include <ctime>
public:
	NPC()
	{		
	}
	NPC(int n)
	{
		dead = true;
		this->FilaPareja = -1; //-1 indica que no tiene pareja.
		this->ColumnaPareja = -1; //-1 indica que no tiene pareja.

	}
	NPC(int miedo, int afectacionMiedo, int ira, int afectacionIra, int tristeza, int afectacionTristeza, int alegria, int afectacionAlegria, int disgusto, int afectacionDisguto, int tiempoMuerte)
	{
		this->miedo = miedo;
		this->afectacionMiedo = afectacionMiedo;
		this->ira = ira;
		this->afectacionIra = afectacionIra;
		this->tristeza = tristeza;
		this->afectacionTristeza = afectacionTristeza;
		this->alegria = alegria;
		this->afectacionAlegria = afectacionAlegria;
		this->disgusto = disgusto;
		this->afectacionDisgusto = afectacionDisguto;
		this->tiempoMuerte = tiempoMuerte;
		this->contadorGeneral = 0;
		this->contadorProcreacion = 0;
		this->FilaPareja= -1; //-1 indica que no tiene pareja.
		this->ColumnaPareja= -1; //-1 indica que no tiene pareja.
		dead = false;
		normalizarEmociones();		
	}
	~NPC()
	{

	}

	void copiar(NPC^ padre)
	{
		miedo = padre->getMiedo();
		ira = padre->getira();
		tristeza= padre->gettristeza();
		alegria = padre->getalegria();
		disgusto = padre->getdisgusto();

		afectacionMiedo = padre->getAfectacionMiedo();
		afectacionIra = padre->getafectacionIra();
		afectacionTristeza = padre->getafectacionTristeza();
		afectacionAlegria = padre->getafectacionAlegria();
		afectacionDisgusto = padre->getafectacionDisgusto();

		this->tiempoMuerte = padre->getTiempoMuerte();
		this->contadorGeneral = 0;
		this->contadorProcreacion = 0;
		this->FilaPareja = -1; //-1 indica que no tiene pareja.
		this->ColumnaPareja = -1; //-1 indica que no tiene pareja.
		dead = false;
	}

	void normalizarEmociones()
	{
		int totalEmociones = miedo + ira + tristeza + alegria + disgusto;
		if (totalEmociones!=0)
		{
			noCeros();
			miedo = (miedo * 100) / totalEmociones;
			ira = (ira * 100) / totalEmociones;
			tristeza = (tristeza * 100) / totalEmociones;
			alegria = (alegria * 100) / totalEmociones;
			disgusto = (disgusto * 100) / totalEmociones;
			noCeros();
		}
	}

	void noCeros()
	{
		if (miedo == 0) miedo = 1;
		if (ira == 0) ira = 1;
		if (tristeza == 0) tristeza = 1;
		if (alegria == 0) alegria = 1;
		if (disgusto == 0) disgusto = 1;
	}

	void afectarNPC(NPC^ genoma, int aleatorio1, int aleatorio2, int aleatorio3, int aleatorio4, int aleatorio5)
	{	
		//miedo
		int cambioMiedo = genoma->getMiedo();
		for (int i = 1; i <= aleatorio1; i++)
		{
			this->miedo += cambioMiedo;
		}
		//Ira
		int cambioIra = genoma->getira();
		for (int i = 1; i <= aleatorio2; i++)
		{
			this->ira += cambioIra;
		}
		//Tristeza
		int cambioTristeza = genoma->gettristeza();
		for (int i = 1; i <= aleatorio3; i++)
		{
			this->tristeza += cambioTristeza;
		}
		//Alegria
		int cambioAlegria = genoma->getalegria();
		for (int i = 1; i <= aleatorio4; i++)
		{
			this->alegria += cambioAlegria;
		}				
		//Disgusto
		int cambioDisgusto = genoma->getdisgusto();
		for (int i = 1; i <= aleatorio5; i++)
		{
			this->disgusto += cambioDisgusto;
		}		
		normalizarEmociones();
	}

	void afectarNPCEvento(NPC^ genoma)
	{
		//miedo
		int cambioMiedo = genoma->getMiedo();
		for (int i = 1; i <= genoma->getAfectacionMiedo(); i++)
		{
			this->miedo += cambioMiedo;
		}
		//Ira
		int cambioIra = genoma->getira();
		for (int i = 1; i <= genoma->getafectacionIra(); i++)
		{
			this->ira += cambioIra;
		}
		//Tristeza
		int cambioTristeza = genoma->gettristeza();
		for (int i = 1; i <= genoma->getafectacionTristeza(); i++)
		{
			this->tristeza += cambioTristeza;
		}
		//Alegria
		int cambioAlegria = genoma->getalegria();
		for (int i = 1; i <= genoma->getafectacionAlegria(); i++)
		{
			this->alegria += cambioAlegria;
		}
		//Disgusto
		int cambioDisgusto = genoma->getdisgusto();
		for (int i = 1; i <= genoma->getafectacionDisgusto(); i++)
		{
			this->disgusto += cambioDisgusto;
		}
		normalizarEmociones();
	}

	void aumentarContadores()
	{
		contadorGeneral++;
		if (FilaPareja != -1)
		{
			contadorProcreacion++;
		}
	}

	bool isDead()
	{
		return dead;
	}

	bool esCompatible(NPC^ nPC, NPC^ vectorReproduccion, int tipo)//1 para empatia, 2 para complemento
	{
		if (tipo == 1)
		{
			if ((miedo + vectorReproduccion->getAfectacionMiedo()) >= nPC->getMiedo() && (miedo - vectorReproduccion->getAfectacionMiedo()) <= nPC->getMiedo())
			{
				if ((ira + vectorReproduccion->getafectacionIra()) >= nPC->getira() && (ira - vectorReproduccion->getafectacionIra()) <= nPC->getira())
				{
					if ((tristeza + vectorReproduccion->getafectacionTristeza()) >= nPC->gettristeza() && (tristeza - vectorReproduccion->getafectacionTristeza()) <= nPC->gettristeza())
					{
						if ((alegria + vectorReproduccion->getafectacionAlegria()) >= nPC->getalegria() && (alegria - vectorReproduccion->getafectacionAlegria()) <= nPC->getalegria())
						{
							if ((disgusto + vectorReproduccion->getafectacionDisgusto()) >= nPC->getdisgusto() && (disgusto - vectorReproduccion->getafectacionDisgusto()) <= nPC->getdisgusto())
							{
								return true;
							}
							else
							{
								return false;
							}
						}
						else
						{
							return false;
						}
					}
					else
					{
						return false;
					}
				}
				else
				{
					return false;
				}
			}
			else
			{
				return false;
			}
		}
		else
		{
			if ((miedo - vectorReproduccion->getAfectacionMiedo()) <= 100 - nPC->getMiedo() && (miedo + vectorReproduccion->getAfectacionMiedo()) >= 100 - nPC->getMiedo())
			{
				if ((ira - vectorReproduccion->getafectacionIra()) <= 100 - nPC->getira() && (ira + vectorReproduccion->getafectacionIra()) >= 100 - nPC->getira())
				{
					if ((tristeza - vectorReproduccion->getafectacionTristeza()) <= 100 - nPC->gettristeza() && (tristeza + vectorReproduccion->getafectacionTristeza()) >= 100 - nPC->gettristeza())
					{
						if ((alegria - vectorReproduccion->getafectacionAlegria()) <= 100 - nPC->getalegria() && (alegria + vectorReproduccion->getafectacionAlegria()) >= 100 - nPC->getalegria())
						{
							if ((disgusto - vectorReproduccion->getafectacionDisgusto()) <= 100 - nPC->getdisgusto() && (disgusto + vectorReproduccion->getafectacionDisgusto()) >= 100 - nPC->getdisgusto())
							{
								return true;
							}
							else
							{
								return false;
							}
						}
						else
						{
							return false;
						}
					}
					else
					{
						return false;
					}
				}
				else
				{
					return false;
				}
			}
			else
			{
				return false;
			}
		}
	}

	bool seMueve(NPC^ genomaAcercanmiento)
	{
		if (miedo - genomaAcercanmiento->getAfectacionMiedo() <= genomaAcercanmiento->getMiedo() && miedo + genomaAcercanmiento->getAfectacionMiedo() >= genomaAcercanmiento->getMiedo())
		{
			if (ira - genomaAcercanmiento->getafectacionIra() <= genomaAcercanmiento->getira() && ira + genomaAcercanmiento->getafectacionIra() >= genomaAcercanmiento->getira())
			{
				if (tristeza - genomaAcercanmiento->getafectacionTristeza() <= genomaAcercanmiento->gettristeza() && tristeza + genomaAcercanmiento->getafectacionTristeza() >= genomaAcercanmiento->gettristeza())
				{
					if (alegria - genomaAcercanmiento->getafectacionAlegria() <= genomaAcercanmiento->getalegria() && alegria + genomaAcercanmiento->getafectacionAlegria() >= genomaAcercanmiento->getalegria())
					{
						if (disgusto - genomaAcercanmiento->getafectacionDisgusto() <= genomaAcercanmiento->getdisgusto() && disgusto + genomaAcercanmiento->getafectacionDisgusto() >= genomaAcercanmiento->getdisgusto())
						{
							return true;
						}
						else
						{
							return false;
						}
					}
					else
					{
						return false;
					}
				}
				else
				{
					return false;
				}
			}
			else
			{
				return false;
			}
		}
		else
		{
			return false;
		}
	}

	/*
	//Getters
	int getMiedo();
	int getAfectacionMiedo();
	int getira();
	int getafectacionIra();
	int gettristeza();
	int getafectacionTristeza();
	int getalegria();
	int getafectacionAlegria();
	int getdisgusto();
	int getafectacionDisgusto();

	//Setters
	void setMiedo(int miedo);
	void setAfectacionMiedo(int afectacionMiedo);
	void setira(int ira);
	void setafectacionIra(int afectacionIra);
	void settristeza(int tristeza);
	void setafectacionTristeza(int afectacionTristeza);
	void setalegria(int alegria);
	void setafectacionAlegria(int afectacionAlegria);
	void setdisgusto(int disgusto);
	void setafectacionDisgusto(int afectacionDisgusto);
	*/
	//Getters

	int NPC::getMiedo()
	{
		return miedo;
	}

	int NPC::getAfectacionMiedo()
	{
		return afectacionMiedo;
	}

	int NPC::getira()
	{
		return ira;
	}

	int NPC::getafectacionIra()
	{
		return afectacionIra;
	}

	int NPC::gettristeza()
	{
		return tristeza;
	}

	int NPC::getafectacionTristeza()
	{
		return afectacionTristeza;
	}

	int NPC::getalegria()
	{
		return alegria;
	}

	int NPC::getafectacionAlegria()
	{
		return afectacionAlegria;
	}

	int NPC::getdisgusto()
	{
		return disgusto;
	}

	int NPC::getafectacionDisgusto()
	{
		return afectacionDisgusto;
	}

	int NPC::getContadorGeneral()
	{
		return contadorGeneral;
	}

	int NPC::getContadorProcreacion()
	{
		return contadorProcreacion;
	}

	int NPC::getFilaPareja()
	{
		return FilaPareja;
	}

	int NPC::getColumnaPareja()
	{
		return ColumnaPareja;
	}

	int NPC::getTiempoMuerte()
	{
		return tiempoMuerte;
	}

	//setters
	void NPC::setMiedo(int miedo)
	{
		this->miedo = miedo;
	}

	void NPC::setAfectacionMiedo(int afectacionMiedo)
	{
		this->afectacionMiedo = afectacionMiedo;
	}

	void NPC::setira(int ira)
	{
		this->ira = ira;
	}

	void NPC::setafectacionIra(int afectacionIra)
	{
		this->afectacionIra = afectacionIra;
	}

	void NPC::settristeza(int tristeza)
	{
		this->tristeza = tristeza;
	}

	void NPC::setafectacionTristeza(int afectacionTristreza)
	{
		this->afectacionTristeza = afectacionTristreza;
	}

	void NPC::setalegria(int alegria)
	{
		this->alegria = alegria;
	}

	void NPC::setafectacionAlegria(int afectacionAlegria)
	{
		this->afectacionAlegria = afectacionAlegria;
	}

	void NPC::setdisgusto(int disgusto)
	{
		this->disgusto = disgusto;
	}

	void NPC::setafectacionDisgusto(int afectacionDisgusto)
	{
		this->afectacionDisgusto = afectacionDisgusto;
	}

	void NPC::setContadorGeneral(int contadorGeneral)
	{
		this->contadorGeneral = contadorGeneral;
	}

	void NPC::setContadorProcreacion(int contadorProcreacion)
	{
		this->contadorProcreacion = contadorProcreacion;
	}

	void NPC::setFilaPareja(int posicion)
	{
		this->FilaPareja = posicion;
	}

	void NPC::setColumnaPareja(int posicion)
	{
		this->ColumnaPareja = posicion;
	}

	void NPC::setTiempoMuerte(int tiempo)
	{
		this->tiempoMuerte = tiempo;
	}

private:
	
	int miedo;
	int afectacionMiedo;
	int ira;
	int afectacionIra;
	int tristeza;
	int afectacionTristeza;
	int alegria;
	int afectacionAlegria;
	int disgusto;
	int afectacionDisgusto;
	int contadorGeneral; //igual al tiempo de vida.
	int contadorProcreacion;
	int FilaPareja;
	int ColumnaPareja;
	int tiempoMuerte;
	int dead;
	
};

