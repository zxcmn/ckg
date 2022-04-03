#define _CRT_SECURE_NO_WARNINGS 1    



#include"game.h"



void t_get(char store[ROWS][COLS]) {
	char store1[ROWS][COLS] = { 0 };//提示
	char store2[ROWS][COLS] = { 0 };//雷

	InitStore(store1, ROWS, COLS, '#');//初始化提示盘
	InitStore(store2, ROWS, COLS, '0');//初始化雷盘

	SetMine(store2);//布置雷
	PrintBoard(store1, ROW, COL);//打印提示    
	PrintBoard(store2, ROW, COL);//打印雷

	FinMine(store1, store2, ROW, COL);//扫雷实现
}


void menu() {
	printf("											\n");
	printf("PlayGame【1】     NoPlayGame【0】\n");
	printf("											\n");
}


int main() {                
	srand((unsigned int)time(NULL));
	printf("欢迎来到扫雷\n");
	int input = 0;
	char store[ROWS][COLS] = { 0 };
	do {
		menu();
		printf("请输入你的选择：\n");
		scanf("%d", &input);
		switch (input) {
		case 1:
			printf("开始游戏：\n");
			t_get(store);
			printf("本轮游戏结束；\n");
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("输入错误，请重新输入：\n");
			break;
		}
	} while (input);
	return 0;
}
