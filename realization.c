#define _CRT_SECURE_NO_WARNINGS 1    

#include"BilateralTest.h"


//初始化
BL* LinstInit()
{
	BL* temp = (BL*)malloc(sizeof(BL));
	temp->next = temp;
	temp->prev = temp;
	return temp;
}


//打印
void Print(BL* head)
{
	BL* phead = head->next;
	while (phead!= head)
	{
		printf("%d ", phead->x);
		phead = phead->next;
	}
	printf("\n");
}


//尾插
void LastInsert(BL* head, DataType x)
{
	assert(head);
	BL* Node = (BL*)malloc(sizeof(BL));
	BL* phead = head;
	BL* last = head->prev;
	Node->x = x;
	Node->prev = last;
	last->next = Node;
	Node->next = phead;
	phead->prev = Node;
}

//尾删
void LastDelete(BL* head)
{
	assert(head->next != head);
	BL* last = head->prev;
	BL* lastPrev = last->prev;

	lastPrev->next = head;
	head->prev = lastPrev;

	free(last);
}


//头插
void HeadInsert(BL* head, DataType x)
{
	assert(head);
	BL* new_head = (BL*)malloc(sizeof(BL));
	BL* phead = head;
	BL* pphead = head->next;
	
	new_head->x = x;
	new_head->next = pphead;
	pphead->prev = new_head;
	new_head->prev = phead;
	phead->next = new_head;
}


//头删
void HeadDelete(BL* head)
{
	assert(head->next != head);
	BL* phead = head->next;
	BL* phead_next = phead->next;
	phead_next->prev = head;
	head->next = phead_next;
	free(phead);
}

//找位置
BL* pos(BL* head, DataType x)
{
	assert(head && head->next != head);
	BL* cur = head->next;
	while (cur != head)
	{
		if (cur->x == x)return cur;
		else cur = cur->next;
	}
	printf("找不到\n");
	return NULL;
}


//选择x前插入
void PickInsert(BL* head, BL* pos, DataType x)
{
	assert(pos);
	assert(head && head->next != head);
	BL* cur = (BL*)malloc(sizeof(BL));
	BL* pos_prev = pos->prev;
	cur->x = x;
	pos_prev->next = cur;
	cur->prev = pos_prev;
	pos->prev = cur;
	cur->next = pos;
}


//选择x后删除
void PickDelete(BL* head, BL* pos)
{
	assert(head && head->next != head);
	BL* cur = (BL*)malloc(sizeof(BL));
	BL* pos_cur = pos->next;
	BL* pos_next = pos_cur->next;
	pos->next = pos_next;
	pos_next->prev = pos;
	free(pos_cur);
}