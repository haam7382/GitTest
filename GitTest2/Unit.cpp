#include <iostream>
#include "Unit.h"

Unit::Unit()
{
	hp = 10;
}
void Unit::doWalk(const char * str) {
	printf("%s가 걷습니다.\n", str);
}

void Unit::doRun(const char* str) {
	printf("%s가 걷습니다.\n", str);
}

void Unit::doHpStatus() {
	printf("유닛의 HP는 %d 입니다\n", hp);
}