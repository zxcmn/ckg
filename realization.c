#define _CRT_SECURE_NO_WARNINGS 1    

#include"BilateralTest.h"


//��ʼ��
BL* LinstInit()
{
	BL* temp = (BL*)malloc(sizeof(BL));
	temp->next = temp;
	temp->prev = temp;
	return temp;
}


//��ӡ
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


//β��
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

//βɾ
void LastDelete(BL* head)
{
	assert(head->next != head);
	BL* last = head->prev;
	BL* lastPrev = last->prev;

	lastPrev->next = head;
	head->prev = lastPrev;

	free(last);
}


//ͷ��
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


//ͷɾ
void HeadDelete(BL* head)
{
	assert(head->next != head);
	BL* phead = head->next;
	BL* phead_next = phead->next;
	phead_next->prev = head;
	head->next = phead_next;
	free(phead);
}

//��λ��
BL* pos(BL* head, DataType x)
{
	assert(head && head->next != head);
	BL* cur = head->next;
	while (cur != head)
	{
		if (cur->x == x)return cur;
		else cur = cur->next;
	}
	printf("�Ҳ���\n");
	return NULL;
}


//ѡ��xǰ����
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


//ѡ��x��ɾ��
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