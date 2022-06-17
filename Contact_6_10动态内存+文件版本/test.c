#define _CRT_SECURE_NO_WARNINGS 1    


#define _CRT_SECURE_NO_WARNINGS 1    



//分三个模块
//1.类型定义+函数声明contact.h
//2.函数实现contact.c
//3.函数调用test.c

//1.通讯录中能够存放1000个人的信息
//2.每个人的信息
//3.名字+年龄+性别+电话+地址
//4.增加人的信息
//5.删除指定人的信息
//6.修改指定人的信息
//7.查找指定人的信息
//8.排序通讯录的信息


//  ---------------------------------------------
//  | 6_10_版本更新								|
//  |  【更新内容】								|
//  | 动态增长的版本							|
//  | 1.通讯录初始化后能存放3个联系人			|
//  | 2.当联系人存放满时，我们增加2个信息空间	|
//	|											|
//  | 6_17_版本更新								|
//  | 动态增长+文件保存版本						|
//  ---------------------------------------------

#include"contact.h"



void menu()
{
	printf("*****************************************************\n");
	printf("*****1.add[添加联系人]       2.del[删除联系人]*******\n");//增加，删除
	printf("*****3.search[查找联系人]    4.modify[修改联系人]****\n");//查找，修改
	printf("*****5.sort[懒的写]          6.print[查看联系人]*****\n");//排序，打印
	printf("***************    0.exit[退出]   *******************\n");//退出
	return;
}



enum Un
{
	EXIT,
	ADD,
	DEL,
	SEARCH,
	MODIFY,
	SORT,
	PRINT,
};


int main()
{
	int input = 0;

	//【创建通讯录】
	//PeoInfo tact[MAX_TACT]={0};//利用类型重定义的contact定义一个结构体数组
	//int sz = 0;//记录当前用几个联系人（添加的时候要知道以及有几个人了，好确定下标）
	//【利用这俩个创建一个结构体】
	//创建通讯录

	Contact con;//通讯录
	InitContact(&con);

	do
	{
		menu();
		printf("请选择：\n");
		scanf("%d", &input);
		switch (input) {
		case ADD:
			AddContact(&con);//添加
			break;
		case DEL://删除
			DelContact(&con);
			break;
		case SEARCH://查找
			SearchName(&con);//通过名字查找
			break;
		case MODIFY://修改
			ModifyContact(&con);
			break;
		case SORT://牌序
			//SortContact(&con);//用qosrt懒的写
			break;
		case PRINT:
			PrintContact(&con);//打印
			break;
		case EXIT:
			WritePeoInfo(&con);//输出联系人
			free(con.data);
			con.data = NULL;
			printf("退出通讯录\n");
			break;
		default:
			printf("选择错误\n");
			break;
		}


	} while (input);


	return 0;
}







//int main()
//{
//	int input = 0;
//	void(*pArr[])() = {0,AddContact(&con),DelContact(&con),SearchName(&con),ModifyContact(&con),PrintContact(&con),SortContact(&con)};
//	do
//	{
//		menu();
//		printf("请选择：\n");
//		scanf("%d", &input);
//		pArr[input]();
//	} while (1);
//	return 0;
//}
