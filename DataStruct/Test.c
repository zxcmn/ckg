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
	SeqListDestory(&sl);//释放空间
}

//移动首插
void TestSeqList2()
{
	SL sl;
	SeqListInit(&sl);//初始化
	SeqListPushBack(&sl, 1);
	SeqListPushBack(&sl, 2);
	SeqListPushBack(&sl, 3);
	SeqListPushBack(&sl, 4);
	SeqListPushBack(&sl, 5);
	SeqListPushFront(&sl,10);//首插入
	SeqListPushFront(&sl,20);//首插入
	SeqListPushFront(&sl,30);//首插入
	SeqListPushFront(&sl,40);//首插入
	SeqListPushFront(&sl,50);//首插入

	SeqListPopFront(&sl);//头删
	SeqListPopFront(&sl);//头删
	
	SeqListPrint(&sl);//打印
	SeqListDestory(&sl);//释放空间

}


//三步首添+首删
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
	SeqListPushFront2(&sl, 20);//首插入10
	SeqListPushFront2(&sl, 30);//首插入10
	SeqListPushFront2(&sl, 40);//首插入10
	SeqListPushFront2(&sl, 50);//首插入10

	SeqListPopFront3(&sl);
	SeqListPopFront3(&sl);
	
	SeqListPrint(&sl);//打印
	SeqListDestory(&sl);//销毁空间
}

void TestSeqList4()
{
	SL sl;
	SeqListInit(&sl);//初始化
	SeqListPushBack(&sl, 1);
	SeqListPushBack(&sl, 2);
	SeqListPushBack(&sl, 3);
	SeqListPushBack(&sl, 4);
	SeqListPushBack(&sl, 5);
	SeqListPushFront(&sl, 10);//首插入
	SeqListPushFront(&sl, 20);//首插入
	SeqListPushFront(&sl, 30);//首插入
	SeqListPushFront(&sl, 40);//首插入
	SeqListPushFront(&sl, 50);//首插入

	SeqListPopFront(&sl);//头删
	SeqListPopFront(&sl);//头删
	int temp = 0;
	temp = SeqListFind(&sl,3);//查找
	if (temp == -1)
		 printf("没找到\n");
	else 
		printf("找到了，下标 = %d\n", temp);


	SeqListPrint(&sl);//打印
	SeqListDestory(&sl);//释放空间

}

void TestSeqList5()
{
	SL sl;
	SeqListInit(&sl);//初始化
	SeqListPushBack(&sl, 1);
	SeqListPushBack(&sl, 2);
	SeqListPushBack(&sl, 3);
	SeqListPushBack(&sl, 4);
	SeqListPushBack(&sl, 5);
	
	SeqListInsert(&sl,3,99);//插入(结构体，插入的下标，插入数)
	SeqListDelete(&sl,4);//删除指定下标

	SeqListPrint(&sl);//打印
	SeqListDestory(&sl);//释放空间

}

int main()
{
	
	
	//TestSeqList1();//尾添尾删
	//TestSeqList2();//首添首删
	//TestSeqList3();//使用三步翻转实现首添
	//TestSeqList4();//查找数
	TestSeqList5();//插入


	//SeqListPushFront(SL * Ps, SLDataType x);//头插
	//SeqLIstPopFront(SL * ps);//头删







	

	return 0;
}



