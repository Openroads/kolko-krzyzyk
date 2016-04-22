#pragma once
#include "Gracz.h"

class GraczZwykly :public Gracz
{
public:
	GraczZwykly(string n );
	int podajX();
	int podajY();
	~GraczZwykly();
};

