#include <iostream>
#include "Marine.h"
#include "Firebat.h"

int main() {
	Marine* mar = new Marine;
	
	mar->doHpStatus();
	mar->doPowerStatus();
	mar->attack();
	
	Firebat* fir = new Firebat;
	fir->doHpStatus();
	fir->doPowerStatus();
	fir->attack();

	return 0;
}