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
	SeqListDestory(&sl);//�ͷſռ�
}

//�ƶ��ײ�
void TestSeqList2()
{
	SL sl;
	SeqListInit(&sl);//��ʼ��
	SeqListPushBack(&sl, 1);
	SeqListPushBack(&sl, 2);
	SeqListPushBack(&sl, 3);
	SeqListPushBack(&sl, 4);
	SeqListPushBack(&sl, 5);
	SeqListPushFront(&sl,10);//�ײ���
	SeqListPushFront(&sl,20);//�ײ���
	SeqListPushFront(&sl,30);//�ײ���
	SeqListPushFront(&sl,40);//�ײ���
	SeqListPushFront(&sl,50);//�ײ���

	SeqListPopFront(&sl);//ͷɾ
	SeqListPopFront(&sl);//ͷɾ
	
	SeqListPrint(&sl);//��ӡ
	SeqListDestory(&sl);//�ͷſռ�

}


//��������+��ɾ
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
	SeqListPushFront2(&sl, 20);//�ײ���10
	SeqListPushFront2(&sl, 30);//�ײ���10
	SeqListPushFront2(&sl, 40);//�ײ���10
	SeqListPushFront2(&sl, 50);//�ײ���10

	SeqListPopFront3(&sl);
	SeqListPopFront3(&sl);
	
	SeqListPrint(&sl);//��ӡ
	SeqListDestory(&sl);//���ٿռ�
}

void TestSeqList4()
{
	SL sl;
	SeqListInit(&sl);//��ʼ��
	SeqListPushBack(&sl, 1);
	SeqListPushBack(&sl, 2);
	SeqListPushBack(&sl, 3);
	SeqListPushBack(&sl, 4);
	SeqListPushBack(&sl, 5);
	SeqListPushFront(&sl, 10);//�ײ���
	SeqListPushFront(&sl, 20);//�ײ���
	SeqListPushFront(&sl, 30);//�ײ���
	SeqListPushFront(&sl, 40);//�ײ���
	SeqListPushFront(&sl, 50);//�ײ���

	SeqListPopFront(&sl);//ͷɾ
	SeqListPopFront(&sl);//ͷɾ
	int temp = 0;
	temp = SeqListFind(&sl,3);//����
	if (temp == -1)
		 printf("û�ҵ�\n");
	else 
		printf("�ҵ��ˣ��±� = %d\n", temp);


	SeqListPrint(&sl);//��ӡ
	SeqListDestory(&sl);//�ͷſռ�

}

void TestSeqList5()
{
	SL sl;
	SeqListInit(&sl);//��ʼ��
	SeqListPushBack(&sl, 1);
	SeqListPushBack(&sl, 2);
	SeqListPushBack(&sl, 3);
	SeqListPushBack(&sl, 4);
	SeqListPushBack(&sl, 5);
	
	SeqListInsert(&sl,3,99);//����(�ṹ�壬������±꣬������)
	SeqListDelete(&sl,4);//ɾ��ָ���±�

	SeqListPrint(&sl);//��ӡ
	SeqListDestory(&sl);//�ͷſռ�

}

int main()
{
	
	
	//TestSeqList1();//β��βɾ
	//TestSeqList2();//������ɾ
	//TestSeqList3();//ʹ��������תʵ������
	//TestSeqList4();//������
	TestSeqList5();//����


	//SeqListPushFront(SL * Ps, SLDataType x);//ͷ��
	//SeqLIstPopFront(SL * ps);//ͷɾ







	

	return 0;
}



