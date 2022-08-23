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

void SeqListPrint(SL* phead);//��ӡ
void SeqListPushBack(SL** phead, SLDataType x);//�ײ�
void SeqListPushFront(SL** phead,SLDataType x);//��ɾ
SL* SingleLinkNode(SLDataType x);//����
void SeqListPopDelete(SL** phead);//βɾ
void SeqListHeadDelete(SL** phead);//��ɾ
SL* SeqListFind(SL* phead,SLDataType x);//����
void SeqListInsert(SL** phead,SL* x,SLDataType y);//�ڵ�ǰ�����
void SeqListAfterInsert(SL* pos, SLDataType y);//�ڵ�����
void SeqListNodeDelete(SL* pos,SL** phead);//ѡ��ɾ���ڵ�
void SeqListAfterDelete(SL* pos);//ɾ���ڵ�ĺ�һ��
void SeqListDestroy(SL* phead);//�ݻ�����