#define _CRT_SECURE_NO_WARNINGS 1    

#include<stdio.h>

int main() {
	float i = 3.14159;
	float r;
	printf("请输入半径：\n");
	scanf("%f", &r);
	float z = i* (2 * r);
	float k = i * r * r;
	printf("周长=%f\n", z);
	printf("面积=%f", k);

	return 0;
}


