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
void SeqListPushFront(SL* Ps, SLDataType x);//�ƶ�ͷ��
void SeqListPopFront(SL* ps);//�ƶ�ͷɾ
void SeqListPushFront2(SL* Ps, SLDataType x);//����ͷ��
void SeqListPopFront3(SL* ps);//����ͷɾ
void SeqListPrint(SL* ps);//��ӡ
void SeqListDestory(SL* ps);//�ͷſռ�
void SeqListCheckCapacity(SL* ps);//check��飬ʹ�ö�ε����ݹ��ܣ���װ�ɺ���
int SeqListFind(SL* ps,SLDataType x);//����
void SeqListInsert(SL* ps,size_t pos,SLDataType x);
void SeqListDelete(SL* ps,size_t pos);