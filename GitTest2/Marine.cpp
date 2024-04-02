#include <iostream>
#include "Marine.h"

Marine::Marine()
{
	power = 5;
}

void Marine::attack(){
	printf("공격!, %d만큼 공격합니다.\n", power);
}

void Marine::doPowerStatus() {
	printf("마린의 공격력은 %d 입니다\n", power);
}

void Marine::message() {
	printf("마린은 힘듭니다..\n");
}
