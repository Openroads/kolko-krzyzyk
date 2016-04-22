#include "Gracz.h"


Gracz::Gracz(string n): name(n)
{
}

string Gracz::podajImie()
{
	return string();
}

void Gracz::ustawZnak()
{
	do {
		cout << "Czym chcesz grac ? wpisz \"X\" lub \"O\"";
		cin >> znak;
		znak = toupper(znak);
	} while (znak!='X' && znak !='O');
}



Gracz::~Gracz()
{
}
