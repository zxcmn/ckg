#define _CRT_SECURE_NO_WARNINGS 1    


#include"SeqList.h"

void TestSeqList1(SL*sl)
{
	
	SeqListPushBack(sl, 1);
	SeqListPushBack(sl, 2);
	SeqListPushBack(sl, 3);
	SeqListPushBack(sl, 4);
	SeqListPushBack(sl, 5);
	
}

int main()
{
	SL sl;
	SeqListInit(&sl);//³õÊ¼»¯
	TestSeqList1(&sl);//Î²Ìí
	SeqListPopBack(&sl);//Î²É¾
	SeqListPopBack(&sl);//Î²É¾
	SeqListPopBack(&sl);//Î²É¾
	TestSeqList1(&sl);//Î²Ìí

	SeqListPrint(&sl);//´òÓ¡
	SeqListDestory(&sl);//Ïú»Ù¿Õ¼ä

	return 0;
}