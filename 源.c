#define _CRT_SECURE_NO_WARNINGS 1    

#include<stdio.h>

int main() {
	float i = 3.14159;
	float r;
	printf("������뾶��\n");
	scanf("%f", &r);
	float z = i* (2 * r);
	float k = i * r * r;
	printf("�ܳ�=%f\n", z);
	printf("���=%f", k);

	return 0;
}


