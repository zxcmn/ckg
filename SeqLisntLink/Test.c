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
		printf("第%d个pos节点：%p->%d\n", i++, pos,pos->data);
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
	;
	
	SeqListInsert(&pphead, SeqListFind(pphead, 2), 30);
	SeqListInsert(&pphead, SeqListFind(pphead, 4), 30);
	SeqListPrint(pphead);
	//如果只有一个节点，又有问题，太繁琐，并且付出一定的效率代价（找前一个）不建议节点前插
}

int main()
{
	//Test1();//尾插
	//Test2();//首插
	//Test3();//尾删
	//Test4();//首删
	//Test5();//查找位置
	Test6();//节点前插入/太繁琐/效率代价，不建议在前面插入
	return 0;
}



















