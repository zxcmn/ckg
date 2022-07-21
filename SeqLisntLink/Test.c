#define _CRT_SECURE_NO_WARNINGS 1    

#include"SingleLink.h"







void Test1()
{
	SL* phead = NULL;
	SeqListPushBack(&phead,1);
	SeqListPushBack(&phead,2);
	SeqListPushBack(&phead,3);
	SeqListPushBack(&phead,4);

	SeqListPint(phead);
}	


int main()
{
	Test1();
	return 0;
}
















