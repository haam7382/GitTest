#pragma once
#include "Unit.h"

class Marine : public Unit {
private :
	int power;
public :
	Marine();
	void attack();
	void doPowerStatus();
	void message();
};