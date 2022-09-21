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




BL* LinstInit();//初始化
void Print(BL* head);//打印
void LastInsert(BL* head, DataType x);//尾插
void LastDelete(BL* head);//尾删
void HeadInsert(BL* head, DataType x);//头插
void HeadDelete(BL* head);//头删
void PickInsert(BL* head, BL* pos, DataType x);//在x前插入
void PickDelete(BL* head, BL* pos);
BL* pos(BL* head, DataType x);//找位置
