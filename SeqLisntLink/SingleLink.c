#define _CRT_SECURE_NO_WARNINGS 1    
#pragma once
#include"SingleLink.h"

//链表打印
void SeqListPrint(SL* phead)
{
	SL* ps = phead;
	while (ps != NULL)
	{
		printf("%d ", ps->data);
		ps = ps->next;
	}
	printf("NULL\n");
}

//开辟节点空间
SL* SingleLinkNode(SLDataType x)
{
	SL* newSL = (SL*)malloc(sizeof(SL));
	if (newSL == NULL)
	{
		perror("malloc:");
		exit(-1);//不使用return；因为如果开辟失败，return出函数后还会继续下面的代码，并且获得一个return的空NULL；
	}
	newSL->data = x;
	newSL->next = NULL;
	return newSL;
}

//链表尾添
void SeqListPushBack(SL** phead,SLDataType x)//第一次要改变指向，指向头节点，第二次改变结构体，因为已经指向一个节点了，后面用一级指针就行了
{
	SL* newSL = SingleLinkNode(x);
	if (*phead == NULL)
	{
		*phead = newSL;
	}
	else
	{
		SL* str = *phead;
		while (str->next != NULL)
		{
			str = str->next;
		}
		str->next = newSL;
	}
}

//链表头插
void SeqListPushFront(SL** phead, SLDataType x)
{
	SL* newSL = SingleLinkNode(x);
	newSL->next = *phead;
	*phead = newSL;
}

//链表尾删
void SeqListPopDelete(SL** phead)
{

	assert(*phead != NULL);//如果没有节点了

	if ((*phead)->next == NULL)//只有一个节点
	{
		free(*phead);
		*phead = NULL;
	}
	else//一个节点以上
	{
		//记录上一个节点地址
		/*SL* temp = NULL;
		SL* manageSL = *phead;
		while (manageSL->next)
		{
			temp = manageSL;
			manageSL = manageSL->next;
		}
		free(manageSL);
		manageSL = NULL;
		temp->next = NULL;*/
		
		//预判段下一个节点地址是不是NULL
		SL* manageSL = *phead;
		while (manageSL->next->next)
		{
			manageSL = manageSL->next;
		}
		free(manageSL->next);
		manageSL->next = NULL;
	}
}
//头删
void SeqListHeadDelete(SL** phead)
{
	assert(*phead != NULL);
	/*if ((*phead)->next == NULL)
	{
		free(*phead);
		*phead = NULL;
	}*/		//可以忽略，下面的可以复用
	
		SL* manageSL = *phead;
		*phead = manageSL->next;
		free(manageSL);
}


//查找
SL* SeqListFind(SL* phead, SLDataType x)
{
	SL* manageSL = phead;
	while (manageSL)
	{
		if (manageSL->data == x)
		{
			return manageSL;
		}
		else
		manageSL = manageSL->next;
	}
	return NULL;
}

void SeqListInsert(SL** phead ,SL* x,SLDataType y)//在x位置前插入，插入什么
{
	assert(*phead);
	SL* manageSL = *phead;
	SL* str = SingleLinkNode(y);

	if (*phead == x)
	{
		str->next = x;
		*phead = str;
	}
	else
	{
		while (manageSL->next != x)
		{
			manageSL = manageSL->next;
		}
		manageSL->next = str;
		str->next = x;
	}
	
	
	/*str->next = manageSL->next;	//不使用pos,就要先链接尾
	manageSL->next = str;*/
	
}

//在指定位置后面插入
void SeqListAfterInsert(SL* pos, SLDataType y)
{
	SL* str = SingleLinkNode(y);
	if (pos->next == NULL)
	{
		pos->next = str;
	}
	else
	{
		str->next = pos->next;
		pos->next = str;
	}
}
