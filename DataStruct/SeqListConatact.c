#define _CRT_SECURE_NO_WARNINGS 1    

#include"SeqList.h"



//写一个打印的接口
void SeqListPrint(SL* ps)
{
	for (int i=0;i<ps->size;i++)
	{
		printf("%d\n", ps->pa[i]);
	}

}


//销毁空间
void SeqListDestory(SL* ps)
{
	free(ps->pa);
	ps->pa = NULL;
	ps->capacity = ps->size = 0;
	printf("空间销毁成功\n");
}


void SeqListInit(SL* ps)//初始化结构体
{
	ps->pa = NULL;
	ps->size = ps->capacity = 0;
}

void SeqListPushBack(SL* ps, SLDataType x)//尾添+扩容
{
	if (ps->size == ps->capacity)
	{
		int newcapacity = ps->capacity == 0 ? 4 : ps->capacity * 2;//如果原空间=0；赋予4，否则扩容2倍
		SLDataType* tem = (SLDataType*)realloc(ps->pa, newcapacity * sizeof(SLDataType));
		printf("此时size = %d申请空间成功\n",ps->size);
		if (tem == NULL)//说明申请空间失败
		{
			printf("realloc fail\n");//fail失败
			exit(-1);
		}
		//如果成功了
		ps->pa = tem;//把刚开始开辟或者开辟后增容的空间赋给或者重新赋给结构体成员指针
		ps->capacity = newcapacity;//最大容量赋值成扩容后的容量
	}

	ps->pa[ps->size] = x;//ps的结构体里指向动态内存的指针pa，指向以结构体里size为下标的空间
	ps->size++;//有效数据个数++；
}

void SeqListPopBack(SL* ps)//尾删
{
	if (ps->size > 0)
	{
		ps->size--;
	}
	//或者严格点处理
	//assert(ps->size > 0);
	//ps->size--;
}

