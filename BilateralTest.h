#pragma once

#include<stdio.h>
#include<stdlib.h>
#include<assert.h>

typedef int DataType;
typedef struct BilateralListNode
{
	DataType x;
	struct BilateralListNode* prev;
	struct BilateralListNode* next;

}BL;




BL* LinstInit();//��ʼ��
void Print(BL* head);//��ӡ
void LastInsert(BL* head, DataType x);//β��
void LastDelete(BL* head);//βɾ
void HeadInsert(BL* head, DataType x);//ͷ��
void HeadDelete(BL* head);//ͷɾ
void PickInsert(BL* head, BL* pos, DataType x);//��xǰ����
void PickDelete(BL* head, BL* pos);
BL* pos(BL* head, DataType x);//��λ��
