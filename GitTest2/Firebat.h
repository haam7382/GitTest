#pragma once
#include "Unit.h"

class Firebat : public Unit
{
private:
	int power;
public:
	Firebat();
	void attack();
	void doPowerStatus();
};