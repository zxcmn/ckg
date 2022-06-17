#define _CRT_SECURE_NO_WARNINGS 1    

#define _CRT_SECURE_NO_WARNINGS 1    


#include"contact.h"

//初始化
void InitContact(Contact* con)
{

	con->data = (PeoInfo*)calloc(MAX_PeoInfo,sizeof(PeoInfo));
	if (con->data==NULL)
	{
		perror("InitContact");
		return;
	}
	con->sz = 0;
	con->per = MAX_PeoInfo;
	/*con->sz = 0;
	memset(con->data, 0, sizeof(con->data));*/
	//或者：Contact con={0};

	//输入文件
	ReadPeoInfo(con);

}

//输入文件
void ReadPeoInfo(Contact*con)
{
	FILE* pf = fopen("D:/PeoInfo.txt","r");
	if (pf==NULL)
	{
		perror("fopen:");
		return;
	}

	PeoInfo tmp = { 0 };
	while (fread(&tmp,sizeof(PeoInfo),1,pf))
	{
		//判断增容
		Increase(con);
		con->data[con->sz] = tmp;
		con->sz++;
	}

	fclose(pf);
	pf = NULL;
}









//输出文件
void WritePeoInfo(Contact* con)
{
	FILE* Pf = fopen("D:/PeoInfo.txt","w");
	if (Pf==NULL)
	{
		perror("fopen:");
		return;
	}
	int i = 0;
	for (i = 0; i < con->sz; i++)
	{
		fwrite(con->data+i,sizeof(PeoInfo),1,Pf);
	}

	fclose(Pf);
	Pf = NULL;
}

//增容
void Increase(Contact*con)
{
	if (con->sz == con->per)
	{
		PeoInfo* pa = (PeoInfo*)realloc(con->data, (con->per + 2) * sizeof(PeoInfo));
		if (pa != NULL)
		{
			con->data = pa;
			con->per += 2;
			printf("增容成功\n");
		}
		else
		{
			printf("增加失败\n");
		}
	}

}

void AddContact(Contact* con)
{
	Increase(con);

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
	if (con->sz == 0)
	{
		printf("通讯录为空，无需删除\n");
		return;
	}
	//查找删除的人
	printf("请输入要查找的人的名字：\n");
	scanf("%s", GetName);
	int pos = FindMyName(con, GetName);//本身就是地址
	if (pos == -1)
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
int FindMyName(Contact* con, char GetName[])//加了static这个函数只能在自己源文件内部看到，别人就看不到
{//其他源文件用不了
	int i = 0;
	for (i = 0; i < con->sz; i++)
	{
		if (strcmp(con->data[i].name, GetName) == 0)
		{
			return i;//找到的下标
		}
	}
	return -1;//找不到
}

void SearchName(Contact* con)
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


void ModifyContact(Contact* con)
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
















