#include "Plansza.h"



Plansza::Plansza(int wymiar):wymiar(wymiar)
{
	plansza = new char*[wymiar];
	for (int i = 0; i < wymiar; i++)
	{
		plansza[i] = new char[wymiar];
	}
	for (int i = 0; i < wymiar; i++)
	{
		for (int j = 0; j < wymiar; j++)
		{
			plansza[i][j] = '-';
		}
	}
}

int Plansza::getWymiar(){
	return wymiar;
}

void Plansza::ustaw(int x, int y,char c)
{
	plansza[x - 1][y - 1] = c;
}

void Plansza::rysujPlansze()
{
	cout << "Plansza: "<<endl;
	cout << " ";
	for (int i = 1; i <= wymiar; i++)
		cout << i << " ";
	cout << endl;
	for (int i = 0; i < wymiar; i++)
	{
		cout << i + 1;
		for (int j = 0; j < wymiar; j++)
		{
			cout << plansza[i][j] << " ";
		}
		cout << endl;
	}
}

bool Plansza::sprawdz(int x, int y, char wstawiony)
{
	bool flaga = false;
	int licznik = 0;
	for (int i = 0; i < wymiar; i++)
	{
		if (plansza[x][i] == wstawiony) {
			licznik++;
		}
	}
	if (licznik == wymiar) {
		return true;
	}
	licznik = 0;
	for (int i = 0; i < wymiar; i++)
	{
		if (plansza[i][y] == wstawiony)
			licznik++;
	}
	if (licznik == wymiar)
		return true;
	licznik = 0;
	for (int i = 0; i < wymiar; i++)
	{
		if (plansza[i][i] == wstawiony)
			licznik++;
	}
	if (licznik == wymiar)
		return true;
	licznik = 0;
	int j = 0;
	for (int i = wymiar - 1; i >= 0; i--, j++)
	{
		if (plansza[i][j] == wstawiony)
			licznik++;
	}
	if (licznik == wymiar)
	{
		return true;
	}

	return false;
}

bool Plansza::czyPusty(int x, int y)
{
	if (plansza[x - 1][y - 1] == '-')
		return true;
	else return false;
}
bool Plansza::czyJest(int x,int y,char c)
{
	if (plansza[x - 1][y - 1] == c)
		return true;

	return false;
}



Plansza::~Plansza()
{
	for (int i = 0; i < wymiar; i++)
	{
		delete[] plansza[i];
	}
	delete[] plansza;
}
