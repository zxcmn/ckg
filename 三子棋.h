#pragma once

#include<stdio.h>
#include<time.h>
#include<stdlib.h>

#define HAN 3
#define LIE 3

void PrintBoard(char store[HAN][LIE], int han, int lie1);
void ini(char store[HAN][LIE], int han, int lie);
void PlayerGame(char store[HAN][LIE], int han, int lie);
void AlPlayer(char store[HAN][LIE], int han, int lie);
char WinOrLose(char sotre[HAN][LIE], int han, int lie);
int PIN(char store[HAN][LIE], int han, int lie);