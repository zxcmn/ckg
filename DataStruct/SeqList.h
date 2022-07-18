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
void SeqListPushFront(SL* Ps, SLDataType x);//移动头插
void SeqListPopFront(SL* ps);//移动头删
void SeqListPushFront2(SL* Ps, SLDataType x);//三步头插
void SeqListPopFront3(SL* ps);//三步头删
void SeqListPrint(SL* ps);//打印
void SeqListDestory(SL* ps);//释放空间
void SeqListCheckCapacity(SL* ps);//check检查，使用多次的扩容功能，封装成函数
int SeqListFind(SL* ps,SLDataType x);//查找
void SeqListInsert(SL* ps,size_t pos,SLDataType x);
void SeqListDelete(SL* ps,size_t pos);