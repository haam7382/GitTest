#include <iostream>
#include "Marine.h"

Marine::Marine()
{
	power = 5;
}

void Marine::attack(){
	printf("����!, %d��ŭ �����մϴ�.\n", power);
}

void Marine::doPowerStatus() {
	printf("������ ���ݷ��� %d �Դϴ�\n", power);
}

void Marine::message() {
	printf("������ ����ϴ�..\n");
}
