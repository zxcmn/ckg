#define _CRT_SECURE_NO_WARNINGS 1    



#include"game.h"



void t_get(char store[ROWS][COLS]) {
	char store1[ROWS][COLS] = { 0 };//��ʾ
	char store2[ROWS][COLS] = { 0 };//��

	InitStore(store1, ROWS, COLS, '#');//��ʼ����ʾ��
	InitStore(store2, ROWS, COLS, '0');//��ʼ������

	SetMine(store2);//������
	PrintBoard(store1, ROW, COL);//��ӡ��ʾ    
	PrintBoard(store2, ROW, COL);//��ӡ��

	FinMine(store1, store2, ROW, COL);//ɨ��ʵ��
}


void menu() {
	printf("											\n");
	printf("PlayGame��1��     NoPlayGame��0��\n");
	printf("											\n");
}


int main() {                
	srand((unsigned int)time(NULL));
	printf("��ӭ����ɨ��\n");
	int input = 0;
	char store[ROWS][COLS] = { 0 };
	do {
		menu();
		printf("���������ѡ��\n");
		scanf("%d", &input);
		switch (input) {
		case 1:
			printf("��ʼ��Ϸ��\n");
			t_get(store);
			printf("������Ϸ������\n");
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("����������������룺\n");
			break;
		}
	} while (input);
	return 0;
}
