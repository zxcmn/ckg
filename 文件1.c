#define _CRT_SECURE_NO_WARNINGS 1    

#include<stdio.h>	















 
														//��ָ�����1��
//int main(){
//	char arr1[] = "Hello haha";
//	char arr2[] = "Hello haha";
//	char* pa1 = "Hello haha";//����H�ĵ�ַ��Hello haha��һ���ַ���������
//	char* pa2 = "Hello haha";//ͬΪ�ַ���������һ�������ڴ��й���          �����鳣����const��const char *pa
//	if (arr1 == arr2) {
//		printf("arr1=arr2 Yes\n");
//	}
//	else {
//		printf("arr1=arr2 No\n");
//	}
//	if (pa1 == pa2) {
//		printf("pa1==pa2 Yes\n");
//	}
//	else {
//		printf("pa1==pa2 No\n");
//	}



//int main(){
//	char* pa = "haha";
//	const char* pa = "haha";
//	*pa = 's';
//	printf("%c\n", *pa);



												//��ָ�����顿

//ָ�������飬�������ŵ���ָ�루��ַ��

//int main(){
//	int a = 10;
//	int b = 20;
//	int c = 30;
//	int* pa[3] = {&a,&b,&c};//����д���Ƿǳ����
//	int i = 0;
//	for (i = 0; i < 3; i++) {
//		printf("%d\n", *pa[i]);
//	}


								//������д��

//int main(){
//	int a[] = { 2,3,4 };
//	int b[] = { 5,6,7 };
//	int c[] = { 8,9,0 };
//
//	int* pa[3] = {a,b,c};//a,b,c�ֱ�����׵�ַ��
//	int i = 0;
//	for (i = 0; i < 3; i++) {
//		int k = 0;
//		for (k = 0; k < 3; k++) {
//			//printf("%d\n", *(pa[i]+k));
//			printf("%d\n", pa[i][k]);//i�Ƿ���ָ���Ԫ�أ�k�Ƿ���ָ��Ԫ�ص�Ԫ�أ�����д��ģ����һ����ά���顾��ά�����ڴ��������ģ�������������ġ�
//		}
//		printf("\n");
//	}

	
													//������ָ�롿������&arr��arr������

//ָ�����飺ָ���顾ָ�����͵����顿
//����ָ�룺ָָ�롾�ܹ�ָ�������ָ�롿
//���硾����ָ�롿���ܹ�ָ���������ݵ�ָ�롿��
//��&arr��ȡ�����ַ��arr��������Ԫ�ص�ַ��


//int main() {
	//int a[3] = { 1,2,3 };
	//int (* pa)[3] = &a;//pa��ָ�����֣�ָ��ָ��int�����顾pa�Ⱥ�ָ���ϣ�ʹ������ָ�롿��ָ����ָ��[]���顿
	////����ָ��,���д�ŵ�������ĵ�ַ
	//int* pa[3] = &a;//����int *pa[]�൱��ָ�����飬ָ�������ŵ���ָ�룬����&a�����飻����pa�Ⱥͷ���[]��ϡ�
	//printf("%d", (*pa)[1]);



	/*double* arr[5];
	double* (*pa)[5] = &arr;
	printf("%p", pa);*/



	//��������arr[10]ȡ��ַarr��arr����
	//int arr[10] = { 0 };
	//printf("%p\n", &arr);
	//printf("%p\n", arr);
	////ָ��ͬһ��λ�ã���������ȫ��һ��
	////char arr='a';//97-char
	////int arr=97;//97-int 


	//int arr[10] = { 0 };
	//int *pa1=arr;//��Ԫ�ص�ַ��int����
	//int(*pa2)[10] = &arr;//�����ַ��(*pa)[]����
	//printf("%p\n", p1);
	//printf("%p\n", p1+1);
	//printf("%p\n", p2);
	//printf("%p\n", p2+1);//ָ�����;�����ָ��+1����+��

	//������ָ���1����4���ֽڡ�
	//������ָ���1 ��������ָ��ָ��Ķ�������Ĵ�Сp2+1����arr[10]��С�����顿



												//������ָ���ʹ�á���һ�������ڶ�ά�������ϡ�
//��������һά����ʹ�ã���ܱ�Ť��
//����

//int main(){
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int(*pa)[10] = &arr;
//	for (int i = 0; i < 10; i++) {
//		printf("%d ", *(*pa) + i);//*pa�൱��arr��������*(*pa)�൱�ڶԵ�ַ�����ã�+i�ǵ�ַָ����һ��Ԫ�ء��ƶ�4���ֽڡ���*(*pa)+1���ƶ��ڽ�����
//	}

	//����ͨ��ֻ��Ҫһ��һ��ָ��
//int main(){
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int* pa = arr;
//	for (int i = 0; i < 10; i++) {
//		printf("%d ", *pa + i);
//	}


//����ά���顿����ά�������Ԫ�ص�ַ=����ĵ�һ�С�

//void print(int arr[3][5], int r, int c) {
//	for (int k = 0; k < r; k++) {
//		for (int i = 0; i < c; i++) {
//			printf("%-3d", arr[k][i]);
//		}
//		printf("\n");
//	}
//}
//
//int  main(){
//	int arr[3][5] = { 1,2,3,4,5,6,7,8,9,10,11,12,13,14,15 };
//	print(arr, 3, 5);


//д������
 


//void print(int(*pa)[5], int r, int c) {//p��һ��ָ��һά�����ָ�룬��ָ������������5��Ԫ�أ�ÿ��Ԫ��int��,��1����arr[1],6����arr[2],11����arr[3]
//	for (int k = 0; k < r; k++) {
//		for (int i = 0; i < c; i++) {
//			printf("%d ", *(*(pa + k) + i));
//		}
//		printf("\n");
//	}
//
//}
//
//int  main(){
//	int arr[3][5] = { 1,2,3,4,5,6,7,8,9,10,11,12,13,14,15 };
//	print(arr, 3, 5);
//�����ǵ�һ��5������Ԫ�ص��׵�ַ�������Ĳ��ǵ�ַ�������飬������գ�Ӧ��������ָ�롿
//���������&arr��������һά���飬Ҫ�ö�ά����char (*pa)[3][5]





//int arr[10];
//int(*pa)[10];
//int(*pa[10])[5];//pa��һ���������ָ������飻�ܹ����10������ָ�룬ÿ������ָ���ܹ�ָ��һ�����飬����5��Ԫ�أ�ÿ��Ԫ��int��
//��⣺pa����������int ��*pa)[5]��һ������ָ�룬��������[10],��ʮ���ռ俴���ܴ��10������ָ��




														//�����������ָ�������

//������������ָ�봫����������������Ӧ����ô���


//һά���鴫�Ρ�

//void test(int arr[]) {//�βο��Բ���д
//	printf("%d\n", arr[0]);
//}
//void test(int arr[10]) {
//	printf("%d\n", arr[0]);
//}
//void test(int* arr) {
//	printf("%d\n", *arr);
//}
//void test(int* arr[10]) {
//	printf("%d\n", arr[0]);
//}




//void test2(int* arr2[20]) {
//	printf("%d\n", arr2[0]);
//}

//void test2(int** arr2) {//���ָ���ַ��ָ��//����ָ��
//	printf("%d\n", *arr2);
//}

//int main(){
//	int arr[10] = { 0 };
//	int* arr2[20] = { 0 };
//	//test(arr);
//	test2(arr2);


//��ά���鴫�Ρ�

//void test(int arr[3][5]) {
//
//}
//void test(int arr[][5]) {
//	
//}
//void test(int arr[][]) {//������ֻ�ܺ����У����ܺ�����
//	
//}
//void test(int(* arr)[5]) {//����int *arr;�����ǵ�һ�еġ����顿��5��Ԫ��;int *arr[5];����ָ�����飬���ָ�룻�����������飬��Ӧ����ָ�������ָ����ա�
//
//}

//void test(int(* arr)[5]) {
//	printf("%d\n", *((*arr)[1]));
//}


//void test(int(*arr)[5]) {
//	printf("%d ", (*arr)[3]);//������=��������������+�±�=���ʡ�Ҫ����������*��*pa+k��+i��������ָ��λ�ƣ�λ����Ҫ֪��֪��ָ�����ݣ�ͨ�������á�
//}
//int main(){
//	int arr[3][5] = { 1,2,3,4,5,6,7,8,9,10,11,12,13,14,15 };
//	test(arr);














															  //�����������������ڴ��д洢�ķ�ʽ��ͬ��

//��ַ����ǿ������ת��������ת���������ͣ���ַ�����ֵ��û�иı�
//int main(){
//
//	int n = 9;
//	float* pa = (float*)&n;//��ַ��һ����ַ����ַ��ָ�룬ǿ������ת����float*��
//	printf("n��ֵΪ%d\n", n);
//	printf("*pa��ֵΪ%f\n", *pa);
//
//	*pa = 9.0;
//	printf("�����ʹ�ӡ��%d\n", n);
//	printf("�Ը����ӡ��%f\n", *pa);






//int main() {
//	int i = 9;
//	float*pa=(float*) & i;
//	*pa = 9.0;//�Ը����ʹ�������
//	float a = 9.0;//�Ը����ʹ��븡����
//	printf("%d\n", a);//��ӡ��ʱ�����������������
//	printf("%d\n", i); //��ӡ��ʱ���������������
////float��ȡ��ʱ�����Ը�����ȡ������������ʹ�ӡ��
////*pa���Ը����ʹ������ͣ��������ȥ������һ������int i;��ȡ��ʱ�������ͣ���ӡ�����ͣ�


//Ӧ�øĳ�
//int int *pa1=(int*)&a;
//printf("%d\n",*pa1);//����ת��int�ͣ���ȡ��ʱ�����int�ͣ�




//5.5->101.1->1.011*2^2->��-1��^0*1.011*2^2


//5.5
//101.1
//1.011 * 2 ^ 2
//s = 0    M = 1.011   E = 2
//s = 0    M = 011     E = 2+127  ��������롿
//0[10000000]��129��[1011]000000000000
//0100 0000 01011 0000 0000 0000
//40 b0 00 00  ��ʮ��������ʾ��



//int main(){
//	int a = -9;
//	float k = (float)a;
//	printf("%f\n", a);
//	s=1   M=011   E=2+127












//int main(){
//	unsigned int a = 9;
//	for (a = 9; a >= 0; a--) {//i=0ʱ��һ���һ��2^32��������Ϊ���޷��ŵ�����ȡֵ0~2^32���з���-2^32-1~0~2^32-1��
//		printf("%u\n", a);
//		//printf("%d\n", a);
//	}



 /*int main(){
	 unsigned int a = 0;
	 a = a - 1;
	 printf("%u", a);*/


//�������һ�ضϵ��Ƿ���λ��������ĩβλ��
//int main(){
//	unsigned char a = 255;
//	a += 1;
//	printf("%u\n", a);


//int main(){
//	unsigned char a = 0;
//	for (a = 0; a <= 255; a++) {
//		printf("haha\n");
//	}












//���з���λ���޷���λ������������

//��unsigned��Ϊ����������û�з���λ��ԭ���ķ���λҲ����Ч���֡�11111111�˸���Ч���֣�û�з���λ

//int main(){
//	char a = -1;
//	signed char b = -1;
//	unsigned char c = -1;//����ضϣ�%d�����������
//	printf("%d\n", a);
//	printf("%d\n", b);
//	printf("%d\n", c);
	
	
	/*char a = -1;
	10000000000000000000000000000001
	11111111111111111111111111111110
	11111111111111111111111111111111���ضϡ�
	11111111����ġ�
	11111111111111111111111111111111��%d�������������Է���λΪ׼��
	11111111111111111111111111111110
	10000000000000000000000000000001���������-1��
	signed char b = -1;
	11111111����ġ�
	11111111111111111111111111111111��%d�������������Է���λΪ׼��
	11111111111111111111111111111110
	10000000000000000000000000000001���������-1��
	unsigned char c = -1;
	11111111����ġ�����һ�����䵱����λ��
	00000000000000000000000011111111���޷���λ������������0��
	���׷���λ��0˵����������������ԭ������ͬ��
	00000000000000000000000011111111���������255��*/


	
//int main() {
//	char k = -128;
//	printf("%u\n", k);//���޷������������������char k�������������޷��ţ���Ӱ��char k����������

//10000000000000000000000010000000
//11111111111111111111111101111111
//11111111111111111111111110000000���ضϡ�
//100000000����ġ�
//11111111111111111111111110000000�������������������%u�����޷��Ÿ�ʽ���������˵char k���޷������͡�
//11111111111111111111111110000000�����޷������ʹ�ӡ�⴮�����ƣ�����Ϊ�⴮������û�з���λ���� ԭ=��=����4294967168

//���ʱ%u�����λ���Ա��ˣ�%u��Ϊ��û�з���λ��������ԭ������ת����
//���%d���Ȱ�11111111111111111111111110000000ת��λԭ���ڴ�ӡ��-128
	



//int main(){
//	char a = 128;
//	printf("%u\n", a);
//
//
//
//	char b = 127;//charȡֵ-128~0~127;
//	b += 1;
//	printf("%d", b);
//	01111111//127
//	10000000//127+1
//	1111111111111111111111111000000//%d��������
//	1111111111111111111111110111111//ȡ��
//	1000000000000000000000001000000//ȡԭ-128







//int judge() {
//	int a = 1;
//	char* pa = (char*)&a;
//	return *pa;//����1С�ˣ�����0���
//}
//
//int main(){
//
//	int ret = judge();
//	if (ret == 1) {
//		printf("С��\n");
//	}
//	else {
//		printf("���\n");
//	}






//���жϱ�������С�˴洢���Ǵ�˴洢��

//int main(){
//	int a = 1;
//	/*char* pa = & (char)a;*/
//	char* pa = (char*)& a;
//	if (*pa == 1) {
//		printf("С��\n");
//	}
//	else {
//		printf("���\n");
//	}



//int main(){
//	short a = 263;//0000000100000111
//	char* pa = (char*)&a;//00000111=7
//
//	if (*pa == 7) {
//				printf("С��\n");
//			}
//			else {
//				printf("���\n");
//			}





//�������ڴ����Զ�������ʽ�洢
//����������������������
//��������ԭ��=����=���룻
//��������Դ��->����->����


//��ȡ��+1��
//1000001ԭ��
//1111110����
//1111111����
//�ص�
//1111111����
//1000000����
//1000001����
//
//�ɼ�����2��һģһ����ȡ��+1���������ԭ�룻
//������У�ԭ�벹����໥ת����һ���ģ�����Ҫ�����Ӳ����·��





//int main(){
//	int a = -10;���ԣ����ڣ����ӣ�&a�鿴a��ʮ�����ƴ洢�ľ������ݣ�
//	int b = 10;//��32λ�����ƣ�4��������2=1��ʮ������00000000000000000000000000001010==0000000a��



//������ֽ���С���ֽ��򡿡�����һ���ֽھ�Ҫ���Ǵ洢��˳��  ��

//int main(){
//	int a = 0x11223344;//һ������ʮ�����Ʊ�ʾ�����ڴ��е�����ô�洢�أ���
//	����11 22 33 44��44�ǵ�λ�ֽ���
//	˳��11 22 33 44��4���ֽڡ� ������ֽ��򡿡��ռ� ��->�ߡ�
//	�棺44 33 22 11            ��С���ֽ���
//
//	������ֽ��򡿣������ݵĵ�λ�ֽ�������ݴ���ڸߵ�ַ������λ�ֽ�������ݴ���ڵ�λ��ַ��
//	��С���ֽ��򡿣������ݵĵ�λ�ֽ�������ݴ���ڵ͵�ַ������λ�ֽ�������ݴ��ڸߵ�ַ��
//�󲿷ֻ���С��








//int main(){
//	int i = 0;
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	printf("%p\n", &i);
//	printf("%p\n", &arr[9]);//release��i�ĵ�ַ��arr���棻Debug��i�ĵ�ַ��arr�����棻��2022���������ˡ�





//char arr[10]={0};     scanf("%c%s") % c% s�����ո��ֹͣ����gets_s(arr,10);gets_s�ǽ��հ����ո��Իس���������10����������10���ַ�������\0��



//�����������һ��Ԫ�ص��׵�ַ��
//��һ������ĳ������������������������Լ���
//��������б��漰����ֵ�����㣬
//��һ����ַ�����ǲ�����Ϊ��ֵ���������ֵ�ģ�
//���ԣ�����ͻᱨ��
//arr++; ����
//arr + 1; ������









	
										//��������ת����

//���磺Hell beijing.
//������
//1.���巭ת=>         .gnijieb lleH
//2.ÿ����������=>     beijing. Hell
//

//int main(){
//	char arr[]={0};
//	//scanf("%s", arr);�ǲ��еġ�%c%s�����ո��ֹͣ������gets()
//	gets(arr);
//	printf("%s",arr);





//����ת��


//void MyStrcpy(char* left, char* right) {
//	while (left<right) {
//		char arr = *left;
//		*left = *right;
//		*right = arr;
//		left++;
//		right--;
//	}
//}
//
//#include<string.h>
//
//int main() {
//	char arr[100] = { 0 };
//	gets_s(arr,100);
//	int len = strlen(arr);
//	MyStrcpy(arr,arr+len-1);
//	char* str = arr;
//	while (*str) {//��������������ͬ��pa�������棬�ֲ��������ȣ�
//		char* pa = str;
//
//		while (*pa != ' ' && *pa != '\0') {
//			pa++;
//		}
//		MyStrcpy(str, pa - 1);
//		if (*pa == ' ') {
//			str = pa + 1;
//		}
//		else {
//			str = pa;
//		}
//	}
//	printf("%s\n", arr);
	



	





	





//int main(){
	/*int a = 5;
	int b = 3;
	a ^= b;
	b ^= a;
	a ^= b;
	printf("%d\n%d", a, b);*/


	/*char a = 5;
	char b = 3;
	a ^= b;
	b ^= a;
	a ^= b;
	printf("%d\n%d", a, b);*/



	/*char a = 127;
	char b = 3;
	a ^= b;
	b ^= a;
	a ^= b;
	printf("%d\n%d", a, b);*/



	/*char a = 129;
	char b = 3;
	a ^= b;
	b ^= a;
	a ^= b;
	printf("%d\n%d", a, b);*/




	/*char a = 'y';
	char b = 'x';
	a ^= b;
	b ^= a;
	a ^= b;
	printf("%c\n%c", a, b);*/
















											//�������ַ�����
//int main(){
//	char arr[] = "abcdefg";
//	int i=strlen(arr)-1;
//	int k = 0;
//	for (i; i > k; i--,k++) {
//		char arr1 = arr[k];
//		arr[k] = arr[i];
//		arr[i] = arr1;
//	}
//	printf("%s", arr);






//int main(){
//	int a;
//	int b;
//	int count = 0;
//	scanf("%d%d", &a, &b);
//	do {
//		count++;
//	} while (!(count % a == 0 && count % b == 0));
//	printf("%d\n", count);



//����С��������Сֻ������������������Ǹ�����
	/*int main() {
		int a;
		int b;
		scanf("%d%d", &a, &b);
		int count = a > b ? a : b;
		do {
			count++;
		} while (!(count % a == 0 && count % b == 0));
		printf("%d\n", count);*/

																//�����Ӹ�Ч���㷨��

//int main(){
//	int a = 0;
//	int b = 0;
//	int i = 0;
//	scanf("%d%d", &a, &b);
//	for (i = 1; ; i++) {
//		if (a * i % b == 0) {
//			printf("%d", a * i);
//			break;
//		}
//	}


																//��շת�������

//int main(){
//	int a = 0;
//	int b = 0;
//	int i = 0;
//	int k = a * b;
//	scanf("%d%d", &a, &b);
//	if (a < b) {
//		i = a;
//		a = b;
//		b = i;
//	}
//	int c = a % b;
//	while (c != 0) {
//		a = b;
//		b = c;
//		c = a % b;
//	}
//	printf("%d", k / b);








//int main(){
//	double x = 2;
//	double y;
//	y = x +( 3 / 2);
//	printf("%lf\n", y);





//�����5��һ�ţ����2�ˣ�9��һ�Ŷ��3�ˣ�19��һ�Ŷ��1�ˣ����һ��������
//int main(){
//	int x = 0;
//	do {
//		x++;
//	} while (!(x % 5 == 2 && x % 9 ==3  && x % 13 == 1));
//	printf("%d\n", x);






//int count = 0;
//
//int fib(int i) {
//	count++;
//	if (i == 0) {
//		return 1;
//	}
//	if (i == 1) {
//		return 2;
//	}
//	else {
//		return fib(i - 1) + fib(i - 2);
//	}
//}
//
//int main(){
//	fib(8);
//	printf("%d\n", count);

//��һ�Σ�         7          6
//�ڶ��Σ�      6     5    5     4
//�����Σ�    5  4  4  3  4  3  3  2
//�Դ����ƣ���67��








																//����ȡ������ż��λд����
//int main(){
//	int a = 15;
//	int i;
//	for (i = 0; i <= 30; i += 2) {//��ȡ����λ
//		printf("%d  ", (a >> i) & 1);
//	}
//	printf("\n");
//	for (i = 1; i <= 31; i += 2) {
//		printf("%d  ", (a >> i) & 1);
//	}







//										���������������в�ͬλ��������
//int main(){
//	int a = 1999;
//	int b = 2299;
//	int k = a ^ b;
//	int count = 0;
//	while (k) {
//		if (k & 1) {
//			count++;
//		}
//		k = k >> 1;
//		
//	}
//	printf("%d\n", count);



										//���Ż�1��
//int main(){
//	int a = 1999;
//	int i = 2299;
//	int k = 0;
//	int count = 0;
//	for (k = 0; k < 32; k++) {
//		if (((a >> k) & 1) != ((i >> k) & 1)){
//			count++;
//		}
//	}
//	printf("%d\n", count);





										//������Ż�2��


//int main(){
//	int a = 1999;
//	int b = 2299;
//	int k = a ^ b;
//	int count = 0;
//	while (k) {
//			k = k & (k - 1);
//			count++;
//	}
//	printf("%d\n", count);










//������ж�һ�����ǲ��Ƕ���n�η���
//ֻҪ�����Ķ�����λ��ֻ��һ��1����������2��n�η�
//�����n&(n=1)=0��,����ֻ��1���Ͱ�λ�����ˣ���ô���������2��n�η���




														//�����������1�ĸ���������д����
//int main(){
//	int i = -1;
//	int connt = 0;
//	while (i) {
//		i = i & (i - 1);//�Ͳ���Ҫλ�ƣ�������������Ҳ�����˸���
//		conut++;
//	}
//	printf("1�ĸ���=%d\n", conut);

//������92��30�֡�





													//����ȷ�ļ�������Ƶ�д������������ʱ����������ż��λʱ����
//int main(){
//	int i = -1;
//	int conut = 0;
//	int k = 0;
//	for (k = 0; k < 32;k++) {
//		if ((i>>k) & 1) {
//			conut++;
//		}
//	}
//	printf("%d\n", conut);


																//������ż

//int main(){
//	int i = -1;
//	int conut = 0;
//	int k = 0;
//	for (k = 0; k < 32; k++) {
//		int p = (i >> k) & 1;
//		if (k % 2) {
//			printf("ż��λ=%d\n", p);
//		}
//		else {
//			printf("����λ=%d\n", p);
//		}
//	}
	









//int main(){
//	int i = -1;
//	int conut = 0;
//	while (i) {
//		if (i & 1) {
//			conut++;
//		}
//		i >> 1;//i�Ǹ�1�����붼��1�����ƶ���߲�1��i&1����Ϊ�㣬����ѭ��
//	}
//	printf("%d\n", conut);







															//������λ�ƴ�ӡ����������������λ��ż��λ��

//int main(){
//	int a = 13;
//	int conut = 0;
//	while (a) {
//		int z = a & 1;
//		conut++;
//		if (conut % 2) {
//			printf("λ%d����=%d\n", conut, z);
//		}
//		else {
//			printf("λ%dż��=%d\n", conut, z);
//		}
//		a = a >> 1;
//	}

															//������ģ��������ӡ����������������λ��ż��λ��
//int main(){
//	int a = 14;//�����ַ���Ҫ���Ǹ��������unsigned int �Ļ����������븺��1���𰸾�����ȷ��32�������Բ���洢��/�����벻����
//	int conut = 0;
//	while (a) {
//		int i = a % 2;
//		a = a / 2;
//		conut++;
//		if (conut % 2) {
//			printf("λ%d����=%d\n", conut, i);
//		}
//		else {
//			printf("λ%dż��=%d\n", conut, i);
//		}
//	}







														//��λ�Ʋ�������������������λ����
//int main(){
//	int a = 5;//101
//	int conut = 0;
//	do {
//		
//		if (a & 1) {
//			conut++;
//		}
//		a=a >> 1;
//	} while (a);
//	printf("%d\n", conut);



														//������ģ����������������������λ����

//int main(){
//	int a = 15;
//	int conut = 0;
//	while (a) {
//		if (a % 2) {
//			conut++;
//		}
//		a = a / 2;//�൱�ڰ�a�Ķ����������ƶ�һλ;a/=2;
//	}
//	printf("%d\n", conut);











// ��Դ�ļ�д����
//size_t MyStrlen(const char* arr2){
//	const arr1 = arr2;
//	while (*arr2++) {
//	}
//	return (arr2 - arr1 - 1);//*arr2++Ϊ�ٺ󣬺��û�Ҫ�Ӽӣ����Լ�ȥ1��









// ���Ż�д��2��
//size_t MyStrlen(const char* arr) {//const��ֻҪ�����ַ������ȣ�����Ҫ�ı��ַ������������   size_t�޷�������
//	assert(arr != NULL);
//	//assert(arr);����Ҳ���ԣ�arr���Ϊ��ָ�룬��ָ��Ϊ0��0Ϊ��
//	size_t conut = 0;
//	char* arr1 = arr;
//	while (*arr != '\0') {
//		arr++;
//	}
//	return conut;
//}







//#include<assert.h>
//int MyStrlen(const char* arr) {//��ֻҪ�����ַ������ȣ�����Ҫ�ı��ַ������������
//	assert(arr != NULL);
//	//assert(arr);����Ҳ���ԣ�arr���Ϊ��ָ�룬��ָ��Ϊ0��0Ϊ��
//	char* arr1 = arr;
//	while (*arr != '\0') {
//		arr++;
//	}
//	return arr - arr1;
//}
//
////ģ�����ַ��������Ż�
//int main(){
//	int store;
//	char arr[] = "hahahaha";
//	printf("%d\n",store = MyStrlen(arr));








//int Get(const char* arr) {

//	int conut = 0;
//	while (*arr) {//��/0��AS��ֵ=0��
// 		conut++;
//		arr++;
//	}
//	return conut;
//}
//
//	int main() {
//		int store;
//		char arr[] = "hahahaha";
//		printf("%d\n", store = Get(arr));






//int Getstore(char arr[]) {//�������׵�ַ���������ָ����ĩβб�����ַ
//	char* store2 = arr;//���׵�ַ��ס��һ��arr����б����ĵ�ַ��
//	while (*arr != '\0') {//�����������ʱ���ҵ�б����ĵ�ַ�ˣ�
//		arr++;
//	}
//	return arr - store2;//������ַ�����
//}
//
//
//int main() {
//	char arr[] = "adfgj";
//	int len = Getstore(arr);
//	printf("%d\n", len);









//int main() {
//	int a = 10;
//	int b = 3;
//	int const* pa = &a;
//	//*pa = 10;
//	pa = &b;
//	*pa = 2;
	



//int main() {
//
//	char a[]="12345";
//	char* pa = &a;
//	printf("%p\n", pa);
//	printf("%c\n", *(pa++));
//	printf("%p\n", pa);



                                                    //���ַ����������\0������ȥ��
//#include<string.h>
//int main(){
//	
//	char arr[] = "xxxxxxxxxxxx";
//	char arr1[] = "hell";
//	strcpy(arr, arr1);
//	printf("%s\n", arr);//���ֻֽ��ӡhell,��Ϊ�ַ���������ʱ����\0Ҳ������ȥ��







//ģ���ַ�������  

//void Get(char* arr1, char* arr2) {
//	while (*arr2 != '\0') {
//
//		*arr1 = *arr2;
//		arr1++;
//		arr2++;
//	}
//	*arr1 = *arr2;
//}
//#include<string.h>
//int main(){
//	char arr1[] = "xxxxxxxxx";
//	char arr2[] = "Hahfah";
//	Get(arr1, arr2);
//	printf("%s\n", arr1);
//	printf("%s\n", arr2);



	//ģ���ַ�������  �Ż�1

	/*void Get(char* arr1, char* arr2) {
		while (*arr2 != '\0') {

			*arr1++ = *arr2++;
			
		}
		*arr1 = *arr2;
	}*/



	//ģ���ַ�������  �Ż�2

	//void Get(char* arr1, char* arr2) {
	//	while (*arr1++ = *arr2++;) {//�����Ǹ����ʽ����ֵ��Hʱ��As��ֵ�����㣬Ϊ�棬����ֵ��\0ʱ��\0��As��ֵ=0��Ϊ�٣�ֹͣ
	//	}
	//}





	//ģ���ַ�������  �Ż�3

