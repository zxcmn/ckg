#define _CRT_SECURE_NO_WARNINGS 1    


#define _CRT_SECURE_NO_WARNINGS 1    



//������ģ��
//1.���Ͷ���+��������contact.h
//2.����ʵ��contact.c
//3.��������test.c

//1.ͨѶ¼���ܹ����1000���˵���Ϣ
//2.ÿ���˵���Ϣ
//3.����+����+�Ա�+�绰+��ַ
//4.�����˵���Ϣ
//5.ɾ��ָ���˵���Ϣ
//6.�޸�ָ���˵���Ϣ
//7.����ָ���˵���Ϣ
//8.����ͨѶ¼����Ϣ


//  ---------------------------------------------
//  | 6_10_�汾����								|
//  |  ���������ݡ�								|
//  | ��̬�����İ汾							|
//  | 1.ͨѶ¼��ʼ�����ܴ��3����ϵ��			|
//  | 2.����ϵ�˴����ʱ����������2����Ϣ�ռ�	|
//	|											|
//  | 6_17_�汾����								|
//  | ��̬����+�ļ�����汾						|
//  ---------------------------------------------

#include"contact.h"



void menu()
{
	printf("*****************************************************\n");
	printf("*****1.add[�����ϵ��]       2.del[ɾ����ϵ��]*******\n");//���ӣ�ɾ��
	printf("*****3.search[������ϵ��]    4.modify[�޸���ϵ��]****\n");//���ң��޸�
	printf("*****5.sort[����д]          6.print[�鿴��ϵ��]*****\n");//���򣬴�ӡ
	printf("***************    0.exit[�˳�]   *******************\n");//�˳�
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

	//������ͨѶ¼��
	//PeoInfo tact[MAX_TACT]={0};//���������ض����contact����һ���ṹ������
	//int sz = 0;//��¼��ǰ�ü�����ϵ�ˣ���ӵ�ʱ��Ҫ֪���Լ��м������ˣ���ȷ���±꣩
	//����������������һ���ṹ�塿
	//����ͨѶ¼

	Contact con;//ͨѶ¼
	InitContact(&con);

	do
	{
		menu();
		printf("��ѡ��\n");
		scanf("%d", &input);
		switch (input) {
		case ADD:
			AddContact(&con);//���
			break;
		case DEL://ɾ��
			DelContact(&con);
			break;
		case SEARCH://����
			SearchName(&con);//ͨ�����ֲ���
			break;
		case MODIFY://�޸�
			ModifyContact(&con);
			break;
		case SORT://����
			//SortContact(&con);//��qosrt����д
			break;
		case PRINT:
			PrintContact(&con);//��ӡ
			break;
		case EXIT:
			WritePeoInfo(&con);//�����ϵ��
			free(con.data);
			con.data = NULL;
			printf("�˳�ͨѶ¼\n");
			break;
		default:
			printf("ѡ�����\n");
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
//		printf("��ѡ��\n");
//		scanf("%d", &input);
//		pArr[input]();
//	} while (1);
//	return 0;
//}
