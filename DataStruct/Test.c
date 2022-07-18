#define _CRT_SECURE_NO_WARNINGS 1    


#include"SeqList.h"

void TestSeqList1()
{
	SL sl;
	SeqListInit(&sl);//初始化
	SeqListPushBack(&sl, 1);
	SeqListPushBack(&sl, 2);
	SeqListPushBack(&sl, 3);
	SeqListPushBack(&sl, 4);
	SeqListPushBack(&sl, 5);
	SeqListPopBack(&sl);//尾删
	SeqListPopBack(&sl);//尾删
	SeqListPopBack(&sl);//尾删

	SeqListPrint(&sl);//打印
	SeqListDestory(&sl);//销毁空间
}

//首插
void TestSeqList2()
{
	SL sl;
	SeqListInit(&sl);//初始化
	SeqListPushBack(&sl, 1);
	SeqListPushBack(&sl, 2);
	SeqListPushBack(&sl, 3);
	SeqListPushBack(&sl, 4);
	SeqListPushBack(&sl, 5);
	SeqListPushFront(&sl,10);//首插入10
	SeqListPushFront(&sl,10);//首插入10

	SeqListPrint(&sl);//打印
	SeqListDestory(&sl);//销毁空间

}


//三步首添
void TestSeqList3()
{
	SL sl;
	SeqListInit(&sl);//初始化
	SeqListPushBack(&sl, 1);
	SeqListPushBack(&sl, 2);
	SeqListPushBack(&sl, 3);
	SeqListPushBack(&sl, 4);
	SeqListPushBack(&sl, 5);
	SeqListPushFront2(&sl, 10);//首插入10
	SeqListPushFront2(&sl, 10);//首插入10

	SeqListPrint(&sl);//打印
	SeqListDestory(&sl);//销毁空间
}


int main()
{
	
	
	//TestSeqList1();//尾添尾删
	//TestSeqList2();//首添首删
	TestSeqList3();//使用三步翻转实现首添




	//SeqListPushFront(SL * Ps, SLDataType x);//头插
	//SeqLIstPopFront(SL * ps);//头删







	

	return 0;
}



