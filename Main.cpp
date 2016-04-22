#include <iostream>
#include "Gracz.h"
#include  "Plansza.h"
#include "Mecz.h"

using namespace std;

int main() 
{
	int wymiar,opcja=0; string imieGracza;
	cout << "Witaj w grze kolko krzyzyk"<<endl;
	cout << "Wybierz opcje gry: "	<<endl;
	cout << "1. Gra z komputerem"	<< endl;
	cout << "2. Gra dwuosobowa"		<< endl;
	if (opcja == 1)
	{
		do {
			cout << "Podaj imie:" << endl;
			cin >> imieGracza;
		} while (imieGracza != "");
		GraczZwykly gz(imieGracza);
		cout << "Podaj wymiar w jakim ma byc plansza" << endl;
		cin >> wymiar;
		Plansza p1(wymiar);
		cout << "Podaj nazwe komputerowego gracza" << endl;
		cin >> imieGracza;
		GraczKomputer gk(p1.getWymiar(), imieGracza);
		cout << "Podaj nazwe meczu:" << endl;
		cin >> imieGracza;
		Mecz mecz(imieGracza,p1,&gz,&gk);
		cout << "Rozpoczynamy gre" << endl;



	}
	else if(opcja ==2){}

	else {


		cout << "Zadna z opcji nie pasuje do menu.";
	}
	
	
	/*GrGracz gracz1("Mietek");
	Gracz gracz2("Player2");
	Plansza plansza(3);
	m1.rozpocznijGre();
	*/
	getchar();
	return 0;
}