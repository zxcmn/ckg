#pragma once
#include<stdio.h>
#include<stdlib.h>

typedef int SLDataType;


typedef struct SeqListSingleLink
{
	SLDataType data;
	struct SeqListSingleLink* next;
}SL;

void SeqListPint(SL* phead);
void SeqListPushBack(SL** phead, SLDataType x);
