#pragma once

#include<stdio.h>
#include<time.h>
#include<stdlib.h>

#define  ROW 9
#define  COL 9
#define  ROWS ROW+2
#define  COLS COL+2
#define  CONST 10//À×Êý

void FinMine(char store1[ROWS][COLS], char store2[ROWS][COLS], int row, int col);
void InitStore(char board[ROWS][COLS], int rows, int cols, char get);
void PrintBoard(char board[ROWS][COLS], int row, int col);
int Get_Mine_Count(char store2[ROWS][COLS], int x, int y);
void InitStore(char board[ROWS][COLS], int rows, int cols, char get);
void SetMine( char store2[ROWS][COLS]);
void space(char store1[ROWS][COLS],char store2[ROWS][COLS], int x, int y);