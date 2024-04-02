#include <iostream>
#include "Firebat.h"

Firebat::Firebat()
{
	power = 5;
}

void Firebat::attack() {
	printf("공격력 : %d만큼 공격합니다.\n", power);
}

void Firebat::doPowerStatus() {
	printf("파이어뱃의 공격력은 %d 입니다\n", power);
}

void strongAttack(int n)
{
	printf("%d의 공격력으로 강하게 공격합니다.\n", power + n);
}
