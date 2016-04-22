#pragma once
#include "Gracz.h"

class Plansza
{
	int wymiar;
	char **plansza;
	

public:
	Plansza(int wymiar=3);
	int getWymiar();
	void ustaw(int x,int y,char c);
	bool sprawdz(int x, int y, char wstawiony);
	bool czyPusty(int x, int y);
	void rysujPlansze();
	bool czyJest(int x, int y,char c);
	~Plansza();
};

