#define _CRT_SECURE_NO_WARNINGS 1    

#include"game.h"



char WinOrLose(char store[HAN][LIE], int han, int lie) {
	int i;
	//������
	for (i = 0; i < han; i++) {
		if (store[i][0] == store[i][1] && store[i][1] == store[i][2]&&store[i][1] != ' ') {
			return store[i][0];
		}
	}
	for (i = 0; i < lie; i++) {
		if (store[0][i] == store[1][i] && store[1][i] == store[2][i]&&store[1][i] != ' ') {
			return store[0][i];
		}
	}
	//б����
	if (store[0][0] == store[1][1] && store[1][1] == store[2][2]&& store[1][1] != ' ') {
		return store[1][1];
	}
	if (store[0][2] == store[1][1] && store[1][1] == store[2][0] && store[1][1] != ' ') {
		return store[1][1];
	}
	//ƽ��
	if (1 == PIN(store, han, lie)) {
		return 'V';
	}
	return 'W';
}


int PIN(char store[HAN][LIE], int han, int lie) {
	int i, k;
	for (i = 0; i < han; i++) {
		for (k = 0; k < lie; k++) {
			if (store[i][k] == ' ') {
				return 0;
			}
		}
	}
	return 1;
}




//���
void PlayerGame(char store[HAN][LIE], int han, int lie) {
	int x;
	int y;
	while (1) {
		printf("�����롾�����꡿��");
		scanf("%d", &x);
		printf("\n");
		printf("�����롾�����꡿��");
		scanf("%d", &y);
		printf("\n");
		if (x <= han  && y <= lie && store[x - 1][y - 1] == ' ') {
			store[x - 1][y - 1] = '*';
			break;
		}
		else if (store[x - 1][y - 1] == '*' || store[x - 1][y - 1] == '#') {
			printf("��λ���Ѿ�����\n");
			printf("����������\n");
		}
		else {
			printf("������Χ\n");
		}
	}
}




	//Al���
void AlPlayer(char store[HAN][LIE], int han, int lie) {
	printf("Al�����ߣ�\n");
	int x, y;
	while (1) {
		x = rand() % 3;
		y = rand() % 3;
		if (store[x][y] == ' ') {
			store[x][y] = '#';
			break;
		}
	}
}




//��ʼ��
void ini(char store[HAN][LIE], int han, int lie) {
	int i;
	for (i = 0; i < han; i++) {
		int k;
		for (k = 0; k < lie; k++) {
			store[i][k] = ' ';
		}
	}

}
//��ӡ����
void PrintBoard(char store[HAN][LIE], int han, int lie) {
	int i;
	for (i = 0; i < han; i++) {
		int k;
		for (k = 0; k < lie; k++) {
			if (k < lie - 1) {
				printf(" %c |", store[i][k]);
			}
			else
				printf(" %c \n", store[i][k]);
		}
		if (i < han - 1) {
			for (k = 0; k < lie; k++) {
				if (k < lie - 1) {
				printf("---|");
				}
				else
					printf("---\n");
			}
		}
	}
}


