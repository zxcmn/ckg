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


//释放空间
void SeqListDestory(SL* ps)
{
	free(ps->pa);
	ps->pa = NULL;
	ps->capacity = ps->size = 0;
	printf("空间销毁成功\n");
}

//扩容
void SeqListCheckCapacity(SL*ps)
{
	if (ps->size == ps->capacity)
	{
		int newcapacity = ps->capacity == 0 ? 4 : ps->capacity * 2;//如果原空间=0；赋予4，否则扩容2倍
		SLDataType* tem = (SLDataType*)realloc(ps->pa, newcapacity * sizeof(SLDataType));
		if (tem == NULL)//说明申请空间失败
		{
			printf("realloc fail\n");//fail失败
			exit(-1);
		}
		//如果成功了
		ps->pa = tem;//把刚开始开辟或者开辟后增容的空间赋给或者重新赋给结构体成员指针
		ps->capacity = newcapacity;//最大容量赋值成扩容后的容量
		printf("此时size = %d申请空间成功、扩容capacity = %d\n", ps->size, ps->capacity);

	}

}


void SeqListInit(SL* ps)//初始化结构体
{
	ps->pa = NULL;
	ps->size = ps->capacity = 0;
}

void SeqListPushBack(SL* ps, SLDataType x)//尾添+扩容
{
	//扩容
	SeqListCheckCapacity(ps);

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

//移动首插
void SeqListPushFront(SL* ps,SLDataType x)
{
	//考虑扩容//⭐扩容有2种，原地扩容，异地扩容，如果开辟的空间后面后足够的空间，就原地扩容，否则从新找一个大小够的申请使用，然后拷贝过去
	SeqListCheckCapacity(ps);

	//开始移动数据插入插入
	int end = ps->size-1;
	while (end >= 0)
	{
		ps->pa[end + 1] = ps->pa[end];
		--end;
	}
	ps->pa[0] = x;
	ps->size++;

}
//移动头删
void SeqListPopFront(SL* ps)
{
	if (ps->size == 0)
	{
		printf("数据不够\n");
		exit(-1);
	}
	//或者assert(ps->size != 0)
	int left = 1;
	while (left < ps->size)
	{
		ps->pa[left-1] = ps->pa[left];
		left++;
	}
	ps->size--;
}




//三步头插
void Turn(SLDataType* pa, size_t size);
void SeqListPushFront2(SL* ps,SLDataType x)
{
	//考虑增容
	SeqListCheckCapacity(ps);
	//头插
	ps->pa[ps->size] = x;
	ps->size++;
	Turn(ps->pa,ps->size-1);
	Turn(ps->pa,ps->size);
}
//翻转
void Turn(SLDataType* pa,size_t size)
{
	SLDataType* left = pa;
	SLDataType* right = pa + (size - 1);
	while (left <= right)
	{
		int temp = *left;
		*left = *right;
		*right = temp;
		left++;
		--right;
	}
}


//三步头删12345 43215  51234   54321  12345 
void Turn1(SLDataType* pa, size_t size);
void SeqListPopFront3(SL* ps)
{
	if (ps->size == 0)
	{
		printf("数据不够\n");
		exit(-1);
	}
	//或者assert(ps->size != 0)
	Turn1(ps->pa+1, ps->size);
	Turn(ps->pa, ps->size);
	ps->size--;
}
//翻转
void Turn1(SLDataType* pa, size_t size)
{
	SLDataType* left = pa;
	SLDataType* right = pa + (size - 2);//首地址pa是经过pa+1
	while (left <= right)
	{
		int temp = *left;
		*left = *right;
		*right = temp;
		left++;
		--right;
	}
}

//查找
int SeqListFind(SL* ps,SLDataType x)
{
	for (int i=0;i<ps->size;i++)
	{
		if (ps->pa[i] == x)
		{
			return i;
		}
	}
	return -1;
}

//插入
void SeqListInsert(SL *ps,size_t pos,SLDataType x)
{
	SeqListCheckCapacity(ps);
	int temp = ps->size - 1;
	while (temp >= pos)
	{
		ps->pa[temp + 1] = ps->pa[temp];
		--temp;
	}
	ps->pa[pos] = x;
	ps->size++;
}

//删除
void SeqListDelete(SL* ps,size_t pos)
{
	int temp = ps->size - 1;
	while (pos < temp)
	{
		ps->pa[pos] = ps->pa[pos + 1];
		pos++;
	}
	ps->size--;
}

