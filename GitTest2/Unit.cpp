#include <iostream>
#include "Unit.h"

Unit::Unit()
{
	hp = 10;
}
void Unit::doWalk(const char * str) {
	printf("%s�� �Ƚ��ϴ�.\n", str);
}

void Unit::doRun(const char* str) {
	printf("%s�� �Ƚ��ϴ�.\n", str);
}

void Unit::doHpStatus() {
	printf("������ HP�� %d �Դϴ�\n", hp);
}