#define _CRT_SECURE_NO_WARNINGS 1    

#include<stdio.h>
#include<string.h>

#define MAX_NAME 20
#define MAX_SEX 10
#define MAX_TELE 12
#define MAX_ADDR 30
#define MAX_PeoInfo 1000

//类型定义
typedef struct PeoInfo//一个人的信息
{
	char name[MAX_NAME];
	char sex[MAX_SEX];
	int age;
	char tele[MAX_TELE];//电话
	char addr[MAX_ADDR];//地址

}PeoInfo;

typedef struct contact
{
	PeoInfo data[MAX_PeoInfo];
	int sz;//记录当前通讯录有效信息的个数
}Contact;



void InitContact(Contact*con);//初始化通讯录
void AddContact(Contact* con);//添加联系人
void PrintContact(const Contact* con);//打印联系人
void DelContact(Contact*con);//删除
void SearchName(Contact*con);//查找
void ModifyContact(Contact*con);//修改








