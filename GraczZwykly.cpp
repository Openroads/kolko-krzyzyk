#include "GraczZwykly.h"



GraczZwykly::GraczZwykly(string n):Gracz(n)
{
}

int GraczZwykly::podajX(){
	int x;
	cout << "Podaj wspolrzedne do postawienia X" << endl;
	cin >> x;
	return  x;
}
int GraczZwykly::podajY() {
	int y;
	cout << "Podaj wspolrzedne do postawienia Y" << endl;
	cin >> y;
	return  y;
}


GraczZwykly::~GraczZwykly()
{
}
