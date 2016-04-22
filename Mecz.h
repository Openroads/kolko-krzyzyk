#pragma once
#include "Gracz.h"
#include "GraczZwykly.h"
#include "GraczKomputer.h"
#include "Plansza.h"

class Mecz
{
	string nazwa;
	int ruchy;
	Plansza plansza;
	//GraczKomputer komp;
	Gracz *g1,*g2;
public:
	Mecz(string n,Plansza p,Gracz *nazwa1, Gracz *nazwa2);
	void rozpocznijGre();
	~Mecz();
};

