#define _CRT_SECURE_NO_WARNINGS 1    

#include"BilateralTest.h"


//β��
void Test1()
{
	BL* head = LinstInit();
	LastInsert(head,1);
	LastInsert(head,2);
	LastInsert(head,3);
	LastInsert(head,4);
	Print(head);
}





//βɾ
void Test2()
{
	BL* head = LinstInit();
	LastInsert(head, 1);
	LastInsert(head, 2);
	LastInsert(head, 3);
	LastInsert(head, 4);
	//βɾ
	LastDelete(head);
	LastDelete(head);
	LastDelete(head);
	LastDelete(head);
	Print(head);

}

void Test3()
{
	BL* head = LinstInit();
	//ͷ��
	HeadInsert(head, 1);
	HeadInsert(head, 2);
	HeadInsert(head, 3);
	HeadInsert(head, 4);
	Print(head);
}

//ͷɾ
void Test4()
{
	BL* head = LinstInit();
	//��ͷ��㶫��
	HeadInsert(head, 1);
	HeadInsert(head, 2);
	HeadInsert(head, 3);
	HeadInsert(head, 4);
	//ͷɾ
	HeadDelete(head);
	HeadDelete(head);

	Print(head);
}


//ѡ��xǰ����
void Test5()
{
	BL* head = LinstInit();
	//��ͷ��㶫��
	HeadInsert(head, 1);
	HeadInsert(head, 2);
	HeadInsert(head, 3);
	HeadInsert(head, 4);
	//ѡ�����
	PickInsert(head, pos(head,3), 999);
	Print(head);
}


//ѡ��x��ɾ��
void Test6()
{
	BL* head = LinstInit();
	//��ͷ��㶫��
	HeadInsert(head, 1);
	HeadInsert(head, 2);
	HeadInsert(head, 3);
	HeadInsert(head, 4);
	//ѡ��ɾ��
	PickDelete(head, pos(head, 3));
	Print(head);
}

int main()
{
	//β��
	//Test1();
	//βɾ
	//Test2();
	//ͷ��
	//Test3();
	//ͷɾ
	//Test4();
	//ѡ��xǰ��
	//Test5();
	//ѡ��x��ɾ
	//Test6();

	return 0;
}
