#pragma once
#include "Gracz.h"
class GraczKomputer :public Gracz
{
	const int wymiar;

public:
	GraczKomputer(int w,string n = "Komp");
	int podajX();
	int podajY();
	~GraczKomputer();
};