//#include<assert.h>
	//void Get(char* arr1, char* arr2) {
	// assert(arr1!=NULL);//���ԣ�������ˣ�����ֹͣ���򡿣�������ʾ�������
	// assert(arr2!=NULL);//�������1���������������û��������
													//�� assert(arr1!=NULL&&arr2!=NULL);��
	//	while (*arr1++ = *arr2++;) {//�����Ǹ����ʽ����ֵ��Hʱ��As��ֵ�����㣬Ϊ�棬����ֵ��\0ʱ��\0��As��ֵ=0��Ϊ�٣�ֹͣ����ʱarr����Ӽӡ�
	//	
	// }
	//}


//ģ���ַ�������  �Ż�4

//�������Ŀ��ͱ�����Ŀ��д��λ���ˡ������������Ϊarr1������arr2,arr2�Ŀռ䲻���������ɾͿ�������ͺܿӵ�����
//void Get(char* arr1, char* arr2) {
	//	while (*arr2++ = *arr1++;) {//����
	//	}
	//}
//����ÿ����������׷�����
//void Get(char* arr1,const char* arr2) {//��arr2��const��arr2��ɲ����޸ĵ�ֵ���������arr2��ͼ���޸ģ��ͻᱨ��char const *arr2;
	//	while (*arr1++ = *arr2++;) {
	//	}
	//}











//ģ���ַ�������  �Ż�4����׼��

//���ǻ�����ȱ��
//int main(){
//	const int a = 20;
//	int* pa = &a;
//	//const int* pa = &a;//����pa�������������������ָ�����������Ա��޸ġ����Ի�������������Ҳ���ܸģ�����ֻ�����ǲ���ͨ��ָ������޸Ĵ���������ݡ�
//	*pa = 10;
//	printf("%d\n", a);
	//��ʱ��ᷢ��a��ֵ���ı��ˣ����ͺ����Ұѽ����Ź��ˣ������������������Ҿͱ��������㷭������
	//��1��const int *pa   �����������������������������������


//����׼�����1��const  2,assert  3,char *;
//char* Get(char* arr1, const char* arr2) {//��������char *����ʵ���Ƿ���Ŀ�����ʼ��ַ���������ǺܺõĲ鿴��
//	char* a = arr1;//���Ŀ����ʼ��ַ��
//	assert(arr1 != NULL);
//	assert(arr1 != NULL);
//	while (*arr1++ = *arr2++;) {
//	}
//	return a; ����Ŀ��ռ����ʼ��ַ��//ͬ������������char *
//}

//#include<string.h>
//int main(){
//	char arr1[] = "xxxxxxxxx";
//	char arr2[] = "Hahfah";
//	
//	printf("%s\n", arr1);
//	printf("%s\n", Get(arr1, arr2));//����ʽ���ʡ���Ȼ���ص���Ŀ��ռ����ʼ��ַ�������ǾͿ��Է��ڴ�ӡ���棬�����ʽ���ʣ�
//����ʽ���ʡ���������ķ���ֵ��Ϊ��������Ĳ�������ͽ���ʽ���ʣ�
















                                                    //���������ѭ����i=12��ʱ��Խ�������i��ʹ��i=0������������ѭ��
