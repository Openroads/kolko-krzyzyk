#include "Mecz.h"
#include <cstdlib>
#include <ctime>



Mecz::Mecz(string n, Plansza p, Gracz *nazwa1, Gracz *nazwa2):nazwa(n), plansza(p)
{
	ruchy = p.getWymiar() * 2;
}

void Mecz::rozpocznijGre() {
	int x, y;
	for (int r = 0; r < ruchy; r++) {
		plansza.rysujPlansze();
		do {
			x = g1->podajX();
			y = g1->podajY();

		} while (x > plansza.getWymiar() || y > plansza.getWymiar() || !plansza.czyPusty(x, y));

		plansza.ustaw(x, y, g1->znakGracza());

		if (plansza.sprawdz(x - 1, y - 1, g1->znakGracza()))
		{
			cout << "Wygral !" << endl;
			cout << g1->podajImie();
			break;
		}

		do {
			x = g1->podajX();
			y = g1->podajY();

		} while (x > plansza.getWymiar() || y > plansza.getWymiar() || !plansza.czyPusty(x, y));

		if (plansza.sprawdz(x - 1, y - 1, g2->znakGracza()))
		{
			cout << "Wygral !" << endl;
			cout << g2->podajImie();
			break;
		}
	}
	cout << "Koniec gry" << endl;
	if (plansza.sprawdz(x - 1, y - 1, g1->znakGracza()))
	{
		cout << "Wygral !" << endl;
		cout << g1->podajImie();
	}else if (plansza.sprawdz(x - 1, y - 1, g2->znakGracza()))
	{
		cout << "Wygral !" << endl;
		cout << g2->podajImie();
		
	}
	else { cout << "Remis!"; }

	plansza.rysujPlansze();
}

Mecz::~Mecz()
{
}
