#include <iostream>
#include "Marine.h"

Marine::Marine()
{
	power = 2;
}

void Marine::attack(){
	printf("���ݷ� : %d��ŭ �����մϴ�.\n", power);
}

void Marine::doPowerStatus() {
	printf("������ ���ݷ��� %d �Դϴ�\n", power);
}
