#include <iostream>
#include "Firebat.h"

Firebat::Firebat()
{
	power = 5;
}

void Firebat::attack() {
	printf("���ݷ� : %d��ŭ �����մϴ�.\n", power);
}

void Firebat::doPowerStatus() {
	printf("���̾���� ���ݷ��� %d �Դϴ�\n", power);
}