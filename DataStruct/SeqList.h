#pragma once

#include<stdio.h>
#include<stdlib.h>
typedef int SLDataType;
typedef struct SeqList
{
	SLDataType* pa;//����һ��ָ��ָ��̬���ٵĿռ�
	int size;
	int capacity;
}SL;

//�ӿں���--��������Ǹ���STL
void SeqListInit(SL* ps);//�ṹ���ʼ��
void SeqListPushBack(SL* ps, SLDataType x);//�ṹ��β��
void SeqListPopBack(SL* ps);//�ṹ��βɾ
void SeqListPushFront(SL* Ps, SLDataType x);//ͷ��
void SeqListPushFront2(SL* Ps, SLDataType x);//����ͷ��
void SeqLIstPopFront(SL* ps);//ͷɾ
void SeqListPrint(SL* ps);
void SeqListDestory(SL* ps);
