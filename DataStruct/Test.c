#define _CRT_SECURE_NO_WARNINGS 1    


#include"SeqList.h"

void TestSeqList1()
{
	SL sl;
	SeqListInit(&sl);//��ʼ��
	SeqListPushBack(&sl, 1);
	SeqListPushBack(&sl, 2);
	SeqListPushBack(&sl, 3);
	SeqListPushBack(&sl, 4);
	SeqListPushBack(&sl, 5);
	SeqListPopBack(&sl);//βɾ
	SeqListPopBack(&sl);//βɾ
	SeqListPopBack(&sl);//βɾ

	SeqListPrint(&sl);//��ӡ
	SeqListDestory(&sl);//���ٿռ�
}

//�ײ�
void TestSeqList2()
{
	SL sl;
	SeqListInit(&sl);//��ʼ��
	SeqListPushBack(&sl, 1);
	SeqListPushBack(&sl, 2);
	SeqListPushBack(&sl, 3);
	SeqListPushBack(&sl, 4);
	SeqListPushBack(&sl, 5);
	SeqListPushFront(&sl,10);//�ײ���10
	SeqListPushFront(&sl,10);//�ײ���10

	SeqListPrint(&sl);//��ӡ
	SeqListDestory(&sl);//���ٿռ�

}


//��������
void TestSeqList3()
{
	SL sl;
	SeqListInit(&sl);//��ʼ��
	SeqListPushBack(&sl, 1);
	SeqListPushBack(&sl, 2);
	SeqListPushBack(&sl, 3);
	SeqListPushBack(&sl, 4);
	SeqListPushBack(&sl, 5);
	SeqListPushFront2(&sl, 10);//�ײ���10
	SeqListPushFront2(&sl, 10);//�ײ���10

	SeqListPrint(&sl);//��ӡ
	SeqListDestory(&sl);//���ٿռ�
}


int main()
{
	
	
	//TestSeqList1();//β��βɾ
	//TestSeqList2();//������ɾ
	TestSeqList3();//ʹ��������תʵ������




	//SeqListPushFront(SL * Ps, SLDataType x);//ͷ��
	//SeqLIstPopFront(SL * ps);//ͷɾ







	

	return 0;
}



