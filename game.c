
#define _CRT_SECURE_NO_WARNINGS 1    

#include"game.h"

void FinMine(char store1[ROWS][COLS], char store2[ROWS][COLS], int row, int col) {
	int x = 0;
	int y = 0;
	while (1) {
		printf("�����롾�����꡿�͡������꡿��");
		scanf("%d%d", &x, &y);
		if (x >= 1 && x <= row && y >= 1 && y <= col) {//����Ϸ�
			if (store2[x][y] == '1') {//����
				printf("���ź����㱻ը���ˣ�\n");
				PrintBoard(store2, ROWS, COLS);//��ӡ��
				break;
			}
			else {//������
				//int count = Get_Mine_Count(store2, x, y);//������������ʾ
				//store1[x][y] = count + '0';//һ����ֵ�����ַ��㣬�ͱ�����ַ�
				space(store1, store2, x, y);//�հ�չ���ݹ�
				PrintBoard(store1, ROW, COL);//��ӡ��ʾ    
				PrintBoard(store2, ROW, COL);//��ӡ��

			}
		}
		else {
			printf("����Ƿ������������룺\n");
		}
	
	}
}


void space(char store1[ROWS][COLS], char store2[ROWS][COLS], int x, int y) {//�ݹ麯��չ��һƬ//ʹ��ROWS��COLS����Ϊ1��1�������Ҫ���滹��һ��
	
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






int Get_Mine_Count(char store2[ROWS][COLS], int x, int y) {//̽���׵�������д��һ
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


//int Get_Mine_Count(char store2[ROWS][COLS], int x, int y) {//̽���׵�������д����
//	return store2[x - 1][y] +
//		store2[x - 1][y - 1] +
//		store2[x][y - 1] +
//		store2[x + 1][y - 1] +
//		store2[x + 1][y] +
//		store2[x + 1][y + 1] +
//		store2[x][y + 1] +
//		store2[x - 1][y + 1] - 8 * '0';//�ַ���ı���ֵ��48.1�ı���ֵ��49���������һ��
//}


void SetMine(char board[ROWS][COLS]) {//������
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




void PrintBoard(char board[ROWS][COLS], int row, int col) {//��ӡ��ʾ
	int i, k;
	printf("---------ɨ����Ϸ--------\n");
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
	printf("---------ɨ����Ϸ--------\n");
}





void InitStore(char board[ROWS][COLS], int rows, int cols, char get) {//��ʼ��
	int i, k;
	for (i = 0; i < rows; i++) {
		for (k = 0; k < cols; k++) {
			board[i][k] = get;
		}
	}
}