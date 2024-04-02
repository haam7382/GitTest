#pragma once

class Unit {
private :
	int hp;
public :
	Unit();
	void doWalk(const char * str);
	void doRun(const char* str);
	void doHpStatus();
};