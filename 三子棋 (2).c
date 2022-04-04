#define _CRT_SECURE_NO_WARNINGS 1 

#include"game.h"


void menu() {
	printf("								\n");
	printf("PlayGame【1】 NoPlayGame【0】");
	printf("								\n");
}

//*玩家  #Al  V平局  W继续
void t_get(char store[HAN][LIE], int han, int lie) {
	ini(store, han, lie);//c初始化
	PrintBoard(store, han, lie);//打印棋盘
	int s = 1;
	char vo;
	do {
		srand((unsigned int)time(NULL));//电脑走的随机数
		//玩家下棋
		PlayerGame(store, han, lie);
		PrintBoard(store, han, lie);
		vo=WinOrLose(store, han, lie);//返回一个值判断
		//电脑下棋
		if (vo != 'W') {//不继续就跳出打印结果
			break;
		}
		AlPlayer(store, han, lie);
		PrintBoard(store, han, lie);
		vo=WinOrLose(store, han, lie);//判断
		if (vo != 'W') {
			break;
		}
	} while (s);
	switch (vo) {
	case '*':
		printf("玩家获胜\n");
		break;
	case '#':
		printf("电脑获胜\n");
		break;
	case 'V':
		printf("平局\n");
		break;
	}
}


int main() {
	int input = 0;
	char store[HAN][LIE] = { 0 };
	do {

		menu();
		printf("请输入你的选择：");
		scanf("%d", &input);
		switch (input) {
		case 1:
			t_get(store, HAN, LIE);
			printf("本轮游戏结束\n");
			break;
		case 0:
			break;
		default:
			printf("请输入1或0");
		}
	} while (input);
	printf("感谢体验！请五星好评！\n");
	return 0;
}

