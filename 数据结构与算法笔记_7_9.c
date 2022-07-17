#define _CRT_SECURE_NO_WARNINGS 1    



//时间复杂度


//#include<stdio.h>
//void Function(int N)
//{
//	int count = 0;
//	int i = 0;
//	for (i=0;i<N;i++)//循环次数N^2
//	{
//		int j = 0;
//		for (j=0;j<N;j++)
//		{
//			++count;
//		}
//	}
//	int z = 0;
//	for (z=0;z<2*N;z++)//循环次数2*N
//	{
//		++count;
//	}
//	int w = 10;
//	while (w--)//循环次数10
//	{
//		++count;
//	}
//	printf("%d\n", count);
//
// }//时间复杂度  F(N)=N*N+2N+10    渐进表示法==  O(N^2)

//看到o就说明N^2不是准确的值，是估算，是渐进表示法
//假设

//N=10    F(N)=130（100）/（30）	
//N=100	F(N)=10210（10000）（210）			总结：N越大，后两项对结果的影响是越小的
//N=1000	F(N)=1002010（1000000）（2010）

//【估算】：对结果影响最大的那一项保留下来。
//可见：实际过程中我们计算时间复杂度时，我们并不一定要计算精确的执行次数，而只需要大概执行次数，那么这里我们用大写字母O的【大o渐进表示法】。
//表示：O(N^2)

//【O渐进表示法规则】
//1.用常数1取代运算时间中的所有加法常量
//2.在修改后的运行次数函数中，只保留最高项。
//3.如果最高阶项目存在且不是1，则去除与这个项目相乘除的常数。得到的结果就是大O阶
//N*N/2 == O(N^2)   2*N*N == O(N^2)

												//计算时间复杂度
//void Function(int M,int N)
//{
//	int i = 0;
//	for (i=0;i<M;i++)
//	{
//	}
//	for (i=0;i<N;i++)
//	{
//	}
//	return 0;
//}//时间复杂度 O(M+N)
//如果加条件：M远大于N  ->  O(M)，反之
//如果M和N差不多大   ->    O(M) 和 O(N) 都可以

												//计算时间复杂度
//void Function(int N)
//{
//	int i = 0;
//	for (i = 0; i < 2*N; i++)
//	{
//	}
//	for (i = 0; i < 10; i++)
//	{
//	}
//	return 0;
//}//时间复杂度 O(N)  2N+10  2N(忽略相乘的常数=N)



												//计算时间复杂度

//void Function(int N)
//{
//	int i = 0;
//	for (i=0;i<100;i++)
//	{
//	}
//
//	return 0;
//}//时间复杂度：N(1)    代表算法运行常数次




											//时间复杂度：悲观的预期




//空间复杂度：
//int main()
//{
//	int a = 0;
//	for (a=0;a<10;a++)
//	{
//		for (int b=0;b<10;b++)//虽然b第一次循环10次后，回到第一个循环，会消毁b空间，
//			//但是后面从新回来创建空间的时候使用的还是压栈的第二个地址，于是不会开辟10次空间=计算10个额外空间复杂度消耗
//		{
//		}
//
//	}
//
//}
//
//
//
//int main()
//{
//	int a = 0;
//	for (a = 0; a < 10; a++)
//	{
//		if (a==1)
//		{
//			int c = 0;
//		}
//		for (int b = 0; b < 10; b++)//第一次10循环完，销毁b,上面第二次开辟时候c占用了b空间，b从新开辟，后面一直使用b第二次开辟的地址
//		{
//		}
//
//	}
//
//}



//空间复杂度 【 O(1)   的斐波那契数列】
//#include<stdio.h>
//int main()
//{
//
//	int arr[3] = { 0,1,0 };
//
//	for (int i=2;i<10;i++)
//	{
//		arr[2] = arr[0] + arr[1];
//		if (i % 2 == 0)
//			arr[0] = arr[2];
//		else
//			arr[1] = arr[2];
//	printf("%d = %d\n",i, arr[2]);
//	}
//
//	return 0;
//}




														//递归的空间复杂度


//1.主要看递归的深度（注意：斐波那契等递归F(n-1)+F(n-2)，会先算F(n-1),算到结束，再算F(n-2),这时候F(n-2)用的是F(n-1)的空间，所以空间最大只可能F（n-1）
//2.递归空间内的创建,寄存器等可以看成O(1)

//空间是可以重复利用的，不累计的
//时间是一去不复返的


											//消失的数字【要求：时间复杂度O(n)】
//#include<stdio.h>
//#include<stdlib.h>
//
//
////1.假设从1开始使用异或^	【优】，时间复杂度O(N),空间复杂度O(1)
//int main()
//{
//	int arr[100] = { 0 };
//	int Max = 0;
//	int i = 0;
//	while (~scanf("%d",arr+i))
//	{
//		if (arr[i]>Max)
//		{
//			Max = arr[i];
//		}
//		i++;
//	}
//	int count = 0;
//	for (i=1;i<=Max;i++)
//	{
//		count ^= i ^ arr[i - 1];//【或者：给定一个x，x先和0-N个数异或，再和数组中的数字一一异或】
// 	}
//	printf("%d\n", count);
//
//	return 0;
//}


//思路2.1~n的数加起来减去输入的数和		//【优】、时间复杂度O(n),空间复杂度O(1)没有消耗额外的空间

//思路3.建立一个n大小的数组，每写一个都放在对应的数组下标内，最后没写的就是缺的







														//旋转数组

//1.取出一个存起来，其余后挪（时间复杂度O(n*k),空间复杂度O(1)）
//2.申请一块N大小空间，挪动3个，就把后三位放在开辟的空间的前面，其余放在后面，左后拷贝回去【以时间换空间】时间复杂度0（1），空间复杂度O(n)
//3.三步翻转法
//1234567
//
//4321 567  [1]前n-k个逆置
//4321 765  [2]后k个逆置
//567 1234  [3]整体逆置

//时间复杂度，[1]+[2]=O（n）+[3]O(n) ==O（2n）=O(n)
//没有借助空间复杂度：O（1）




														//顺序表和链表


//常见的【线性表】：
//1.顺序表：本质上就算数组[在数组的基础上要求数据从头开始存，并且连续存储，不能跳跃间隔]
//2.链表:用指针把一块一块的内存链接起来
//3.栈
//4.队列
//5.字符串
//......


//静态顺序表【特点：如果满了就不让插入】缺点：给多大的空间合适？很难确定
//#include<stdio.h>
//#define N 100
//#define int SLDatatype;//实现想存什么类型数据就改一下
//typedef struct SeqList
//{
//	SLDatatype a[N];
//	int size;//存储了多少个数据
//}SL;


//由于缺点，于是实现动态的

//动态顺序表


//#include<stdio.h>
//typedef int SLDataType;
//typedef struct SeqList
//{
//	SLDataType* pa;//定义一个指针指向动态开辟的空间
//	int size;
//	int capacity;
//}SL;
//
////接口函数--命名风格是跟着STL
//void SeqListInint(SL* ps);
//void SeqListPushBack(SL* ps,SLDataType x);
//void SeqListPoPBock(SL* ps);
//void SeqListPushFront(SL* Ps,SLDataType x);
//void SeqLIstPopFront(SL* ps);




typedef struct SeqListInit
{
	int a;
	int b;
}a1;

#include<stdio.h>
int main()
{
	a1 s={0,1};
	printf("%d\n",s.a);

	return 0;
}

