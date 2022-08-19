#define _CRT_SECURE_NO_WARNINGS 1    
#pragma once
#include"SingleLink.h"

//�����ӡ
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

//���ٽڵ�ռ�
SL* SingleLinkNode(SLDataType x)
{
	SL* newSL = (SL*)malloc(sizeof(SL));
	if (newSL == NULL)
	{
		perror("malloc:");
		exit(-1);//��ʹ��return����Ϊ�������ʧ�ܣ�return�������󻹻��������Ĵ��룬���һ��һ��return�Ŀ�NULL��
	}
	newSL->data = x;
	newSL->next = NULL;
	return newSL;
}

//����β��
void SeqListPushBack(SL** phead,SLDataType x)//��һ��Ҫ�ı�ָ��ָ��ͷ�ڵ㣬�ڶ��θı�ṹ�壬��Ϊ�Ѿ�ָ��һ���ڵ��ˣ�������һ��ָ�������
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

//����ͷ��
void SeqListPushFront(SL** phead, SLDataType x)
{
	SL* newSL = SingleLinkNode(x);
	newSL->next = *phead;
	*phead = newSL;
}

//����βɾ
void SeqListPopDelete(SL** phead)
{

	assert(*phead != NULL);//���û�нڵ���

	if ((*phead)->next == NULL)//ֻ��һ���ڵ�
	{
		free(*phead);
		*phead = NULL;
	}
	else//һ���ڵ�����
	{
		//��¼��һ���ڵ��ַ
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
		
		//Ԥ�ж���һ���ڵ��ַ�ǲ���NULL
		SL* manageSL = *phead;
		while (manageSL->next->next)
		{
			manageSL = manageSL->next;
		}
		free(manageSL->next);
		manageSL->next = NULL;
	}
}
//ͷɾ
void SeqListHeadDelete(SL** phead)
{
	assert(*phead != NULL);
	/*if ((*phead)->next == NULL)
	{
		free(*phead);
		*phead = NULL;
	}*/		//���Ժ��ԣ�����Ŀ��Ը���
	
		SL* manageSL = *phead;
		*phead = manageSL->next;
		free(manageSL);
}


//����
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

void SeqListInsert(SL** phead ,SL* x,SLDataType y)//��xλ��ǰ���룬����ʲô
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
	
	
	/*str->next = manageSL->next;	//��ʹ��pos,��Ҫ������β
	manageSL->next = str;*/
	
}

//��ָ��λ�ú������
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