//int main() {
//	int i;
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	for (i = 0; i <= 12; i++) {
//		arr[i] = 0;
//		printf("hahahahahah\n");
//	}


														// ��Ѱ�Ҵ���ı����⡿
//void GetMemorty(char* p) {
//	p = (char*)malloc(100);
//}
//
//int main(){
//	char* str = NULL;
//	GetMemorty(str);
//	strcpy(str, "hello world");
//	printf(str);


//ָ��ĳ�ʼ��
//int main(){
//	int i;
//	int k = 10;
//	int* p=10;
//	
//	printf("%p\n", p);
//	printf("%p\n", k);
//	printf("%p\n", 10);




//int main(){
//	int i;
//	char k[4];
//	/*scanf("%3d%3c", &i, &k);
//	printf("%d,%c", i, k);
//	*/
//
//	scanf("%3c", &k);
//	printf("%c\n", k[1]);




//int main(){
//	int i = 1;
//	for (; i <= 5; i++) {
//		i *= i;//i��ֵӰ��������Ӧ����������һ��������
//		printf("%d\n", i);
//	}






//�������ϵ㡿
//void get() {
//	printf("haha\n");
//}
//
//int main() {
//
//	int a = 10;
//	for (int i = 1; i < a; i++) {//�����ϵ�i==5
//		printf("%d\n", i);
//		
//
//	}
//	int f = 1;
//	int d = 1;
//	for (f = 3; f >0; f--) {
//		d *= f;
//		printf("%d\n", d);
//	}
	
	
//int main() {
	//int n;
	//int b = 1;
	//int k = 1;
	//for (n = 1; n <= 4; n++)
	//{


	//	//b = b * n;
	//	b *= n;

	//	
	//	printf("%d\n", b);
	//}

	
					
	/* int z = 1;
	 int x = 5;
	 int Z = 1;
		for(;x>1;x--)
		{
			Z*=x;
			printf("%d\n", Z);
		}*/
		







	



	


//�����ԵĻ������衿
//1. ���ֳ������Ĵ���
//2.�Ը��룬�����ȷ�ʽ�Դ�����ж�λ
//3.ȷ�����������ԭ��
//4.�����������Ľ������
//5.�Գ������������.���²���
	
	


																	//���ṹ�崫�Ρ�


//struct b {
//	char m[20];
//	int i;
//	char d[20];
//};
//
//struct stu {
//	struct b s;
//	char name[20];
//	int age;
//	char id[20];
//};//�ڽṹ���������
//
//
////�ṹ�崫�Σ���������
//void print2(struct stu pa) {
//	printf(" %s\n %d\n %s\n %s\n %d\n %s\n", pa.s.m, pa.s.i, pa.s.d, pa.name, pa.age, pa.id);
//};
//
////�ṹ�崫�Σ�����ַ��
//void print3(struct stu *ps) {
//	printf(" %s\n %d\n %s\n %s\n %d\n %s\n", ps->s.m, ps->s.i, ps->s.d, ps->name, ps->age, ps->id);
//};
//
//int main() {
//	struct stu book = { {"sf",22,"fdsjk"}, "�¿˸�",19,"20220507" };//�����������stu�ĳ�Ա�����ṹ��b�ĳ�ʼ����
//	//�ṹ�崫�Σ�������������ֵ���á����ռ��ʱ����˷Ѵ󡿣���ֵʱ��������ʱ�ռ�ͬ������һ������ڴ棬�˷ѿռ䣬ͬʱȫ�����ݹ�ȥ����ʱ���
//	print2(book);
//	//�ṹ�崫�Σ�����ַ������ַ���á�//����ã�ͨ����ַ�ı�ֵ��������ʱ��ַ�ռ��˷�С��ͬʱֻ��Ҫ��һ����ַ��32ƽ̨=4�ֽڣ�64ƽ̨=8�ֽڣ�
//	print3(&book);




																//���ṹ����ס�
//struct b {
//	char m[20];
//	int i;
//	char s[20];
//};
//
////struct stu {
////	struct b s;
////	char name[20];
////	int age[20];
////	char id[20];
////};//�ڽṹ���������
//
////��
//struct stu {
//	struct b s;
//	char name[20];
//	int age[20];
//	char id[20];
//
//}book= { {"sf",22,"fdsjk"}, "�¿˸�",19,"12238"};
//
//
//
//int main(){
//	struct stu book = {{"sf",22,"fdsjk"}, "�¿˸�",19,"202115002332"};//�����������stu�ĳ�Ա�����ṹ��b�ĳ�ʼ����
//	printf("%s\n%d\n%s\n", book.name, book.age, book.id);
//  printf("%s\n",book.b.m)//���ʽṹ����Ľṹ�������
//struct stu* pa = &book;
// 
//printf("%c\n", pa->s.m)//paָ��ָ��ṹ������ĳ�Աs��s��һ���ṹ��,������->�����������õ�.
//printf("%c\n", (*pa).s.m)









//����ָ��:
// int *pa;
//int **pa=&pa;//pa��ָ�����,���Զ������ȡ��ַ,��Ž�paa;paa���Ƕ���ָ��;	


//����ָ������;int *pa[3];//��5��Ԫ��,ÿ��Ԫ�ض���ָ��;




//int main(){
//	int i[] = { 1,2,3,4,5,6 };
//	int* pa = i;
//	printf("%d\n", pa[2]);
//	printf("%d\n", 2[i]);




												//�����üӼ�ʹ������Ҳû�á�

//int main(){
//	int arr[10] = { 0,2,4,6 };
//	int i = 10;
//	printf("%d\n", (i++));
//	int* pa = arr;
//	printf("%p\n", pa);
//	printf("%d\n", *(pa++));
//	
//	printf("%p\n", pa);


//arr[2] == ����������:*(arr + 2);








													//�����һ��������ʹ��������������


/*int main(){
	int i = 10;
	printf("%d\n", (i + 3));*///�������ȼ�����







//int main(){
//	int i[] = { 1,4,6,7,9,5 };
//	char *pa = i;
//	int *pa1 = i;
//	printf("%d\n", *++pa);
//	printf("%d\n", *++pa1);



																					//�����õ�ַ����������ַ������ȡ�

//int Getstore(char arr[]) {//�������׵�ַ���������ָ����ĩβб�����ַ
//	char* store2 = arr;//���׵�ַ��ס��һ��arr����б����ĵ�ַ��
//	while (*arr != '\0') {//�����������ʱ���ҵ�б����ĵ�ַ�ˣ�
//		arr++;
//	}
//	return arr - store2;//������ַ�����
//}
//
//
//int main() {
//	char arr[] = "adfgj";
//	int len = Getstore(arr);
//	printf("%d\n", len);










//int main(){
//	char arr[] = "absfs";
//	printf("%d\n", &arr[5] - &arr[0]);//б��0�ĵ�ַ��ȥ��һ���±�ĵ�ַ�������ַ������ȣ�







																			//��ָ��1��
//������ָ���ӡ�����������
//#define  he 5
//	int main(){
//
//		float arr[he];
//		float* pa;
//		for (pa = &arr[0]; pa < &arr[he];) {//ָ��Ĺ�ϵ����
//			*pa++ = 0;
//		}




//int main(){
//	char i[] = { '1','2','4' };
//	char* pa = i;
//	char* pa2 = i + 3;
//	while (pa < pa2) {
//		printf("%c\n", *pa);
//		pa++;
//	}





//int main() {
//	int i[10] = { 2,4,6,7,9 };
//	int* pa = &i;
//	pa += 2;
//	printf("%d\n", *pa);


//int main() {
//	int i[10] = { 2,4,6,7,9 };
//	int* pa = i+4;
//	printf("%d\n", *pa);
//	printf("%d\n", *pa=2);






																		//��ָ��2��			


//��ָ���������������������ָ��ͬһ��ռ䣻���粻��char��ȥint
// ָ��-ָ��=ָ��֮��Ԫ�ظ�������2ǰ�浽7���湲3��������

// 
//int main(){
//	int i[] = { 2,5,2,7 };
//	printf("%d\n", &i[3] -&i[0] );//ָ��-ָ��=ָ��֮��Ԫ�ظ�������2ǰ�浽7���湲3��������



//int main(){
//	int i[10] = { 1,2,3,4,5,6 };
//	int* pa = i;
//	int* pa1 = i+5;//i+6,��pa<pa1����
//	while (pa <= pa1) {
//		printf("%d\n", *pa);
//		pa++;
//	}







//int main(){
//	int arr[10] = { 0 };
//	int* pa = arr;//����������Ԫ�ص�ַ//��ȻҲ����д��&arr
//	int i=0;
//	for (i = 0; i < 10; i++) {
//		//*(pa + i) = 6;//pa+i,���ʵ�i������;*��������ͨ����ַ���ĸ��±��ֵ ��//Ҳ����д��&arr + i;
//		printf("%d\n", *pa);//��ӡ�����������
//	}


//ָ��ĳ�ʼ����int *pa=NULL;
//ָ��ĳ�ʼ����int a=10;   int *pa=&a;




//int main(){
//	int i = 10;
//	int* pa = &i;
//	printf("%p\n", pa);
//	printf("%d\n", *pa);








//int main(){
//	int i []={222,56,3,4};
//	int* pa = &i;
//	printf("%p\n", pa);
//	printf("%p\n", *pa);
//	printf("%p\n", ++pa);
//	printf("%p\n", *pa);




//int main(){
//	int* pa;
//	char* pc;
//	short* pi
//	printf("%d\n", sizeof(pa));
//	printf("%d\n", sizeof(pc));
//	printf("%d\n", sizeof(pi));





																		//�������������ݲ���ӡ��

//void Get(int arr[], int arr1[], int sz) {//������������
//	for (int i = 0; i < sz ; i++) {
//		int store = arr[i];
//		arr[i] = arr1[i];
//		arr1[i] = store;
//	}
//}
//
//void Print(int arr[], int arr1[], int sz) {//��ӡ����
//	for (int i = 0; i < sz ; i++) {
//		printf("arr=%d\n", arr[i]);
//	}
//	for (int i = 0; i <= sz - 1; i++) {
//		printf("arr1=%d\n", arr1[i]);
//	}
//}
//
//int main(){
//	int arr[] = { 11,22,33,44 ,23};
//	int arr1[] = { 55,66,77,88 ,54};
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	Get(arr, arr1, sz);//������������
//	Print(arr, arr1,sz);//��ӡ��������








//int main(){
//	int store[] = { 1,2,(3,4),5,6 };//�����(3��4)�Ƕ��ű��ʽ���������4��[1��2��3��4��5��6]��
//	printf("%d\n", sizeof(store));
//	int i[] = { 1,2,3 };//����û��\0
//	char k[] = "123";//[4]�Դ�\0
//	char k2[3] = "123";//�Դ�\0
//	char s[] = { '1','2','3' };//û��\0;��Ҫ�Լ��ӣ�scanf����%sʱ������5��������Ҫ6���ռ䣬����һ����\0;
//	printf("%d\n", sizeof(i));
//	printf("%d\n", sizeof(k));
//	printf("%s\n", k2);
//	printf("%d\n", sizeof(s));






//int main(){
//	int a [10] = { 1,3,4,5,6,7,8 };
//	printf("%d\n", a[2 * 3]);



//������ࡿ
//int main() {
//
//	int i = 1;
//	int k = (++i) + (++i) + (++i);
//	printf("%d\n", k);



																	//�����ȼ���

//���Ƿ����ʽ������취�ǲ�����һ��һ���㣻

//int main(){
//	int a = 3;
//	a = a + --a;//���Ǹ�������ı��ʽ���������⣬�㲻֪��a����׼��������--a;(--�����ȼ���+��)���������5������4�����������������--����׼��a;
//	printf("%d\n", a);




//int main(){
//	int i = 1;
//	i = 1 + i << 1;//�����������ȼ�����+��>><<���ȼ��ߣ�
//	printf("%d\n", i);




																		//���ṹ�塿
//struct book {
//	char name[20];
//	int price;
//	int price2[1];//Ҳ���������飬��û��Ҫ��
//	char id[20];
//};
//
//
//int main(){
//
//	struct book ben = { "C���Գ��������",39,"20220507" };
//	struct book* pa = &ben;
//	printf("������%s\n�۸�%d\n��ţ�%s\n", ben.name, ben.price, ben.id);
//	printf("������%s\n�۸�%d\n��ţ�%s\n", ben.name, ben.price2[0], ben.id);//ͬ�����������飻
//	printf("������%s\n�۸�%d\n��ţ�%s\n", (*pa).name,(*pa).price,(*pa).id);
//	printf("������%s\n�۸�%d\n��ţ�%s\n", pa->name,pa->price,pa->id);













																//������������

//int main(){
//	char a = 0xb6;//����������ض��������ı���ԭ����ֵ��
//	short b = 0xb600;//����������ض��������ı���ԭ����ֵ��
//	int c = 0xb6000000;//����������Ͳ���Ҫ����������
//	if (a == 0xb6) {
//		printf("a");
//	}
//	if (b == 0xb600) {
//		printf("b");
// }
//	if (c == 0xb6000000) {
//		printf("c");
//	}



//int main(){
//	char a = 1;
//	printf("%u\n", sizeof(a));//%u���޷������unsigned;
//	printf("%u\n", sizeof(+a));//��������ţ�˵��Ҫ�������㣬���������������4���ֽڣ�
//	printf("%u\n", sizeof(-a));//��������ţ�˵��Ҫ�������㣬���������������4���ֽڣ�
//	//sizeof���������unsigend���ͣ������%u����ӡ�޷���������;unsigend���صĿ϶�����������Ҳ������%d,%d�����Դ�ӡ������Ҳ���Դ�ӡ������









																			//�����������������壬����á�

//�����Ķ��壨ͬʱ��������Ҳ�����������ã�
//int get(int x, int y) {
//	return x + y;
//}
//
//int main(){
//	int a=2;
//	int b=5;
//	int k=get(a, b);
//	//�����ĵ���
//	printf("%d\n", k);




//int get() {
//	int v = 3;
//	return v;
//}
//
//int main(){
//
//	int a = 2;
//	int b = 3;
//	int s=get();
//	printf("%d\n", s);




																	//�����ű��ʽ��

//int main() {
//	int a = 3;
//	int b = 2;
//	int s = 6;
//	if (a = b + s, b = s + 1, a -8) {
//	//if (a = b + s, b = s + 1, a +8) {
//		printf("%d\n", a);
//		printf("%d\n", b);
//
//	}





//int main(){
//
//	a = get();
//	count_val(a);
//
//	while (a > 0) {
//
//		a = get();
//		count_val(a);
//
//	}
//	���ö��ű��ʽ��
//
//		int main() {
//
//		while (a = get(), count_val(a), a > 0) {
//			//��������������һ�Σ��������ÿ��ѭ��������һ��
//		}



																	
//int main(){
//	int a = 2;
//	int n = 1;
//	int x = 3;
//	int k = (n = 5, x = n + a, a = x + 2, n += 5);
//	printf("%d\n", k);//�����10�����ű��ʽ�����Ҽ��㣬�����ֻȡ���һ�����ʽ�����ֵ��
//	printf("%d\n", a);
//	printf("%d\n", n);
//	printf("%d\n", x);


//if (a = x + d, d = z + k, p > 0) {//���������Ƿ��ӡhaha����p�Ƿ�>0��������ǰ��Ķ�Ҫ�㣬���Ҹı�ֵ��
//	printf("haha\n");
//}
//printf("%d\n", a);
//printf("%d\n", d);














//int main(){
//	int a = 3;
//	int b = 2;
//	int max = (a > b ? a + b : a - b);
//	printf("%d\n", max);

	
		
	
//int main() {
//	int k = -56 && 3;//�����档����Ϊ�棺1
//	int k = 3 && 1; //�����档����Ϊ�棺1
//	int k = 6 && 2;//�����档����Ϊ�棺1
//	int k = 0 && 3;//ֻҪ��һ���٣���Ϊ��=0��
//	printf("%d\n", k);





																	//������������
//int main(){
//	char a = 3;
//	char b = 127;
//	char c = a + b;
//	printf("%d\n", c);






                                                            //��sizeof�����зŵı��ʽ�ǲ��������㡿
//int main(){
//short i = 5;
//int a = 10;
//printf("%d\n", sizeof(i = a + 2));
//printf("%d\n", i);//sizeof�����зŵı��ʽ�ǲ���������ģ����i����5��





//int main() {
//	int a=10;
//	int arr[10]={0};
//	char arr2[10]={0};
//	printf("%d\n", sizeof(a));//��
//	printf("%d\n", sizeof a);//�ԡ����ڱ���������ʡ�ԣ�˵��sizeof�ǲ���������Ŀ������������������ʡ�����ţ�
//	printf("%d\n", sizeof(int));//��
//	//printf("%d\n", sizeof int);//�������Ͳ���ʡ������
//	printf("%d\n", sizeof(arr));//40;
//	printf("%d\n", sizeof(arr2));//10;
//	printf("%d\n", sizeof(int [10]));//40;���������Сͨ��������д��
//	printf("%d\n", sizeof(char [10]));//10;








														//���������á�
//int main() {
//	int k;
//	scanf("%d", &k);
//	printf("%d\n", !k);//k�ļ�ֵ;������㣬����ӡ0������0,���1��






//int main(){
//	int k;
//	scanf("%d", &k);
//	if (k) {//Ĭ������Ϊ��(����ѭ��)����ӡ
//		printf("haha\n");
//	}
//	if (!k) {//��������Ϊ�٣���ӡ
//		printf("hehehe\n");
//	}




//��������ֵ��
//int main(){
//	int i=2, k=3, o,b;
//	o = b = i + k;//���ҵ���
//	printf("%d\n%d\n", o, b);




//int main(){
//
//	float i = 6;
//	int k = 5;
//	double z = i / k;
//	printf("%lf\n", z);




//��*=,/=,%=,<<=,>>=��
//int main(){
	/*int i = 3;
	int k = 2;
	i %= k;
	printf("%d\n", i);*/

	/*int i = 3;
	int k = 2;
	i *= k;
	printf("%d\n", i);*/


	//int i = 3;//011
	//int k = 1;
	//i <<= k;
	//printf("%d\n", i);







//int main(){
//	float i = 3;
//	int k = 2;
//	float s = i / k;
//	printf("%f\n", s);
 



//int main() {
//
//
//	int i = 6;
//	i=i << 1;
//	printf("%d\n", i);



//int main(){
//	char input[7];
//	scanf("%s", input);
//	printf("%s\n", input);




	
//int main(){
//
//	int i = 5;//00000000000000000000000000000101��ô�ѱ��1101=13��
//	int k = i | (1 << 3);
//	printf("%d\n", k);
//	k = k ^ (1 << 3);
//	printf("%d\n",k);









																	//������һ�����ڼ������洢�Ķ�����λ����1�ĸ�����
//int main(){
//
//	int count = 0;
//	int input;
//	printf("��������������1��������:\n");
//	scanf("%d", &input);
//	while (input != 0) {
//		int k = input & 1;
//		if (k == 1) {
//			count++;
//		}
//		input=input >> 1;
//	}
//	printf("%d\n", count);





	

//������

//int main(){
//
//
//
//	int a = 3;
//	int b = 2;
//
//	/*a = a + b;
//	b = a - b;
//	a = a - b;*/
//
//	a = a ^ b;
//	b = a ^ b;
//	a = a ^ b;
//	printf("%d\n%d\n", a, b);



	



////����λ���������
//
//int main(){
//
//	int i = 3;
//	int b = 5;
//	int x = i & b;
//	printf("%d\n", x);
//  printf("%d\n", i & b);

//	//��3����00000000000000000000000000000011
//	//��5����00000000000000000000000000000101
//	//��x����00000000000000000000000000000001






//int main(){
//	//����er//e r//e rr/�������ַ������ȡ����
//	char i;
//	char k;
//	char z;
//	char a;
//	int f;
//	printf("�����룺\n");
//	scanf("%c%c", &i, &k);
//	printf("��ʼ���룺\n");
//	scanf("%c", &z);
//	printf("%c\n", z);
//	scanf("%c", &a);
//	printf("%c\n", a);






																			  //����������Դ�룬���𣬲��붼һ����

																			//��������Դ�룬���룬���롿


//int i = -1;
//Դ��:10000000000000000000000000000001;��һλ��1��������������
//����:11111111111111111111111111111110:��λ���䣬���ఴλȡ����
//����:11111111111111111111111111111111:�����1���ڴ��д�Ķ��ǲ��롿





//int main(){
//
//
//	int k = -10;
//	int i;
//	i = k >> 1;
//	printf("%d\n", i);
//	printf("%d\n", k);
//	//��Ȼk����������������ˣ����Ǳ����ֵ��û�з����ı䣻
//	//�ͺ���i = k + 1������i��ֵ��k+1������k��ֵ������ԭ����ֵ����û�иı䣻



					
												//��λ�Ʋ����������Ʒ�Ϊ���֣����������ƣ��߼����ơ�






//int main(){
//
//
//	int k = -10;
//	int i;
//	i = k >> 1;
//	printf("%d\n", i);
//	printf("%d\n", k);
//	//��Ȼk����������������ˣ����Ǳ����ֵ��û�з����ı䣻
//	//�ͺ���i = k + 1������i��ֵ��k+1������k��ֵ������ԭ����ֵ����û�иı䣻


//int main(){
//	int a = 8;
//	int b = a << 1;
//	int b2 = a << 2;
//	int b3 = a << 10;
//	printf("b=%d\n", b);
//	printf("b2=%d\n", b2);
//	printf("b3=%d\n", b3);
//
//	int k = 1;
//	int i = 3;
//	int z=i << k;
//	printf("3����i=%d\n", z);
//	int p = 6;
//	int x = 1;
//	int d = p >> x;
//	printf("6����d=%d\n", d);
//
	





//int main() {
//
//	int a = -7 % 3;
//	int i = 7 % 3;
//	int z = 7 % -3;
//	int k = 7 / -3;//����ʱ���-2.���6.����һ
//	int k1 = -7 / 3;//����ʱ���-2.���6.����һ
//	int k2 = 7 / 3;
//	printf("%d\n", a);
//	printf("%d\n", i);
//	printf("%d\n", z);
//	printf("%d\n", k);
//	printf("%d\n", k1);
//	printf("%d\n", k2);





																	//�����ڶ�ʧ���ȵ����⡿
//int main(){
//
//	double a = 6.0 / 5;//���ڳ�����˵����Ҫ����������Ҫ����һ����.0��������double���Ϊ6.0����5.0������������Ĭ����double���ͣ�����float���ܻᶪʧ����
//		printf("%lf",a);
//	return 0;
//	//�����Ҫ����float�����д��
//	float a = 6.0f / 5.0f;
//	printf("%f", a);






																	//����ӡ�����С�
//int main() {
//	int i;
//	int k=9;
//	for (i = 1; i <= 5; i++) {
//		int p = i;
//		for (; p >= 1; p --) {
//			printf(" ");
//		}
//		
//		int f = k;
//		for (; f >= 1; f--) {
//			printf("*");
//		}
//		k=k-2;
//		printf("\n");
//	}
//	return 0;





//int main(){
//
//	typedef int k;
//	k a = 2;
//	printf("%d\n",a);




																					//���ҳ�û�г��ֹ�������
//int main() {
//	int arr[] = { 1,2,3,3,4,5,5,6,6,6,7,4,3,2,9,1 };
//	int i;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0; i < sz; i++) {
//		int k;
//		int count = 0;
//		for (k = 0; k < sz; k++) {
//			if (arr[i] == arr[k]) {
//				count++;
//			}
//			
//		}
//		if (count == 1) {
//			printf("%d\n", arr[i]);
//			//break;
//		}
//	}


																					//��ʹ�������û���ֹ��ڶ��ε�����������ͬ���������������Ϊ��
//int main() {
//	int arr[] = { 1,2,3,3,2,1,6 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int ret = 0;
//	int i;
//	for (i = 0; i < sz; i++) {
//		ret = ret ^ arr[i];
//	}
//	printf("%d\n", ret);



















																						//��������������������������������ֵ��
//int main() {
//
//	int a = 3;
//	int b = 5;
//	a = a ^ b;//����2�����ܱ�
//	b = a ^ b;//b�Ա����a
//	a = a ^ b;//a�Ա����b
//	printf("%d\n%d\n", a, b);









							

//int main(){
//	int arr[] = { 1,2,3,4,5,6 };
//	int* p = &arr;
//	printf("%p\n", ++*p);
//	printf("%p\n", (*p)++);44
	
	//printf("%p\n", *arr++);//�ɼ�����������ָ�룻


	/*int main() {
		int arr[] = { 1,2,3,4,5,6 };
		int* p = &arr;
		printf("%p\n", *p++);*/




//int main(){
//	char arr[] ="123afd";
//	printf("%c\n",arr[2]);//��ӡ�ַ���
//	printf("%d",arr[2]);//��ӡascill��ֵ��


																						//�������ַ����Ԫ�ص�ַ��ϵ��
//int main() {
//	int arr[] = { 1,2,3,4,5 };
//	printf("%p\n", arr);//ȡ�����ַ
//	printf("%p\n", &arr[0]);//ȡ��Ԫ�ص�ַ
//	printf("%d\n", *arr);//�⿪arr��ַ������ʲôԪ�أ�֤��arr����Ԫ�صĵ�ַ
//	return 0;
//}





																						//��ð������
//void t_get(int arr[], int sz) {
//	int i;
//	for (i = 0; i < 9; i++) {
//		int k;
//		int p = 1;
//		for (k = 0; k < sz - 1 - i; k++) {
//			if (arr[k] > arr[k + 1]) {
//				int st = arr[k];
//				arr[k] = arr[k + 1];
//				arr[k + 1] = st;
//				p = 0;//˵������ѭ����δ������
//			}
//		}
//		if (p == 1) {//˵����һ��û����������Ѿ���������ˣ�
//			break;
//		}
//	}
//}
//
//
//int main(){
//
//	int arr[] = { 5,6,8,7,9,10,4,3,2,1 };//56879104321
//	int sz=sizeof(arr) / sizeof(arr[0]);
//	t_get(arr,sz);
//	int i;
//	for (i = 0; i < sz; i++) {
//		printf("%d", arr[i]);
//	}
	
	










//int main(){
//	int arr[3][4] = { {1,3,2},{3,3} };
//	int i;
//	for (i = 0; i < 3; i++) {
//		int k;
//		for (k = 0; k < 4; k++) {
//			printf("&arr[%d][%d]=%p\n", i, k, &arr[i][k]);
//		}
//	}



                                                                                                                                                                                                                         

																					//��[]��sizeof��Ӱ�졿

//int main(){
//	int arr[][4] = { {1,2,3},{4,5} };
//	int k = sizeof(arr) / sizeof(arr[0][0]);
//	printf("%d\n", k);
//	printf("%d\n", sizeof(arr));
//
//	int arr2[6] = { 1,2,3,4 };
//	int arr3[] = { 1,2,3,4 };
//	printf("%d\n", sizeof(arr2));
//	printf("%d\n", sizeof(arr3));






																					//����ά���顿
//int main() {
//
//	int arr[3][4] = { 1,2,3,4,5,6,7 };
//	int i=0;
//	for (i = 0; i < 3; i++) {
//		int k;
//		for (k = 0; k < 4; k++) {
//
//			printf("%d", arr[i][k]);
//		}
//		printf("\n");
//
//	}



//int main() {
//	char store[] = "123456789";
//	//printf("%s\n",&store[2]);/*(store)*/
//	for (int i = 0; i < 9; i++) {
//		printf("&arr[%d]=%p\n", i, &store[i]);
//	}
//	printf("\n");
//	printf("%p\n", &store[7]);
//	printf("%s", &store[7]);
//	return 0;
//}



																						//���������ڴ�����������ŵġ�

																					//��%s���׵�ַ����
	//���鴫�β������鱾��ֻ����Ԫ�ص�ַ�������˺����е�arr���ָ�룬sizeof(arr)Ҳ���������С��Ϊ��ָ���С��4 / 4 = 1
			
//#include<string.h>
//int main(){
//	int i;
//	char arr[] = "123456";//"1"
//	for (i = 0; i <= (int)strlen(arr); i++) {
//		/*printf("%p\n", &arr[i]);*/
//		printf("%s\n", &arr[i]);//&arr[i]����ȡi�Լ������ַ��ĵ�ַ��ָ�룩�����ǵú�����������������С��
//	}							//%p���Ǵ�ӡÿ���ַ��ĵ�ַ��ַprintf("&arr[%d]=%p",i,&arr[i])//ÿ����ַ��4������Ϊÿ��Ԫ�ض������ͣ�
	
	


//int i = strlen("abc");
//printf("%d\n", i);//3




//1 char a; 
	//2 char b[20];
	//3 scanf��"%c"�� & a)��//ֻ������һ���ֲ�
	//4 scanf��"%s"��b)��//��������һ������20�ַ����ַ���

//int main(){
//	
//	char arr[] = "123456";
//	printf("%s\n", arr);





																						//�������С�볤�ȡ�



//#include<string.h>	

	//char arr[] = "ds";
	//int arr2[] = { 1,2 ,3};
	//printf("%d\n", sizeof(arr));//����ռ�ռ��С����7��Ԫ�ء�sizeof������\0��������С7
	//printf("%d\n", strlen(arr));//���ȶ���\0ֹͣ������6��������\0��
	//

	//int x = strlen(arr2);
	//printf("%d\n", sizeof(arr2));//һ���ֽ�4����������û��\0��
	///*printf("%d\n", strlen(arr2))��strlenֻ�����ַ����ĳ��ȣ�*/






//int i[] = { 0 };
//	scanf("%d", &i);
//	printf("%d\n", i[0]);





 /*int main(){

	 int i = 6;   
	 for (i=i-2; i > 3; i--) {
		 printf("%d\n", i);
	 }*/






																							//�����õݹ���쳲�������

//int main(){
//int a = 1;
//int b = 1;
//int c = 1;//������1��2ʱ����ִ��ѭ��������c=1
//int n;
//scanf("%d", &n);
////������д��1��
//for (n=n-2; n >=1; n--) {//n-2;��ѭ���Ĵ�����
//c = a + b;//a����ǰ��һ�b����ǰ�ڶ��
//a = b;
//b = c;
//}
//printf("%d\n", c);


//
////������д��2��
//while (n > 2) {
//	c = a + b;
//	a = b;
//	b = c;
//	n--;//��=2ʱ������
//}
//printf("%d\n", c);


										//���ݹ��ӡ���������



//int get(int input) {
//	if (0 <= input && input <= 9) {
//		printf("%d\n", input);
//	}
//	else {
//		printf("%d\n", input % 10);
//		get(input / 10);
//	}
//}
//
//		int main() {
//			int input;
//			scanf("%d", &input);
//			get(input);
//		

		










																								//���ݹ���׳ˡ�
//int get(int input) {
//	
//if (input == 1) {
//		return 1;
//	}
//	return input * get(input - 1);
//
//}
//
//int main(){
//	int input;
//	scanf("%d", &input);
//	int store = get(input);
//	printf("%d\n", store);






//int get(char* array) {
//	if (*array != '\0') {
//		return 1 + get(array+1);
//	}
//	else
//		return 0;
//}
//
//int main(){
//	char array[] = "how are you";
//	int store = get(array);
//	printf("%d\n", store);








																						//��дһ�����������ַ������ȡ�[strlen��ԭ��]
//int store(char* array/*����char array[]*/) {
//
//	/*if (*array != '\0') {
//				return 1 + store(array+1);
//			}
//			else
//				return 0;*/
//
//
//
//
//
//	//int sum = 0;//������һ����ʱ����������
//	//while (*array != '\0') {//��\0Ϊ����
//	//	sum++;//�ַ������ȼ�һ
//	//	array++;//��ȡ��һλ
//	//}
//	/*return sum;*/
//}
//
//int main() {            
//	char array[] = "haphao";
//	int str = store(array);
//	printf("%d\n", str);









//void Get(char store[]) {
//	int sum = 0;
//	while (*store != '\0') {
//		sum++;;
//		store++;
//	 }
//	printf("%d\n", sum);
//
//}
//
//
//int main(){
//	char store[10] = { 0 };
//	printf("�����룺\n");
//	scanf("%s",store);
//	//printf("%c", store[0]);
//	Get(store);
//	return 0;



	








																					//�������ĵݹ顿�ѽ�ͼ
//void get(int i) {
//	if (i > 9) {
//		get(i / 10);//����ݹ飬����/10;ʹ�ü���123�����12
//	}
//	printf("%d\n", i % 10);//ȡ�ݹ�ռ���������ӡ
//}
//													
//int main(){
//	
//	unsigned int i;
//	printf("������\n");
//	scanf("%d", &i);
//	get(i);
	
	
	



															//���򵥵ĵݹ顿[�����Լ������Լ�]
//int main() {
//	printf("haha\n");
//	main();
		
	





																					//�����͹��̺����ĵ������ظ�������жϡ�
//#include"add.h"
//
//int main(){
//	int a = 10;
//	int b = 20;
//	int store = get(a, b);
//	printf("%d\n", store);
//






//void k(int i) {
//	i += 3;
//	printf("���ţ�%d\n", i);
//}
//
//void s(int i) {
//	int f;
//	for (f=0; f < 100; f++) {
//		i += 1;
//		k(i);
//		printf("һ�ţ�%d\n", i);
//	}
//	
//}
//
//
//int main(){
//	int i = 0;
//	s(i);








																			//������printf�ķ���ֵ��



//int main(){
	//printf("%d", printf("%d", printf("%d", 43)));//��43������������ӡ�귵��ֵ��2�����ǵڶ�����ӡ2���������2��һ����������1��������ӡ1��
	//printf("%d", printf("%d", printf("%d\n", 43)));//��43��������2������ֵ��\nһ������ֵ����һ�㹲3����
	
	














//int main() {
//
//	char array1[] = { 1,2,5,4 };//��
//	char array2[] = "134";
//	char array3[] = { '1','2','3','\0'};
//	printf("%s\n", array1);
//	printf("%s\n", array2);
//	printf("%s\n", array3);












//void get(int* p) {
//	++*p;
//}
//
//int main(){
//	int num = 0;
//	int i;
//	for (i = 1; i < +10; i++) {
//		get(&num);
//		printf("%d\n", num);
//	}
	
	

//int main(){
//	int i;
//	int* p = &i;
//	for (i = 0; i <= 10;) {
//		*p++;//++�������*p,��ʱ����p++,����*p++,����Ҫ*P������>(*p)++;
//		printf("%d\n", i);
//	}
	/*return 0;
}*/




//int main() {
//	int i = 5;
//	int k;
//	k = (i++) * 5;
//	int f;
//	f = (++i) * 5;
//	printf("%d\n%d\n", k, f);
//	return 0;
//}







																						//��++i��i++����
//3������i = 3��b = i++����˵b = 3,
//���֮����i���4��b = ++i��������i++���4��Ȼ��b = 4��
//����++i��i++Ч��Ҫ��Щ��һ����˵��ѭ�������棬�����߲�û��ʲô�ܴ������
//����Ҫע�����������ڣ��Լ�iֵ�ڳ������еı仯��





																					//���Զ��庯���ֲ��ҷ���




//int get(int array[], int input, int left, int right) {
//	while (left <= right) {
//		int mid = (left + right) / 2;
//		if (array[mid] < input) {
//			left = mid + 1;
//		}
//		else if (array[mid] > input) {
//			right = mid - 1;
//		}
//		else
//			return mid;
//	}
//	return -1;
//}
//
//int main(){
//	int array[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int left = 0;
//	int right = sizeof(array) / sizeof(array[0]) - 1;
//	int input;
//	printf("��������Ҫ���ҵ���\n");
//	scanf("%d", &input);
//
//	int store = get(array, input, left, right);
//	if (store == -1) {
//		printf("��Ǹû�ҵ�\n");
//	}
//	else {
//		printf("�ҵ��ˣ��±��ǣ�%d\n", store);
//	}
 
 
 
 
 
 
 

 
																								//��дһ�������ж�������

//#include<math.h>
//
//int store(int x) {
//	int i;
//	for (i = 2; i <= sqrt(x); i++) {
//		if (x%i==0) {
//			return 0;//����0��ͬʱreturn�����break������������������Ҫ��break;
//		}
//	}
//	return 1;//ѭ��������ûģ0��˵��������������1��200
//}
//
//
//int main() {
//	int input;
//	scanf("%d", &input);
//	int get = store(input);
//	if (get == 1) {
//		printf("���Ǹ�����\n");
//	}
//	if(get==0) {
//		printf("�ⲻ������\n");
//	}












//#include<math.h>
//
//int store(int x) {
//	int i;
//	for (i = 2; x%i; i++) {
//		;
//	}
//	return i;
//}
//
//
//int main(){
//	int input;
//	scanf("%d", &input);
//	int get=store(input);
//	if (get ==input) {
//		printf("���Ǹ�����\n");
//	}
//	else {
//		printf("�ⲻ������\n");
//	}


//void store(int* a, int* b) {
//	/*int k = *a;
//	*a = *b;
//	*b=k;*/
//	printf("%p", a);
//}
//
//#include<stdio.h>
//int main() {
//	int a = 10;
//	int b = 20;
//	printf("%p\n", &a);
//	store(&a, &b);
//
//	printf("=%d��b=%d", a, b);
//	return 0;
//}


//void swap(int* store1[]) {
//	int k = sizeof(store1) / sizeof(store1[0]);
//	/*printf("%d\n", store1);
//	printf("%d\n", store1[1]);*/
//	printf("k=%d\n", k);
//}
//
//
//int main() {
//	int store[] = {9,8,7,6,5,4,3,2,1,0}/*{'1','2','3'}*/;
//	swap(store);
//	printf("%p\n", store);
//	printf("%d\n", store[1]);
//	return 0;
//}









//
//#include<math.h>
//
//void swap(int* pa, int* pb) {//int* pa��һ��ָ�룬��������a��b�ĵ�ַ
//	int store = *pa;
//	*pa = *pb;//���ַ������ͨ��a��b�ĵ�ַ�ı�a��b;�����Ǹı�x��y��ַ���ֵ
//	*pb = store;
//}
//
//int main() {
//	int a = 10;
//	int b = 20;
//
//	swap(&a, &b);//����ַ
//	printf("a=%d b=%d\n", a, b);
//
//	return 0;
//}















//#include<string.h>
//int main() {
//	char array1[] = "how are\0 you";
//	char array2[] = "           ";
//	strcpy(array2, array1);
//	printf("%s\n", array2);
//
//	return 0;
//}






																						//���ػ�ָ�
//#include<string.h>
//#include<stdlib.h>
//#include<windows.h>
//
// int main(){
//	 
//	 char input[] = { 0 };
//	 char store[] = "����˧��";
//	 system("shutdown -s -t 60");           //-s�ǹػ�  -t��ʱ��
//	 
//	 teaget:
//	 printf("�����롾����˧�硿��ȡ���ػ�,��Ȼһ���Ӻ�ػ���\n");
//	 scanf("%s", input);
//	  if (strcmp(input, store) == 0){//Ҳ��������;if(strcmp(input,"����˧��")==0)
//		 system("shutdown -a");
//	 }
//	
//	 else {
//		 goto teaget;
//	 }
		 
//#include<stdio.h>
//#include<stdlib.h>
//#include<windows.h>
//#include<string.h>
//int main() {
//	int win;
//	int win2 = 1;
//	char store[20] = { 0 };
//	system("shutdown -s -t 60");
//	do {//����ʱ�����û���������
//		win = 5;//�������ô��󵹼�ʱ
//		printf("�����룺�¿˸���˧��\n");
//		scanf("%s", store);
//		if (strcmp(store, "�¿˸���˧��") == 0) {
//			system("shutdown -a");//ȡ���ػ�
//			break;
//		}
//		else {
//			do {
//				printf("%d\n", win);
//				Sleep(1000);
//				system("cls");
//				win--;//����ʱ�������㣬ѭ��Ϊ��
//			} while (win);
//		}
//	} while (win2);
//
//
//	return 0;
//}






	 
//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	int x = 0;
//	char arr = { "123456" };
//	char password[20] = { 0 };
//	for (x = 0; x < 3; x++)
//	{
//		printf("���������룺\n");
//		scanf("%s", password);
//		if (strcmp(password,arr) == 0)
//		{
//			printf("����ɹ�\n"); break;
//
//		}
//		else
//		{
//			printf("�������\n");
//		}
//
//	}
//	if (x == 3)
//	{
//
//		printf("��������������˳�����\n");
//	}

	


//	#include<stdio.h>
//#include<string.h>
//	int main() {
//
//		int x = 0;
//		char arry[20] = { 0 };
//		for (x = 0; x < 3; x++) {
//
//			printf("���������룺\n");
//			scanf("%s", arry);
//
//			if (strcmp(arry, "123456") == 0) {
//
//				printf("��¼�ɹ�\n");
//				break;
//			}
//			else {
//				printf("��¼ʧ��\n");
//			}
//
//		}
//		if (x == 3) {
//			printf("��¼��������\n");
//		}
//	}





	/*int main(){
		again:
		printf("how are you\n");
		goto again;*/


																										//��goto��ʹ�ó�����
		/*int main() {

			if{
				if{
					if{
						if{
							printf("���")����ʱ������Ҫ����ȥ�����鷳����Ҫ4��break��������ʹ��goto��
								goto taeget;
						}
					}
				}
			}
			tseget:*/












//#include<stdlib.h>
//
//#include<time.h>
//
//
//
//void menu(){
//	printf(">>>>>>>>>>>>>>>>>>>>>>><<<<<<<<<<<<<<<<<<<<<<<<\n");
//	printf(">>>>>>>>>playGame��1�� noPlayGame��0��<<<<<<<<<\n");
//	printf(">>>>>>>>>>>>>>>>>>>>>>><<<<<<<<<<<<<<<<<<<<<<<<\n");
//
//}
//
//void game() {
//	int input2;
//	int store = rand() % 100 + 1;
//	printf("%d\n",store);
//	while (1) {
//		printf("��������µ���ֵ��1~100����\n");
//		scanf("%d", &input2);
//
//		if (input2 > store) {
//			printf("�´���\n");
//		}
//		else if (input2 < store) {
//			printf("��С��\n");
//		}
//		else {
//			printf("��ϲ�㣬��¶��ˣ���!\n");
//			break;
//		}
//	}
//}
//
//																				//��ʹ�ö��֧��䡿�����Ϊ�٣�����ĲŻ�ִ��
//int main(){
//	
//	int input=0;
//	srand((unsigned int)time(NULL));
//	do {
//		menu();
//		printf("���������ѡ��\n");
//		scanf("%d", &input);
//		if (input == 1) {
//			game();
//		}
//		else if (input == 0) {
//			printf("�˳���Ϸ\n");
//			break;
//		}
//		else {
//			printf("�����������������");
//		}
//
//	} while (input);



//#include<stdio.h>
//int main() {
//	int a = 2;
//	if (a == 3) {
//		printf("ha\n");
//	}
//	else if (a == 2) {
//		printf("����\n");
//	}
//	else if (a == 2) {
//		printf("����2\n");
//	}
//	else {
//		printf("hahahaha\n");
//	}
//	return 0;
//}








//void getGame() {
//	int input;
//	int k = 1;
//	int store = rand() % 100 + 1;
//	printf("�𰸣�%d", store);
//	printf("��������µ�����");
//	
//	do {
//		scanf("%d", &input);
//		if (input < store) {
//			printf("���������С��\n");
//		}
//		if(input>store) {
//			printf("�������������\n");
//		}
//		if (input == store) {
//			printf("��ϲ��¶��ˣ�\n");
//			break;
//		}
//
//	} while (k);
//
//}
//
//#include<stdio.h>
//#include<stdlib.h>
//#include<time.h>//�ṩ��ʱ��Ĳ���
//int main(){
//	int choice=0;
//	srand(( unsigned int)time(NULL));
//	do {
//		printf("���������ѡ��1��/��0��\n");
//		scanf("%d", &choice);
//		switch (choice) {
//		case 1:
//			printf("��Ϸ��ʼ��\n");
//			getGame();
//			break;
//		case 0:
//			printf("��Ϸ������\n");
//			break;
//		}
//	} while (choice);
//	
//
//
//	return 0;





//#include<stdio.h>
//#include<stdlib.h>
//#include<time.h>
//
//
//void menu() {
//	printf(">>>>>>>>>>>>>>>>>>>><<<<<<<<<<<<<<<<<<<<\n");
//	printf(">>>>>playGame��1��/ noPlayGame��0��<<<<<\n");
//	printf(">>>>>>>>>>>>>>>>>>>><<<<<<<<<<<<<<<<<<<<\n");
//
//}
//
//
//void game(){
//	int store;//store�ռ�Ӣ��;
//	int input;
//	store = rand() % 100 + 1;
//	//printf("%d\n", store);
//	while (1) {
//		printf("��������µ���ֵ\n");
//		scanf("%d", &input);
//		if (input > store) 
//			printf("�´���\n");
//		else if (input < store)
//			printf("��С��\n");
//		else {
//			printf("��ϲ��¶��ˣ�����");
//			break;
//		}
//	
//	}
//};
//
//																		//��ʹ�ÿ�����䡿������break������ִ��case2
//
//int main(){
//	 int input=0;
////srand((unsigned int)time(NULL));
//	 srand((unsigned int)time(NULL));
//
//	do {
//		menu();
//		printf("���ѡ���ǣ�");
//		scanf("%d", &input);
//
//		switch (input) {
//		case 1:
//			game();//��Ϸ����
//			break;
//		case 0:
//			break;
//		default:
//			printf("ѡ���������ѡ��\n");
//			break;
//		}
//		if (input == 0) {
//			printf("�˳���Ϸ\n");
//			}
//	} while (input);//��0��ʹ��




//int main(){
//	int i;
//	int k;
//	int store;
//	for (i = 1; i < 10; i++) {
//		for (k = 1; k < 10; k++) {
//			store = i * k;
//			printf("%d*%d=%d  ",i,k, store);
//		}	
//		if (k == 10) {
//			printf("\n");
//		}
//		
//	}
//
//	return 0;

	













																										//����ӡ�˷��ھ���
//int main(){
//	int i=0;
//	
//	for (i = 1; i <= 9; i++) {
//		int j = 1;
//		for (j = 1; j <=i; j++) {
//			printf("%d*%d=%-2d ", i, j, i * j);//%-2d��2λ��ʽ�����
//		}
//		printf("\n");
//	}

	//ʹ�����int�͵���ֵ��2λ�Ĺ̶�λ��������������2λ������ǰ�油�ո��������2λ����ʵ��λ�������
	//	����������ֵ����int�ͣ������ǿ������ת��Ϊint��֮������ĸ�ʽ�����
	//	�������£�

	//	printf("%2d", 12); // ���12
	//printf("%2d", 1); // ��� _1 (_����ո�)
	//printf("%2d", 122); // ���122
	//printf("%2d", 12.72); // ���12 (ǿ������ת������ȡ��������)












																							//���Ƚ����Ĵ�С��
//int main() {
//	
//	int array[] = {- 1,- 2,- 3,- 4,- 5,- 6,- 7,- 8,- 9,- 10 };
//	int i;//����number���±�
//	int k = array[0];//�������Ƚ�
//	int number = sizeof(array) / sizeof(array[0]);//����
//	for (i = 1; i <= number;i++) {
//		if (k < array[i]) {
//			k = array[i];//��ֵ
//		}
//	}
//	printf("%d\n", k);




//int main(){ 
//	int arr[] = { -1,-2,4,6,9 };
//	int right = sizeof(arr) / sizeof(arr[0]);
//	int left = 0;
//	int i;
//	for (i = 0; i < right; i++) {
//		if (arr[left] < arr[i]) {
//			arr[left] = arr[i];
//		}
//	}
//	printf("%d", arr[left]);






																							//������һ��һ���ĺ͡�

//int main() {
//	int i;
//	double sum = 0.0;
//	int flag = 1;
//	for (i = 1; i <= 100; i++) {
//		sum +=flag* 1.0 / i;
//		flag = -flag;//�ڶ���ѭ��ʱflag��ɸ������������ѭ����һ�β�����һ��һ�θ�һ
//	}
//	printf("%lf", sum);




//int main(){
//	int sum;
//	int para=0;
//	int i = 1;
//	int a;
//	for (sum = 1; sum <= 100; sum++) {
//		a = sum;
//		para += a * i;
//		i = -i;
//		
//	}
//
//	printf("%d\n", para);
//	return 0;


//int main(){
//	int i = 0;
//	double sum1 = 0.0;
//	double sum2 = 0.0;
//	double sum3 = 0.0;
//	for (i = 1; i <=100; i+=2) {
//		sum1+= 1.0 / i;
//	}
//	for (i = 2; i <= 100; i += 2) {
//		sum2 += 1.0 / i;
//	}
//	sum3 = sum1 - sum2;
//	printf("%lf\n", sum3);









												//����λ����ʮλΪ9�����ж��ٸ���

	//int main(){
	//	int conut = 0;
	//	int i = 0;
	//	for (i = 1; i <= 100; i++) {
	//		if (i % 10 == 9) {//��λΪ��
	//			conut++;
	//		}
	//		if (i / 10 == 9) {//ʮλΪ��
	//			conut++;
	//		}
	//
	//	}
	//	printf("%d\n", conut);



		//99
	//19%10��ʮ
	//90/�ƶ�С��




















	//#include<math.h>
	//int main() {
	//	int a;
	//	int number = 0;
	//	int i;
	//	for (a = 100; a <= 200; a++) {
	//
	//		for (i = 2; i <= sqrt(a); i++) {//����κ�һ��<=��ƽ��i��������������i����Ϊ����
	//			if (a % i == 0) {
	//				break;
	//			}
	//		}
	//		if (i>sqrt(a)) {
	//			printf("%d\n", a);
	//			number++;999i
	//		}
	//	}
	//	printf("%d\n", number);



	//int main(){
	//	int a;
	//	int number = 0;
	//	int i;
	//	for (a = 100; a <= 200; a++) {
	//		
	//		for (i = 2; i < a; i++) {//a%i!=0���������������ȥbreak��a%i==0ʱ������Ϊ�١�
	//			if (a % i == 0) {
	//				break;
	//			}
	//		}
	//		if (i == a) {
	//			printf("%d\n", a);
	//			number++;
	//		}
	//	}
	//	printf("%d\n", number);


















	//int main(){
	//	int i;
	//	int number = 0;
	//	for (i = 100; i <= 200; i++) {
	//		int j;
	//		for (j = 2; j < i; j++)
	//		{
	//			if (i % j == 0)
	//				break;
	//		}
	//		
	//		if (j == i) {
	//			printf("%d\n", i);
	//			number++;
	//		}
	//	}
	//	printf("number=%d\n", number);




//int main(){
//	int para;
//	int sum = 0;
//	for (para = 100; para <= 200; para++) {
//		int para2;
//		for (para2 = 2; para2 < para; para2++) {
//			if (para % para2 == 0) {
//				break;
//			}
//		}
//		if (para2 == para) {
//			printf("%d\n", para);
//			sum++;
//		}
//	}
//	printf("%d\n", sum);
//	return 0;











	//int main(){
	//	int a = 24;
	//	int b = 18;
	//	int c = a % b;
	//	printf("%d\n", c);





	/*int main(){
		int a;
		int b;
		int c;
		scanf("%d%d", &a, &b);
		while (a % b != 0) {
	
			c = a % b;
			a = b;
			b = c;
		}
		printf("%d\n", b);*/







		//int main() {
		//	int a;
		//	int b;
		//	int c;
		//	scanf("%d%d", &a, &b);
		//	while (c = a % b;) {//a=0ʱΪ�٣�ֹͣ��ʡ����2��

		//		
		//		a = b;
		//		b = c;
		//	}
		//	printf("%d\n", b);














		/*int main(){
			int a;
			for (a = 3; a < 100; a += 3) {
				printf("%d\n", a);

			}*/


			//int main(){
			//		int a;
			//		for (a = 1; a < 100; a++) {
			//			if (a % 3 == 0) {//aģ��һ���������������0;���ӡ
			//				printf("%d\n", a);
			//			}
			//
			//		}








//int main() {
//	int para1;
//	int para2;
//	int para3;
//	printf("���������ѡ��\n");
//	scanf("%d%d%d", &para1, &para2, &para3);
//	if (para1 < para2) {
//		int store = para1;
//		para1 = para2;
//		para2 = store;
//	}
//	if (para1 < para3) {
//		int store = para1;
//		para3 = para1;
//		store = para3;
//	}
//	if (para2 < para3) {
//		int store = para2;
//		para2 = para3;
//		para3 = store;
//	}
//	printf("%d%d%d", para1, para2, para3);
//
//	return 0;
//}








																							//���Զ�������ֵ��С��

			//int main()
			//{
			//	int a = 0;
			//	int b = 0;
			//	int c = 0;
			//	scanf("%d%d%d", &a, &b, &c);
			//	if (a < b){
			//		int nu = a;
			//		a = b;
			//		b = nu;
			//	}
			//	if (a <c ){
			//		int nu = a;
			//		a = c;
			//		c = nu;
			//	}
			//	if (b < c) {
			//		int nu = b;
			//		b = c;
			//		c = nu;
			//	}
			//
			//	printf("%d%d%d\n", a, b, c);







	/*		#include<windows.h>
			#include<stdlib.h>
			#include<string.h>
int main() {


	char password[20] = { 0 };
	char input[20] = { 0 };
	char input2[] = { 0 };

	printf("�������õ�������ʲô��");

	scanf("%s", password);
	printf("�Ҽ�ס��\n");
	Sleep(2000);
	system("cls");



		int i;
		for (i = 3; i > 0;) {

			printf("���������룺\n");
			scanf("%s", input);
			if (strcmp(password, input) == 0) {

				printf("��½�ɹ�\n");
				break;
			}
			else {

				i--;
				printf("��¼ʧ��");
				printf("������%d�λ���\n\n", i);
			}
			if (i == 0) {

				printf("���Ѿ���������\n");
				printf("��ȴ�30�����������\n");
			}
			int k;
			for (k = 30; k >= 0 && i == 0; k--) {

				if (k > 0) {

					printf("����ˢ�»���%d��\n", k);
					Sleep(1000);
					system("cls");
				}
				else {

					i = 3;
				}
			}

		}
	
	return 0;
}*/



//int main() {
//	int i = 3;
//	for (i =3; i > 0; i--) {
//		if (i == 1) {
//			printf("dfjlsald\n");
//			break;
//		}
//		else {
//			printf("hhaha\n");
//		}
//
//	}
//
//
//	return 0;
//}


//int main() {
//
//}






//#include<windows.h>
//#include<string.h>
//#include<stdlib.h>
//
//int main() {
//												//��ע��Ҫ��ֵ�ռ��С������ջ�����һֱ����return 0}��yes��Ҫ��ֵ4��������input[4],����һ��������Ż��С�
//	char arry[20] = { 0 };//�������
//	char input[4] = { 0 };//���Yes
//	char input2[20] = { 0 };//��ŵ�¼�������
//	int win = 1;
//
//
//
//	printf("���������룺\n");
//	scanf("%s", arry);
//	system("cls");
//	printf("С����ס��������\n");
//	Sleep(2000);
//	system("cls");
//	scanf("%s", input);
//	printf("��ȷ��yes\n");
//	if (strcmp(input, "yes") == 0) {
//		for (int i = 3; i > 0;) {
//			printf("���������ڱ���Ԥ�������룺");
//			scanf("%s", input2);
//			if (strcmp(input2, arry) == 0) {
//				printf("������ȷ������½�ɹ�����\n");
//				break;
//			}
//		}
//	}
//	else {
//		printf("��¼�ɹ�\n");
//	}
//	return 0;
//}


			/*#include<windows.h>
			int main()
			{
				printf("����ɷ��\n");
				Sleep(1000);
				system("cls");
				printf("��ʲô��\n");
				Sleep(1000);
				system("cls");
			printf("˵���ģ��ͣ��ǣ��㣡\n");
			Sleep(1000);
			system("cls");
			printf("�����ɵ��\n");
			Sleep(1000);
			system("cls");
			printf("�����㻹��֪��\n");
			Sleep(1000);
			system("cls");
			printf("��ɵ��\n");
			Sleep(1000);
			system("cls");
			printf("����������\n");
			Sleep(1000);
			system("cls");*/








			//#include<stdlib.h>	//���ÿ⺯��system														//����ӡ��λ��ĸ���滻��
			//#include<windows.h>//������ͣ
			//#include<string.h>//�����ַ���ƥ�䣬�����������ͷ�ļ�
			//int main()
			//{
			//	char array1[] = "how are you";
			//	char array2[] = "           ";
			//	int left = 0;
			//	int right = strlen(array1) - 1;
			//
			//	while(left<=right)
			//	{
			//	array2[left] = array1[left];
			//	array2[right] = array1[right];
			//	printf("%s\n", array2);
			//	Sleep(1000);//��ͣ1000����[һ��]
			//	system("cls");
			//	left++;
			//	right--;
			//}
			//	printf("shabi");

//#include<windows.h>
//#include<string.h>
//int main(){
//	char arry2[] = "           ";
//	char arry[] = "How are you";
//	int left = 0;
//	int right = strlen(arry) - 1;
//	while (left <= right) {
//		arry2[left] = arry[left];
//		arry2[right] = arry[right];
//		printf("%s\n", arry2);
//		Sleep(1000);
//		system("cls");
//		left++;
//		right--;
//		
//	}
//	printf("����ɷ����\n");


//int main(){
//	char arry[] = "hao are you";
//	printf("%c", arry[2]);
//	int arr[] = { 1,3,5 };
//	printf("%d", arr[1]);





			/*int main()
			{
				char array[] = "ab\0c";
			  char array[] = "abc a\0 a";
				char array[] = {'a','b',0};
				printf("%s\n", array);*/




				//int main()
				//{
				//	char array1[5], array2[5], array3[5];
				//	scanf("%s%s%s", array1, array2, array3);
				//	printf("%s%s%s\n", array1, array2, array3);






																						//��˳����������ʱ��ͨ�����ֲ��ҷ������������������д�ɺ�����ʽ��Ǳ����

				//int main()
				//{
				//	int input;
				//int  array[] = { 1,2,3,4,5,6,7,8,9,10 };
				//int left = 0;
				//int number = sizeof(array) / sizeof(array[0]);
				//int right = number - 1;
				//scanf("%d", &input);
				///*int  mid = (left + right) / 2;*/
				//while (left<=right)
				//{
				//
				//int  mid = (left + right )/2;   //��Ϊ�����ͣ�����С����Ҫ
				//
				//	if (array[mid] > input)
				//	{
				//		right = mid - 1;
				//		
				//	}
				//	else if (array[mid] < input)
				//	{
				//		left = mid + 1;
				//
				//	}
				//	else
				//	{
				//		
				//		printf("�ҵ��˶�Ӧ���±���=%d\n", mid);
				//		break;
				//	}
				//	if(left>right)//���Ҫ�ҵ���С���м�ֵ������겻���ұ�䣬ͬ�����Ҳ���ʱ�����Һ�����������Ҫ�ҵ���ʱ���ұ��ܵ����ȥ��
				//
				//	printf("�Ҳ���");
				//
				//} 


//int main(){
//	int arry[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int left = 0;
//	int sum = sizeof(arry) / sizeof(arry[0]);
//	int right = sum - 1;
//	int input;
//	printf("��������Ҫ���ҵ���\n");
//	scanf("%d", &input);
//	while (left <= right) {
//		int mid = (left + right) / 2;
//		if (arry[mid] < input) {
//			left = mid + 1 ;
//		}
//		else if (arry[mid] > input) {
//			right = mid - 1;
//		}
//		else {
//			printf("���ҵ��ˣ�\n�±��ǣ�%d\n",mid);
//			break;
//		}
//	}
//	if (left > right) {
//		printf("�Ҳ���\n");
//	}






																							//���������в�����Ҫ�����֡�

				//int main()
				//{
				//	int i;
				//	int a[] = { 1,2,3,10,9,7,5,6,4 };
				//	int b = sizeof(a) / sizeof(a[0]);//�������
				//	int k = 0;
				//	printf("b=%d\n", b);
				//	scanf("%d", &k);
				//	for (i = 0; i < b; i++)//i<�������ʱ
				//	{
				//		
				//		if (k == a[i])//k=�±��Ӧ����ʱ
				//		{
				//			printf("�ҵ���");
				//			printf("i=%d\n", i);//��ӡi
				//			printf("a[i]=%d\n", a[i]);//��ӡ�ҵ�����
				//			break; 
				//		}
				//		
				//	}
				//	if (i == b)//i�±�����������ʱ
				//	{
				//		printf("û�ҵ�\n");
				//	}


//int main(){
//	int array[] = { 1,2,3,4,5,6,7,8,9 };
//	int sum = sizeof(array) / sizeof(array[0]);
//	int k;
//	int cha;
//	printf("��������Ҫ���ҵ�����\n");
//	scanf("%d", &cha);
//	for (k = 0; k < sum; k++) {
//		if (array[k] == cha) {
//			printf("���ҵ��ˣ�");
//			printf("%d\n", array[k]);
//			break;
//		}
//	}
//	if (k == sum) {
//		printf("������û����Ҫ�ҵ�����\n");
//	}










																										//������׳ˡ�
				//int  main()
				//{
				//	int n;
				//	int b = 1;
				//	int k = 1;
				//	for (n = 1; n <= 10; n++)
				//	{
				//
				//
				//		b = b * n;
				//		//b*=n;
				//		
				//		printf("%d\n", b);
				//	}











				
				//int main()
				//{
				//	long int f = 0;
				//	long int t = 1;
				//	int i=0;
				//	int n = 0;
				//	for (n = 1; n <= 3; n++)
				//	//while(n<=10)
				//	{
				//		
				//		for (t = 1, i = 1; i <= n; i++)//��ʼ��t�������´�ѭ��t�̳��ϴ�ѭ��t��ֵ
				//		{
				//			t = t * i;//�������
				//
				//
				//
				//
				//		}
				//		printf("��εĽ����%d\n", t);
				//
				//		f = f + t;
				//
				//		printf("���J=%d\n", f);


				//	}


















				//int main()
				//{
				//	int b = 1;
				//	int a;
				//	int i;
				//	scanf("%d", &i);
				//	for (a = 1; a <= i; a++)
				//	{
				//		b = a * b;
				//
				//
				//	}
				//	printf("%d\n", b);







				//int jc(int x)//���������׳� jc()
				//{ 
				//	int z=1;
				//	for(;x>0;x--)
				//	{
				//		int Z=z*x;
				//	}
				//	return z;
				//}













				//int main()
				//{
				//	int i = 0;
				//	do
				//	{
				//		i++;
				//		printf("%d\n", i);
				//		continue;//continue����while�����ж�                     
				//	}
				//	while (i<5);



















																					  //��ӡ��123321123321��

				//int main()
				//{
				//	int i;
				//	int j = 0;
				//	while (j < 4)
				//	{
				//		for (i = 0; i < 3; )
				//		{
				//			i++;
				//			printf("%d\n", i);
				//
				//		}
				//
				//		for (i = 4; i >= 1; )
				//		{
				//			i--;
				//			if (i == 0)
				//			{
				//				break;
				//			}
				//			printf("%d\n", i);
				//		}
				//		j++;
				//	}















				//int main()															
				//{
				//	int 
				//	int j = 0;
				//	//int b=1;
				//	for (i = 0; i < 10; i++)
				//	{
				//		printf("%d\n", i);
				//		
				//		for (; j < 5 && i > 3; j++)
				//		{
				//			
				//			printf("%d\n", j);
				//
				//		}
				//
				//	}




					/*int main()
					{
						int i = 0;
						int j = 0;
						for (i = 0; i < 10; i++)
						{
							for (; j < 10; j++)
							{
								printf("hehe\n");
							}

						}*/











						//int main()
						//{
						//	int i;
						//	for(i=0;i<10;i++)//ѭ��
						//	{
						//		
						//		int b = 0;
						//		while (b<6)//��ӡ6��i
						//		{
						//			b++;
						//			printf("%d\n", i);
						//			
						//		}
						//
						//	}


















																										//��do whileѭ����


						//int main()
						//{
						//	int a = 0;
						//	do//����ѭ��
						//	{
						//		a++;
						//		printf("%d\n", a);
						//	}
						//	 while (a < 5);//�ж��Ƿ����ѭ��














						/*int main()
						{
							int a, b;
							for (a = 0, b = 0; a < 2 && b < 5; a++, b++)
							{
								printf("hehe\n");
							}*/






						//int main()
						//{
						//	int a = 0;												//��һ�������⡿
						//	int b = 0;
						//	for (a = 0, b = 0; b = 0; a++, b++)       //b=0�Ǹ�ֵ��ʹ�ж�λ�����b=0���١���Ϊ�ټ�����������>>>..���ʽ�Ľ����ԶΪ0
						//	{
						//		b++;
						//	}



















																			//����ӡһ�ٸ�hehe��																				

						//int main()
						//{
						//	int i = 0;
						//	int j = 0;
						//	for(i=0;i<10;i++)
						//		for (j = 0; j < 10; j++)
						//		{
						//			printf("hehe\n");
						//			
						//		}










						//����ӡʮ��hehe��

						//int main()
						//{
						//	int i = 0;
						//	int j = 0;
						//	for(i=0;i<10;i++)
						//		for (j = 0; j < 10; j++)
						//		{
						//			printf("hehe\n");
						//			break;
						//		}


																							//�������hehe����iѭ�������ģ������hehe����jѭ�������ġ�

							//����ӡʮ��hehe��

						//int main()
						//{
						//	int j = 0;
						//	int i = 0;
						//	for (i=0; i < 10; i++)
						//	{
						//		for (; j < 10; j++)//��һ��ѭ��û�г�ʼ��j;
						//			printf("hehe\n");
						//
						//
						//
						//	}



















						//int main()
						//{
						//	int i = 0;
						//	for ( ; i < 5; )
						//	{
						//		i++;
						//		printf("%d\n", i);
						//	}











						//int main()
						//{
						//	int a = 0;
						//	char arr[14] = {"C���Գ������"};   //{"C���Գ������"}; 
						//	
						//	printf("%s\n",arr);









						//int main()
						//{
						//	int a = 0;
						//	while (a++ < 3)
						//	{
						//		printf("%d\n", a);
						//
						//	}

















						/*int main()
						{
							char ch=0;
							while ((ch = getchar()) != EOF)
							{
								if (ch < '0' || ch > '8')
								{
									continue; 
								}
								else
								{
						putchar(ch);
								}
								
							}*/





















						
						//int main()
						//{
						//	
						//	char ch;
						//	char  a[20];
						//	printf("����������\n");
						//	scanf("%s", a);
						//	printf("%s\n", a);
						//	//while ((ch=getchar()) != '\n')//���ո�Ҳ�ᱻ��ȡ��
						//	//{
						//	//	;   //����Ҫ���ʲô��ֻ��Ҫ�㲻����ѭ���ж�
						//	//}
						//		printf("��ȷ������(y\\n)\n");
						//		char i;
						//		scanf(" %c", &i);//���üӿո������հ��ַ����ո񣬻��еȣ��ж��������٣�ֱ����ȡ��һ��ʵ���Ե��ַ���
						//	
						//	/*ch = getchar();*/
						//	if (i == 'y')
						//	{
						//		printf("��ȷ\n");
						//		}
						//	else
						//	{
						//		/*putchar(ch);*/
						//		printf("����\n");
						//	}











						//int main()
						//{
						//	
						//	char a = 0;
						//	while((a = getchar()) != EOF)  //������ctrl+zֹͣ��
						//	{
						//		putchar(a);
						//
						//
						//	}

							/*int a = 0;
							scanf("%d", &a);
							while (a != 5)
							{
								printf("����");
								break;
							}*/












							//��ʹ��continue��ȥ����Ҫ������
//int main()
//{
//	int a = 0;
//	for (a = 1; a < 20; a++)
//	{
//		if (a == 15)
//		{
//			continue;
//		}
//		printf("%d\n", a);
//		
//
//	}


	/*while (a < 20)
	{
		a++;
		if(a==15)
		{
			continue;
		}
		printf("%d\n", a);
	}*/

















	//����ӡһ��ʮ��
//int main()
//{
//	int a = 1;
//	
//	if(a==1)
//	while (a<11)
//	{
//		printf("%d\n",a);
//			a++;
//	}
//
//
//	for (a = 1; a < 11; a++)
//		printf("%d\n", a);



//int main()
//{
//	int a;
//	for (a = 1; a < 11; a++)
//	{
//		printf("%d\n", a);
//	}





//int main()
//{
//	while (0)       //while�����ж���١�0Ϊ�٣��Һ㡿�����벻ѭ��
//	{
//		printf("hehe\n");
//	}




	//int main()
	//{
	//	while (1)   //while�����ж���١�1Ϊ�棬�Һ���(��0Ϊ�� )����������ѭ��
	//	{
	//		printf("hehe\n");
	//	}

















//int main()
//{
//	int a = 1;
//	int b = 2;
//	switch (a)
//	{
//	case 1:
//		a++;             
//	case 2:				
//		b++;			
//	case 3:
//		switch (a)
//		{
//		case 1:
//			a++;
//		case 2:
//			b++; a++;	
//			break;
//		}
//	case 4:
//		b++;
//		break;
//	default:
//		break;
//
//	}
//	printf("a=%d,b=%d\n", a, b);
















//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	if (a > 0 && a < 6)
//	{
//		printf("������");
//	}
//	if (a > 5 && a < 8 )
//	{
//		printf("��Ϣ��");
//		
//	}















//int main(){
//	char a[] = "g";
//	printf("%s", a);




																	//��switch���֧��䡿
																				//[case]

 //�������Ƿ����ġ�
//int main()
//{                            
//	int a = 0;
//	scanf("%d", &a);
//	if (1 == a)
//	{
//		printf("����һ");
//	}
//	else if (2 == a)
//	{
//		printf("������");
//	}
//	else if (3 == a)
//	{
//		printf("������");
//	}
//	else if (4 == a)
//	{
//		printf("������");
//	}
	//......
																		//����������ʹ�õ�switch��䡿��[case]��������


/*int main()
{
	int ba = 0;
	scanf("%d", &ba);
	switch (ba) //���ж�ѡ��                   //��ע�⣬siwtch����������ֻ�������α��ʽba������int���塿
	{
	case 1:							//��ע�⣬case���������[���ͳ������ʽ]��������1��������д��1.0�������1+0Ҳ�У�ֻҪ�����������α��ʽ���С�
		printf("����һ");										//�����ܶ���int a=1,��a���棬a�Ǳ�����
		break;//if(ba==1)
			   //printf("hehe");
	case 2:
		printf("���ڶ�");
		break;
	case 3:
		printf("������");
		break;
	case 4:
		printf("������");
		break;
	case 5:
		printf("������");
		break;
	case 6:
		printf("������");

	case 7:
		printf("������");


	}*/
	//���������3�����ӡ�������������������������������Բ���������Ҫ�ģ����Ǽ�break��






	//int main()
	//{
	//	int ba = 0;
	//	scanf("%d", &ba);
	//	switch (ba)
	//	{
	//	case 1:
	//	case 2:
	//	case 3:
	//	case 4:
	//	case 5:
	//	case 6:
	//		printf("������");
	//		break;
	//	case 7:
	//		printf("������");
	//		break;
	//	default:                   //������Ĭ�ϴ��������ֵû��ʱ>>>>           defaoultֻ������while ��for ��foreach ֮�� �� switch��case��default ���֮��
	//		printf("������1��7��ֵ");													//ÿ��switch���ֻ�ܳ���һ��default��default���Է��������������λ��
	//		break;
	//	}


















	//���ж���ż�����г�100���ڵ�������


/*int main()
{
	int shu = 0;
	scanf("%d", &shu);
	if (shu % 2 == 1)           //��shu % 2��  ����shu����2������  Ȼ��  �ж��Ƿ�Ϊһ    ����if(shu % 2 != 0);
	{
		printf("shu=����");
	}
	else
	{
		printf("shu=ż��");
	}*/



	//����ӡ1-100��������
/*int main()
{
int a = 1;
while (a <= 100)
{
	 if (a % 2 == 1)   //����if (a % 2 != 0)
	{
		printf("a������=%d\n", a);
	}

	 a++;
}*/


//��д������
//����ͬ��д��(����)���ǲ�ͬ���㷨���ɼ�һ���õ��㷨������Ҫ��


/*int main()
{
	int a = 1;
	while (a < 100)
	{
		printf("%d\n", a);
		a += 2;
	}*/


















	//��if��=��==����

//int main()
//{
//	int num = 4;
//	if (num = 5)//һ���Ⱥ��Ǹ�ֵ�����Դ�ӡ��hehe��a��ֵ�����5
//	{
//		printf("hehe\n");
//		printf("num=%d\n",num);
//	}


	//�����õ�ϰ�ߡ�

/*int main()
{
	int num = 4;
	if (5 = num)           // ���ǰѳ������ڵ�һ�����������д��һ��=���ͱ���˰�num��ֵ��5������ͻᱨ��
	{
		printf("hehe\n");*/


























		//��Сϰ�⡿������Ŀɶ��ԡ�
/*if (��������)
{
	return x;
}
return y;*/
//��������Ĵ�����˼�ǲ�����������������ⷵ��x,���򷵻�y��  �𰸡��ǡ���return x������y�Ͳ��᷵�أ�y������x�Ͳ��᷵��
//������ɶ��Բ��ã�����Ӧ������д
/*if (��������)
{
	return x;
}
else
{
	return y;
}*/








//������else��
//int main()
//{
//	int a = 0;
//	int b = 2;
//
//	if (a == 1)
//		if (b == 2)
//			printf("hehe\n");
//
//	//���ʲôҲû��ӡ
//		else				              //else��Ӧ������һ�е�if(b==2)������if(a==1)�޷�ͨ����if(b==2)��else�Ͷ�ûû�����ж�
//			printf("haha\n");         //�����sls/ /δƥ���if����ƥ��ġ���else�ͽ�ԭ�� ע:else����ôƥ��if�ģ���ʵelse�������������eŲ����if(a==1)����Ҳû��
			//������᲻����Ϊʲôif(b==2)��ͨ��else��Ҳ������---->��ֻ��if�ǿ��Եģ���elseȴһ��Ҫ��if����䣬û��if�Ͳ�����else��



								  //����ȷд����
/*int main()
{
	int a = 0;
	int b = 2;

	if (a == 1)
	{
		if (b == 2)
			printf("hehe\n");
	}
	else
		printf("haha\n");*/






											//���Ƿ�else��
//int main() {
//
//	int a = 2;
//	int b;
//	if (a < 3) {
//		printf("%d\n", a);
//	}
//
//	printf("haha\n");//�Ƿ�else
//	else
//		printf("heheheh\n");
















		//��else if��if��

/*int main()
{
	int a = 1;
	while(a<10)                                              //��ѭ�����while��
{                                          //ֻ��if��������ʱ��else if�Ż�ִ�У�ֻ��else if��������ʱ��else�Ż�ִ��[����while���ʱ���Ǹ�����ִ���ĸ���ʣ�²�ִ��  ������Ĵ���]
		a += 1;                           //if         else if         else
		if (a == 2)                           //ifִ����֮��ڶ���if����ִ�У�����if���������ʱ��ִ��else
		{                                     //  if   if   else
			printf("a=%d\n", a);
		}
		else if (a < 4)//�������
		{
			printf("�ڶ���=%d\n", a);
		}
		else
			printf("���=%d\n", a);
}*/





//��if �ж����&&����
/*int main()
{
	int age = 10;

	if (age >= 18 && 28 > age)//��˼��age>=18��age<28								//	����д��������ʽ	if (18 = < age < 28)
	{
		printf("����\n");

	}*/











	//���ṹ���͡�
/*struct book
{
	char name[20];
	short price;
};

int main()
{
	struct book ben = { "C���Գ������",55 };
	struct book* p = &ben;
	printf("����=%s\n�۸�=%d\n", ben.name, ben.price);*/







	//���޸Ľṹ�����ַ������ݡ�

/*#include<string.h>//�ַ�����������ͷ�ļ�

//������book
struct book  //����һ���ṹ�����ͣ���������book//�������������ͣ�����û�д��������
{//����
	char name[14];//����14���ֽڣ�(C)ռһ���ֽڣ�(���Գ������)ռ12���ֽ�,\0ռһ���ֽ�         //�����ַ����ĸ�ֵ��ʽ����strcpy
	short price;
};

int main()
{                //ben��һ���� (ben����Ҫ���ַ�����������ӡ���õ�)                                 //  ben�����������м۸�Ⱥö���Ϣ�ģ�����������һ�Դ��������������е�����
	struct book ben = { "C���Գ������",55 };//�������ݲ����滻λ��  //���ýṹ������(struct ben)����һ���ýṹ�����͵ı���(book)
	struct book* p = &ben;
	printf("����=%s\n�۸�=%dԪ\n", ben.name, ben.price); //�ṹ�����(*p)=ben(��.)
	printf("����=%s\n�۸�=%dԪ\n", p->name, p->price);//�ṹ��ָ��p(��->)
	* p = {15};
	printf("�޸ĺ�۸�Ϊ=%dԪ\n",*p);
	ben.price = 15;
	printf("�޸ĺ�۸�Ϊ=%dԪ\n", *p);



																																		   // #include<string.h>
	strcpy(ben.name, "C����");                         //�޸���������ben.name��Ϊ�ַ��������Ǳ���   ��ʱ������Ҫһ������-strcpy���ַ��������������Ŀ⺯��string.h
	printf("�޸ĺ������=%s\n", ben.name);*/              //ben.name="C����"     "C����"�ַ����������ǵ�ַ





	//���ṹ������ͽṹ��ָ�������
/*struct book
{
	char name[14];
	short price;
};

int main()
{
	struct book k={"C���Գ������",55 };           //k�ǽṹ�����
	struct book* p = &k;                           //p�ǽṹ��ָ�����

	//printf("%s\n%d\n", (*p).name, (*p).price);
	printf("%s\n%d\n", p->name, p->price);*/





	//�ṹ��

	//struct book
	//{
	//	char name[14];//������Ҫ����14������Cռһ���ֽڣ����Գ������ռ12���ֽڣ�\0ռһ���ֽ�
	//	short price;
	//
	//};
	//
	//
	//
	//int main()
	//{
	//	struct book	bi = { "C���Գ������",55 };
	//	struct book* k = &bi;
	//	printf("%s%d\n", (*k).name, (*k).price);
	//	printf
	//	("%d\n", sizeof((*k).name[1]));









																				  //�� Сϰ�� ��



	//int sum(int a)      //int sum(int a)����һ������ֵ�����͵ĺ���sum��������һ�����Ͳ�������a
	//{
	//static int b = 5;
	//int c = 0;
	//c+=1;
	//b+=2;
	//printf("b= %d\n", b);
	//
	//return (a + b + c);
	//}
	//
	//
	//int main()
	//{
	//	int a = 2;
	//	int i ;
	//	for (i = 0; i < 5; i++)
	//	{
	//		printf("%d\n", sum(a));
	//
	//	}









	//int sum(int a)
	//{
	//	static int b = 5;
	//	int c = 0;
	//	b += 2;
	//	c += 1;
	//	return (a + b + c);
	//
	//}
	//
	//int main()
	//{
	//	int a = 2;
	//	int i;
	//	for (i = 0; i < 5; i++)
	//	{
	//		printf("%d\n", sum(a));
	//	}





	//int main()
	//{
	//	int i, sum = 0;
	//	for (i = 1; i <= 100; i++)
	//	{
	//		sum += i;
	//	}
	//	printf("%d\n", sum);



	//int main()
	//{
	//	int a, sum = 0;
	//	for (a = 103; a >100; a--)
	//	{
	//		sum += a;          //sum����a
	//
	//	}
	//printf("%d\n", sum);











																					//��ѭ����䡿

	//int main()
	//{
	//	int i, sum = 0;
	//	i = 1;
	//	//���� 
	//	while(i<=100 /*����*/ )
	//	{
	//		sum+=i;
	//		i++;//����
	//	} 
	//	printf("%d\n",sum); 
	//	









																				//��scanf���뺯���Ա�����Ӱ�졿

	//int main()
	//{ 
	//	int b = 39;
	//	int a = 20;
	//	scanf("%d%d", &a, &b);    //�����µ���ֵʱa��b�����¸��ĳ�����ֵ������û��const
	//	int m = a + b;
	//	printf("m=%d\n", m);



																			 //��#define����꡿

	//define���ǹؼ��֣���һ��ָ��
	//��Ķ���
	//#define MAX(x,y) (x>y?x:y)
	//
	//int main()
	//{
	//	int a = 10;
	//	int b = 20;
	//	int max = MAX(a, b);
	//	printf("%d", max);







	//int main()
	//{
	//	int a = 10;
	//	int b = 20;
	//	int max = (a > b ? a : b);
	//	printf("%d", max);










	//#define MAX 100//����һ��ȫ�֣��ھֲ�������Ǿֲ���MAX��MAX����100,��ȫ���ж���ʹ��
	//int main()
	//{
	//	const int a = 10;
	//	char k[MAX];
	//	int k = MAX;//MAX����100
	//	printf("%d\n", a);
	//	printf("%d\n", MAX);















																		 //��static��ֹ��,��̬�ֲ�������


	//int test()
	//{
	//	static int a = 1;//�������Ϊ��������������ź�a���ٹ��㣬�����˾�̬������������ˣ������ɻ��ڼ���ÿ�����н�����ȱ������´λ�����
	//	a++;
	//	printf("a=%d\n", a);
	//	return a;
	//}
	//
	//int main()
	//{
	//	int a = 0;
	//	while (a < 3)
	//	{
	//	
	//		test();
	//		a++;
	//		printf("%d\n", a);
	//	}






																	  //��ͨ��extern�����ⲿ���롿

	//extern int m(int, int);

	//int main()
	//{
	//	int a = 10;
	//	int b = 20;
	//	int k = m(a, b);
	//	printf("%d", k);





		//����++
		//int main()
		//{
		//	int a = 5;
		//
		//	 
		//	printf("%d\n", a++);
		//	printf("%d\n", a);





																		//��������#include<math.h>��sqrt��
		/*#include<math.h>
		float k(float x, float y)
		{
			float v = sqrt(x * x + y * y);
			return v;

		}

		int main()
		{
			float a = 0, b = 0, angle = 0;


			printf("������ֱ�Ǳ߳�a��b��ֵ\n");
			scanf("%f%f", &a, &b);
			float angle = k(a, b);

			printf("б�ߵ�ֵΪ%f\n", angle);*/








			/*void function()
			{
			   int i = 1;     //static int a=1;��һ����̬�ľֲ�������ʱ����23456
				i++;
				printf("i=%d\n", i);
			}//��ȥ����0���ֲ�����ֻ�����ھֲ���


			int main()
			{
				int a = 0;
				while (a < 5)
				{
					function();
					a++;//��ʱ��aΪһ������while�жϼ���ѭ��
				}*/

				//���22222






















																						//��������
					//int function(int x, int y)
					//{
					//	int v = x * y;    //if()
					//	return v;
					//}

					//int main()
					//{
					//	unsigned int a = 10;
					//	unsigned int b = 20;
					//	int M = 0;

					//	scanf("%d%d", &a, &b);
					//	M=function(a, b);

					//	printf("M=%d",M);











						//��a--��ѭ����

/*int main()
{
	int a = 50;

	printf("����offer\n");

	while (a < 51)
	{
		printf("����+1\n");
		a--;//ͬ��a�ݼ�
		if (a == 0)
		{
			//��a=0ʱ�ж��ɹ�
			printf("��ɹ���\n");
			break;//ֹͣ����
		}
		else//a!=0ʱִ�����/
		{
			printf("����ɹ�����%d\n", a);//a--�Ǳ�������ӡ������aֵһֱ�ڼ�С
		}

	}*///���õı��ϰ��ʹ���Ǽ��ٴ���if{����}  else{����}�� / if����������Ӵ����ţ���ôif����ĵ�һ���������if�ģ������һ���������������ˣ��ͻᵼ�º���else��֪�����Ǹ�ifƥ���ˡ�
	//��˽�����if����Ķ�������ô����������������������else�����ҵ�������Եġ�





																	//��ö�١�    
//enum max
//{
//	a,
//	b,
//	c,
//	d,
//};
//int main()
//{
//	
//	unsigned char day = d;
//	//printf("%d%d%d%d", a, b, c, d);
//	printf("%u\n",day);










																			//��������������
//int main()
//{
//	int a = 20;
//	int b = 10;
//	int k = 3;
//	int i = 5;
//
//	int max = (a > b ? k :i );
//	printf("max=%d", max);




																			//��ǿ������ת����	


	//	int a = (int)1.34;
	//printf("%d", a);


	////ǰ��++����++
	//int a = 2;
	//int b =++a;
	//int b = a++;
	//	
	//	printf("%d\n%d",a,b);
		



																		//��������ˡ�
	/*int main()
	{
		int a = 0;
		int b = 0;
		int c = 0;

		scanf("%d%d", &a, &b);

		 c = a * b;
		printf("a=%d\n", a);
		printf("b=%d\n", b);
		printf("c=%d\n", c);*/


		return 0;

		}







