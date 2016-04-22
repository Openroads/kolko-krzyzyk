#include "GraczKomputer.h"
#include <ctime>
#include <cstdlib>


GraczKomputer::GraczKomputer(int w,string n ):wymiar(w),Gracz(n)
{
}
int GraczKomputer::podajX() {
	srand(time(0));
	int x;
		x = rand() % wymiar;
		
	return x;
}

int GraczKomputer::podajY() {
	srand(time(NULL));
	int y;
	y = rand() % wymiar;

	return y;
}
GraczKomputer::~GraczKomputer()
{
}
