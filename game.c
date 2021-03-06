
#define _CRT_SECURE_NO_WARNINGS 1    

#include"game.h"

void FinMine(char store1[ROWS][COLS], char store2[ROWS][COLS], int row, int col) {
	int x = 0;
	int y = 0;
	while (1) {
		printf("请输入【横坐标】和【纵坐标】：");
		scanf("%d%d", &x, &y);
		if (x >= 1 && x <= row && y >= 1 && y <= col) {//坐标合法
			if (store2[x][y] == '1') {//是雷
				printf("很遗憾，你被炸死了！\n");
				PrintBoard(store2, ROWS, COLS);//打印雷
				break;
			}
			else {//不是雷
				//int count = Get_Mine_Count(store2, x, y);//返回雷数的提示
				//store1[x][y] = count + '0';//一个数值加上字符零，就变成了字符
				space(store1, store2, x, y);//空白展开递归
				PrintBoard(store1, ROW, COL);//打印提示    
				PrintBoard(store2, ROW, COL);//打印雷

			}
		}
		else {
			printf("坐标非法，请重新输入：\n");
		}
	
	}
}


void space(char store1[ROWS][COLS], char store2[ROWS][COLS], int x, int y) {//递归函数展开一片//使用ROWS和COLS，因为1，1坐标等需要外面还有一行
	
	int i;
	if (Get_Mine_Count(store2, x, y) == 0) {
		store1[x][y] = ' ';
		
		int k;
		for (i = x - 1; i <= x + 1; i++) {

			for (k = y - 1; k <= y + 1; k++) {
				if (i > 0 && i <= ROW && k > 0 && k <= COL && store1[i][k] == '#') {
					space(store1, store2, i, k);
				}
			}
		}
	}
	else {

		store1[x][y] = Get_Mine_Count(store2, x, y) + '0';
	}
}






int Get_Mine_Count(char store2[ROWS][COLS], int x, int y) {//探测雷的数量【写法一
	int win = 0;
	int i;
	for (i = x - 1; i <= x + 1; i++) {
		int k;
		for (k = y - 1; k <= y + 1; k++) {
			if (store2[i][k] == '1') {
				win++;
			}
		}
	}
	return win;
}


//int Get_Mine_Count(char store2[ROWS][COLS], int x, int y) {//探测雷的数量【写法二
//	return store2[x - 1][y] +
//		store2[x - 1][y - 1] +
//		store2[x][y - 1] +
//		store2[x + 1][y - 1] +
//		store2[x + 1][y] +
//		store2[x + 1][y + 1] +
//		store2[x][y + 1] +
//		store2[x - 1][y + 1] - 8 * '0';//字符零的编码值是48.1的编码值是49；相减后是一；
//}


void SetMine(char board[ROWS][COLS]) {//布置雷
	int count = CONST;
	while (count) {
		int x = rand() % ROW + 1;
		int y = rand() % COL + 1;
		if (board[x][y] == '0') {
			board[x][y] = '1';
			count--;
		}
	}
}




void PrintBoard(char board[ROWS][COLS], int row, int col) {//打印提示
	int i, k;
	printf("---------扫雷游戏--------\n");
	for (i = 0; i <= ROW; i++) {
		printf("%d ", i);
		if (i == ROW) {
			printf("\n");
		}
	}
	for (i = 1; i <= ROW; i++) {
		printf("%d ", i);
		for (k = 1; k <= COL; k++) {
			printf("%c ", board[i][k]);
		}
		printf("\n");
	}
	printf("---------扫雷游戏--------\n");
}





void InitStore(char board[ROWS][COLS], int rows, int cols, char get) {//初始化
	int i, k;
	for (i = 0; i < rows; i++) {
		for (k = 0; k < cols; k++) {
			board[i][k] = get;
		}
	}
}