#define _CRT_SECURE_NO_WARNINGS 1 

#include"game.h"


void menu() {
	printf("								\n");
	printf("PlayGame��1�� NoPlayGame��0��");
	printf("								\n");
}

//*���  #Al  Vƽ��  W����
void t_get(char store[HAN][LIE], int han, int lie) {
	ini(store, han, lie);//c��ʼ��
	PrintBoard(store, han, lie);//��ӡ����
	int s = 1;
	char vo;
	do {
		srand((unsigned int)time(NULL));//�����ߵ������
		//�������
		PlayerGame(store, han, lie);
		PrintBoard(store, han, lie);
		vo=WinOrLose(store, han, lie);//����һ��ֵ�ж�
		//��������
		if (vo != 'W') {//��������������ӡ���
			break;
		}
		AlPlayer(store, han, lie);
		PrintBoard(store, han, lie);
		vo=WinOrLose(store, han, lie);//�ж�
		if (vo != 'W') {
			break;
		}
	} while (s);
	switch (vo) {
	case '*':
		printf("��һ�ʤ\n");
		break;
	case '#':
		printf("���Ի�ʤ\n");
		break;
	case 'V':
		printf("ƽ��\n");
		break;
	}
}


int main() {
	int input = 0;
	char store[HAN][LIE] = { 0 };
	do {

		menu();
		printf("���������ѡ��");
		scanf("%d", &input);
		switch (input) {
		case 1:
			t_get(store, HAN, LIE);
			printf("������Ϸ����\n");
			break;
		case 0:
			break;
		default:
			printf("������1��0");
		}
	} while (input);
	printf("��л���飡�����Ǻ�����\n");
	return 0;
}

