#define _CRT_SECURE_NO_WARNINGS 1    

#include<stdio.h>
#include<string.h>

#define MAX_NAME 20
#define MAX_SEX 10
#define MAX_TELE 12
#define MAX_ADDR 30
#define MAX_PeoInfo 1000

//���Ͷ���
typedef struct PeoInfo//һ���˵���Ϣ
{
	char name[MAX_NAME];
	char sex[MAX_SEX];
	int age;
	char tele[MAX_TELE];//�绰
	char addr[MAX_ADDR];//��ַ

}PeoInfo;

typedef struct contact
{
	PeoInfo data[MAX_PeoInfo];
	int sz;//��¼��ǰͨѶ¼��Ч��Ϣ�ĸ���
}Contact;



void InitContact(Contact*con);//��ʼ��ͨѶ¼
void AddContact(Contact* con);//�����ϵ��
void PrintContact(const Contact* con);//��ӡ��ϵ��
void DelContact(Contact*con);//ɾ��
void SearchName(Contact*con);//����
void ModifyContact(Contact*con);//�޸�








