#include <iostream>
#include "Marine.h"

Marine::Marine()
{
	power = 2;
}

void Marine::attack(){
	printf("공격력 : %d만큼 공격합니다.\n", power);
}

void Marine::doPowerStatus() {
	printf("마린의 공격력은 %d 입니다\n", power);
}
