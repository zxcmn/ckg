#pragma once
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>

typedef int SLDataType;


typedef struct SeqListSingleLink
{
	SLDataType data;
	struct SeqListSingleLink* next;
}SL;

void SeqListPrint(SL* phead);//打印
void SeqListPushBack(SL** phead, SLDataType x);//首插
void SeqListPushFront(SL** phead,SLDataType x);//首删
SL* SingleLinkNode(SLDataType x);//开辟
void SeqListPopDelete(SL** phead);//尾删
void SeqListHeadDelete(SL** phead);//首删
SL* SeqListFind(SL* phead,SLDataType x);//查找
void SeqListInsert(SL** phead,SL* x,SLDataType y);//节点前面插入
void SeqListAfterInsert(SL* pos, SLDataType y);//节点后插入
void SeqListNodeDelete(SL* pos,SL** phead);//选择删除节点
void SeqListAfterDelete(SL* pos);//删除节点的后一个
void SeqListDestroy(SL* phead);//摧毁链表