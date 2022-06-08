#define _CRT_SECURE_NO_WARNINGS 1    


#include"contact.h"

void InitContact(Contact*con)
{
	con->sz = 0;
	memset(con->data,0,sizeof(con->data));
	//或者：Contact con={0};
}


void AddContact(Contact* con)
{
	if (con->sz==MAX_PeoInfo)
	{
		printf("通讯录已满，无法添加\n");
		return;
	}
	printf("请输入名字：\n");
	scanf("%s", con->data[con->sz].name);
	printf("请输入性别：\n");
	scanf("%s", con->data[con->sz].sex);
	printf("请输入年龄：\n");
	scanf("%d", &con->data[con->sz].age);
	printf("请输入电话：\n");
	scanf("%s", con->data[con->sz].tele);
	printf("请输入地址：\n");
	scanf("%s", con->data[con->sz].addr);
	(con->sz)++;
	printf("增加成功\n");

}


void PrintContact(const Contact* con)
{
	int i = 0;
	printf("%-20s\t%-5s\t%-5s\t%-12s\t%-20s\t\n", "名字", "年龄", "性别", "电话", "地址");
	//打印数据
	for (i = 0; i < con->sz; i++)
	{
		printf("%-20s\t%-5d\t%-5s\t%-12s\t%-20s\t\n",
			con->data[i].name,
			con->data[i].age,
			con->data[i].sex,
			con->data[i].tele,
			con->data[i].addr);
	}
}


void DelContact(Contact* con)
{
	char GetName[MAX_NAME] = { 0 };
	if (con->sz==0)
	{
		printf("通讯录为空，无需删除\n");
		return;
	}
	//查找删除的人
	printf("请输入要查找的人的名字：\n");
	scanf("%s", GetName);
	int pos=FindMyName(con,GetName);//本身就是地址
	if (pos==-1)
	{
		printf("未找到\n");
		return;
	}
	//删除
	int i = 0;
	for (i = pos; i < con->sz - 1; i++)//原理：把后面的数往前面挪动
	{
		con->data[i] = con->data[i + 1];
	}
	(con->sz)--;
	printf("删除成功:\n");
}

//查找联系人和查找删除联系人的纽带
int FindMyName(Contact* con,char GetName[])//加了static这个函数只能在自己源文件内部看到，别人就看不到
{//其他源文件用不了
	int i = 0;
	for (i=0;i<con->sz;i++)
	{
		if (strcmp(con->data[i].name, GetName) == 0)
		{
			return i;//找到的下标
		}
	}
	return -1;//找不到
}

void SearchName(Contact*con)
{
	char GetName[MAX_NAME] = { 0 };
	printf("请输入要查找的人的名字：\n");
	scanf("%s", GetName);
	int pos = FindMyName(con, GetName);//本身就是地址
	if (pos == -1)
	{
		printf("未找到\n");
		return;
	}
	else
	{
		printf("%-20s\t%-5s\t%-5s\t%-12s\t%-20s\t\n", "名字", "年龄", "性别", "电话", "地址");
		//打印数据
			printf("%-20s\t%-5d\t%-5s\t%-12s\t%-20s\t\n",
				con->data[pos].name,
				con->data[pos].age,
				con->data[pos].sex,
				con->data[pos].tele,
				con->data[pos].addr);
	}
}


void ModifyContact(Contact*con)
{
	char GetName[MAX_NAME] = { 0 };
	printf("请输入要修改的人的名字：\n");
	scanf("%s", GetName);
	int pos = FindMyName(con, GetName);//本身就是地址
	if (pos == -1)
	{
		printf("未找到\n");
		return;
	}
	else//重新输入一遍，覆盖它
	{
		printf("请输入名字：\n");
		scanf("%s", con->data[con->sz].name);
		printf("请输入性别：\n");
		scanf("%s", con->data[con->sz].sex);
		printf("请输入年龄：\n");
		scanf("%d", &con->data[con->sz].age);
		printf("请输入电话：\n");
		scanf("%s", con->data[con->sz].tele);
		printf("请输入地址：\n");
		scanf("%s", con->data[con->sz].addr);
		printf("修改成功\n");

	}


}
















