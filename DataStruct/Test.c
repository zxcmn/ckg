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
	SeqListInit(&sl);//��ʼ��
	TestSeqList1(&sl);//β��
	SeqListPopBack(&sl);//βɾ
	SeqListPopBack(&sl);//βɾ
	SeqListPopBack(&sl);//βɾ
	TestSeqList1(&sl);//β��

	SeqListPrint(&sl);//��ӡ
	SeqListDestory(&sl);//���ٿռ�

	return 0;
}