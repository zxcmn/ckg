#define _CRT_SECURE_NO_WARNINGS 1    

#include"BilateralTest.h"


//尾插
void Test1()
{
	BL* head = LinstInit();
	LastInsert(head,1);
	LastInsert(head,2);
	LastInsert(head,3);
	LastInsert(head,4);
	Print(head);
}





//尾删
void Test2()
{
	BL* head = LinstInit();
	LastInsert(head, 1);
	LastInsert(head, 2);
	LastInsert(head, 3);
	LastInsert(head, 4);
	//尾删
	LastDelete(head);
	LastDelete(head);
	LastDelete(head);
	LastDelete(head);
	Print(head);

}

void Test3()
{
	BL* head = LinstInit();
	//头插
	HeadInsert(head, 1);
	HeadInsert(head, 2);
	HeadInsert(head, 3);
	HeadInsert(head, 4);
	Print(head);
}

//头删
void Test4()
{
	BL* head = LinstInit();
	//先头插点东西
	HeadInsert(head, 1);
	HeadInsert(head, 2);
	HeadInsert(head, 3);
	HeadInsert(head, 4);
	//头删
	HeadDelete(head);
	HeadDelete(head);

	Print(head);
}


//选择x前插入
void Test5()
{
	BL* head = LinstInit();
	//先头插点东西
	HeadInsert(head, 1);
	HeadInsert(head, 2);
	HeadInsert(head, 3);
	HeadInsert(head, 4);
	//选择插入
	PickInsert(head, pos(head,3), 999);
	Print(head);
}


//选择x后删除
void Test6()
{
	BL* head = LinstInit();
	//先头插点东西
	HeadInsert(head, 1);
	HeadInsert(head, 2);
	HeadInsert(head, 3);
	HeadInsert(head, 4);
	//选择删除
	PickDelete(head, pos(head, 3));
	Print(head);
}

int main()
{
	//尾插
	//Test1();
	//尾删
	//Test2();
	//头插
	//Test3();
	//头删
	//Test4();
	//选择x前插
	//Test5();
	//选择x后删
	//Test6();

	return 0;
}
