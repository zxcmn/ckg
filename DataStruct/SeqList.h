#pragma once

#include<stdio.h>
#include<stdlib.h>
typedef int SLDataType;
typedef struct SeqList
{
	SLDataType* pa;//定义一个指针指向动态开辟的空间
	int size;
	int capacity;
}SL;

//接口函数--命名风格是跟着STL
void SeqListInit(SL* ps);//结构体初始化
void SeqListPushBack(SL* ps, SLDataType x);//结构体尾添
void SeqListPopBack(SL* ps);//结构体尾删
void SeqListPushFront(SL* Ps, SLDataType x);
void SeqLIstPopFront(SL* ps);
void SeqListPrint(SL* ps);
void SeqListDestory(SL* ps);