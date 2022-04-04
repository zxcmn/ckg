#define _CRT_SECURE_NO_WARNINGS 1    

#include"game.h"



char WinOrLose(char store[HAN][LIE], int han, int lie) {
	int i;
	//横三行
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
	//斜三列
	if (store[0][0] == store[1][1] && store[1][1] == store[2][2]&& store[1][1] != ' ') {
		return store[1][1];
	}
	if (store[0][2] == store[1][1] && store[1][1] == store[2][0] && store[1][1] != ' ') {
		return store[1][1];
	}
	//平局
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




//玩家
void PlayerGame(char store[HAN][LIE], int han, int lie) {
	int x;
	int y;
	while (1) {
		printf("请输入【横坐标】：");
		scanf("%d", &x);
		printf("\n");
		printf("请输入【纵坐标】：");
		scanf("%d", &y);
		printf("\n");
		if (x <= han  && y <= lie && store[x - 1][y - 1] == ' ') {
			store[x - 1][y - 1] = '*';
			break;
		}
		else if (store[x - 1][y - 1] == '*' || store[x - 1][y - 1] == '#') {
			printf("该位置已经下了\n");
			printf("请重新输入\n");
		}
		else {
			printf("超出范围\n");
		}
	}
}




	//Al玩家
void AlPlayer(char store[HAN][LIE], int han, int lie) {
	printf("Al电脑走：\n");
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




//初始化
void ini(char store[HAN][LIE], int han, int lie) {
	int i;
	for (i = 0; i < han; i++) {
		int k;
		for (k = 0; k < lie; k++) {
			store[i][k] = ' ';
		}
	}

}
//打印键盘
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


