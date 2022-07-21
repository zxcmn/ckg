#define _CRT_SECURE_NO_WARNINGS 1    
#pragma once
#include"SingleLink.h"

//�����ӡ
void SeqListPint(SL* phead)
{
	SL* ps = phead;
	while (ps != NULL)
	{
		printf("%d ", ps->data);
		ps = ps->next;
	}

}

//����β��
void SeqListPushBack(SL** phead,SLDataType x)
{
	SL* newSL = (SL*)malloc(sizeof(SL));
	newSL->data = x;
	newSL->next = NULL;
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