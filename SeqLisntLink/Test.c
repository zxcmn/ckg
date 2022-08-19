#define _CRT_SECURE_NO_WARNINGS 1    

#include"SingleLink.h"







void Test1()
{
	SL* phead = NULL;
	SeqListPushBack(&phead,1);
	SeqListPushBack(&phead,2);
	SeqListPushBack(&phead,3);
	SeqListPushBack(&phead,4);

	SeqListPrint(phead);
}	

void Test2()
{
	SL* phead = NULL;
	SeqListPushFront(&phead,1);
	SeqListPushFront(&phead,2);
	SeqListPushFront(&phead,3);
	SeqListPushFront(&phead,4);
	SeqListPrint(phead);
}

void Test3()
{
	SL* pphead = NULL;
	SeqListPushFront(&pphead, 1);
	SeqListPushFront(&pphead, 2);
	SeqListPushFront(&pphead, 3);
	SeqListPushFront(&pphead, 4);
	SeqListPrint(pphead);
	SeqListPopDelete(&pphead);
	SeqListPopDelete(&pphead);

	SeqListPrint(pphead);

}

void Test4()
{
	SL* pphead = NULL;
	SeqListPushFront(&pphead, 1);
	SeqListPushFront(&pphead, 2);
	SeqListPushFront(&pphead, 3);
	SeqListPushFront(&pphead, 4);
	SeqListPrint(pphead);
	SeqListHeadDelete(&pphead);
	SeqListHeadDelete(&pphead);
	SeqListPrint(pphead);

}

void Test5()
{
	SL* pphead = NULL;
	SeqListPushFront(&pphead, 1);
	SeqListPushFront(&pphead, 2);
	SeqListPushFront(&pphead, 2);
	SeqListPushFront(&pphead, 3);
	SeqListPushFront(&pphead, 2);
	SeqListPushFront(&pphead, 4);
	SeqListPrint(pphead);
	int i = 1;
	SL* pos = SeqListFind(pphead, 2);
	while (pos)
	{
		printf("��%d��pos�ڵ㣺%p->%d\n", i++, pos,pos->data);
		pos = SeqListFind(pos->next,2);
	}
}

void Test6()
{
	SL* pphead = NULL;
	SeqListPushFront(&pphead, 1);
	SeqListPushFront(&pphead, 2);
	SeqListPushFront(&pphead, 3);
	SeqListPushFront(&pphead, 4);
	
	
	SeqListPrint(pphead);
	
	SeqListInsert(&pphead, SeqListFind(pphead, 2), 30);
	SeqListInsert(&pphead, SeqListFind(pphead, 4), 30);
	SeqListPrint(pphead);
	//���ֻ��һ���ڵ㣬�������⣬̫���������Ҹ���һ����Ч�ʴ��ۣ���ǰһ����������ڵ�ǰ��
}

void Test7()
{
	SL* pphead = NULL;
	SeqListPushFront(&pphead, 1);//β��
	SeqListPushFront(&pphead, 2);
	SeqListPushFront(&pphead, 3);
	SeqListPushFront(&pphead, 4);
	//����Ҫβ���λ
	SeqListAfterInsert(SeqListFind(pphead, 1), 666);

	SeqListPrint(pphead);
}

void Test8()
{
	


}

int main()
{
	//Test1();//β��
	//Test2();//�ײ�
	//Test3();//βɾ
	//Test4();//��ɾ
	//Test5();//����λ��
	//Test6();//�ڵ�ǰ����/̫����/Ч�ʴ��ۣ���������ǰ�����
	//Test7();//�ڵ�����
	Test8();//�ڵ�ѡ����ɾ��pos
	//Test9();//ѡ��ɾ��pos�ĺ�һ��
	return 0;
}



















