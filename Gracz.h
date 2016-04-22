#pragma once
#include <iostream>
#include <string>
using namespace std;
class Gracz
{
	string name;
	char znak;

public:
	Gracz(string name);

	string podajImie();
	void ustawZnak();
	char znakGracza();
    virtual int podajX()=0;
	virtual int podajY()=0;
	
	~Gracz();
};

