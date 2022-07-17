#define _CRT_SECURE_NO_WARNINGS 1    

#include"SeqList.h"



//дһ����ӡ�Ľӿ�
void SeqListPrint(SL* ps)
{
	for (int i=0;i<ps->size;i++)
	{
		printf("%d\n", ps->pa[i]);
	}

}


//���ٿռ�
void SeqListDestory(SL* ps)
{
	free(ps->pa);
	ps->pa = NULL;
	ps->capacity = ps->size = 0;
	printf("�ռ����ٳɹ�\n");
}


void SeqListInit(SL* ps)//��ʼ���ṹ��
{
	ps->pa = NULL;
	ps->size = ps->capacity = 0;
}

void SeqListPushBack(SL* ps, SLDataType x)//β��+����
{
	if (ps->size == ps->capacity)
	{
		int newcapacity = ps->capacity == 0 ? 4 : ps->capacity * 2;//���ԭ�ռ�=0������4����������2��
		SLDataType* tem = (SLDataType*)realloc(ps->pa, newcapacity * sizeof(SLDataType));
		printf("��ʱsize = %d����ռ�ɹ�\n",ps->size);
		if (tem == NULL)//˵������ռ�ʧ��
		{
			printf("realloc fail\n");//failʧ��
			exit(-1);
		}
		//����ɹ���
		ps->pa = tem;//�Ѹտ�ʼ���ٻ��߿��ٺ����ݵĿռ丳���������¸����ṹ���Աָ��
		ps->capacity = newcapacity;//���������ֵ�����ݺ������
	}

	ps->pa[ps->size] = x;//ps�Ľṹ����ָ��̬�ڴ��ָ��pa��ָ���Խṹ����sizeΪ�±�Ŀռ�
	ps->size++;//��Ч���ݸ���++��
}

void SeqListPopBack(SL* ps)//βɾ
{
	if (ps->size > 0)
	{
		ps->size--;
	}
	//�����ϸ�㴦��
	//assert(ps->size > 0);
	//ps->size--;
}

