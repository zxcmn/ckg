#define _CRT_SECURE_NO_WARNINGS 1    

#define _CRT_SECURE_NO_WARNINGS 1    


#include"contact.h"

//��ʼ��
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
	//���ߣ�Contact con={0};

	//�����ļ�
	ReadPeoInfo(con);

}

//�����ļ�
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
		//�ж�����
		Increase(con);
		con->data[con->sz] = tmp;
		con->sz++;
	}

	fclose(pf);
	pf = NULL;
}









//����ļ�
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

//����
void Increase(Contact*con)
{
	if (con->sz == con->per)
	{
		PeoInfo* pa = (PeoInfo*)realloc(con->data, (con->per + 2) * sizeof(PeoInfo));
		if (pa != NULL)
		{
			con->data = pa;
			con->per += 2;
			printf("���ݳɹ�\n");
		}
		else
		{
			printf("����ʧ��\n");
		}
	}

}

void AddContact(Contact* con)
{
	Increase(con);

	printf("���������֣�\n");
	scanf("%s", con->data[con->sz].name);
	printf("�������Ա�\n");
	scanf("%s", con->data[con->sz].sex);
	printf("���������䣺\n");
	scanf("%d", &con->data[con->sz].age);
	printf("������绰��\n");
	scanf("%s", con->data[con->sz].tele);
	printf("�������ַ��\n");
	scanf("%s", con->data[con->sz].addr);
	(con->sz)++;
	printf("���ӳɹ�\n");

}


void PrintContact(const Contact* con)
{
	int i = 0;
	printf("%-20s\t%-5s\t%-5s\t%-12s\t%-20s\t\n", "����", "����", "�Ա�", "�绰", "��ַ");
	//��ӡ����
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
		printf("ͨѶ¼Ϊ�գ�����ɾ��\n");
		return;
	}
	//����ɾ������
	printf("������Ҫ���ҵ��˵����֣�\n");
	scanf("%s", GetName);
	int pos = FindMyName(con, GetName);//������ǵ�ַ
	if (pos == -1)
	{
		printf("δ�ҵ�\n");
		return;
	}
	//ɾ��
	int i = 0;
	for (i = pos; i < con->sz - 1; i++)//ԭ���Ѻ��������ǰ��Ų��
	{
		con->data[i] = con->data[i + 1];
	}
	(con->sz)--;
	printf("ɾ���ɹ�:\n");
}

//������ϵ�˺Ͳ���ɾ����ϵ�˵�Ŧ��
int FindMyName(Contact* con, char GetName[])//����static�������ֻ�����Լ�Դ�ļ��ڲ����������˾Ϳ�����
{//����Դ�ļ��ò���
	int i = 0;
	for (i = 0; i < con->sz; i++)
	{
		if (strcmp(con->data[i].name, GetName) == 0)
		{
			return i;//�ҵ����±�
		}
	}
	return -1;//�Ҳ���
}

void SearchName(Contact* con)
{
	char GetName[MAX_NAME] = { 0 };
	printf("������Ҫ���ҵ��˵����֣�\n");
	scanf("%s", GetName);
	int pos = FindMyName(con, GetName);//������ǵ�ַ
	if (pos == -1)
	{
		printf("δ�ҵ�\n");
		return;
	}
	else
	{
		printf("%-20s\t%-5s\t%-5s\t%-12s\t%-20s\t\n", "����", "����", "�Ա�", "�绰", "��ַ");
		//��ӡ����
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
	printf("������Ҫ�޸ĵ��˵����֣�\n");
	scanf("%s", GetName);
	int pos = FindMyName(con, GetName);//������ǵ�ַ
	if (pos == -1)
	{
		printf("δ�ҵ�\n");
		return;
	}
	else//��������һ�飬������
	{
		printf("���������֣�\n");
		scanf("%s", con->data[con->sz].name);
		printf("�������Ա�\n");
		scanf("%s", con->data[con->sz].sex);
		printf("���������䣺\n");
		scanf("%d", &con->data[con->sz].age);
		printf("������绰��\n");
		scanf("%s", con->data[con->sz].tele);
		printf("�������ַ��\n");
		scanf("%s", con->data[con->sz].addr);
		printf("�޸ĳɹ�\n");

	}


}
















