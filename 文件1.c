#define _CRT_SECURE_NO_WARNINGS 1    

#include<stdio.h>	

																//【结构体传参】


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
//};//在结构体变量后面
//
//
////结构体传参（传变量）
//void print2(struct stu pa) {
//	printf(" %s\n %d\n %s\n %s\n %d\n %s\n", pa.s.m, pa.s.i, pa.s.d, pa.name, pa.age, pa.id);
//};
//
////结构体传参（传地址）
//void print3(struct stu *ps) {
//	printf(" %s\n %d\n %s\n %s\n %d\n %s\n", ps->s.m, ps->s.i, ps->s.d, ps->name, ps->age, ps->id);
//};
//
//int main() {
//	struct stu book = { {"sf",22,"fdsjk"}, "陈克刚",19,"20220507" };//立面的括号是stu的成员变量结构体b的初始化；
//	//结构体传参（传变量）【传值调用】【空间和时间的浪费大】；传值时，开辟临时空间同样开辟一样大的内存，浪费空间，同时全部传递过去花费时间大；
//	print2(book);
//	//结构体传参（传地址）【传址调用】//这个好，通过地址改变值、开辟临时地址空间浪费小，同时只需要传一个地址，32平台=4字节，64平台=8字节；
//	print3(&book);




																//【结构体进阶】
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
////};//在结构体变量后面
//
////或
//struct stu {
//	struct b s;
//	char name[20];
//	int age[20];
//	char id[20];
//
//}book= { {"sf",22,"fdsjk"}, "陈克刚",19,"12238"};
//
//
//
//int main(){
//	struct stu book = {{"sf",22,"fdsjk"}, "陈克刚",19,"202115002332"};//立面的括号是stu的成员变量结构体b的初始化；
//	printf("%s\n%d\n%s\n", book.name, book.age, book.id);
//  printf("%s\n",book.b.m)//访问结构体里的结构体的内容
//struct stu* pa = &book;
// 
//printf("%c\n", pa->s.m)//pa指针指向结构体里面的成员s，s是一个结构体,不能用->，继续访问用点.
//printf("%c\n", (*pa).s.m)









//二级指针:
// int *pa;
//int **pa=&pa;//pa是指针变量,可以对其进行取地址,存放进paa;paa就是二级指针;	


//整型指针数组;int *pa[3];//有5个元素,每个元素都是指针;




//int main(){
//	int i[] = { 1,2,3,4,5,6 };
//	int* pa = i;
//	printf("%d\n", pa[2]);
//	printf("%d\n", 2[i]);




												//【后置加加使用括号也没用】

//int main(){
//	int arr[10] = { 0,2,4,6 };
//	int i = 10;
//	printf("%d\n", (i++));
//	int* pa = arr;
//	printf("%p\n", pa);
//	printf("%d\n", *(pa++));
//	
//	printf("%p\n", pa);


//arr[2] == 编译器处理:*(arr + 2);








													//【相加一个数可以使用括号括起来】


/*int main(){
	int i = 10;
	printf("%d\n", (i + 3));*///对于优先级调整







//int main(){
//	int i[] = { 1,4,6,7,9,5 };
//	char *pa = i;
//	int *pa1 = i;
//	printf("%d\n", *++pa);
//	printf("%d\n", *++pa1);



																					//【利用地址相减，计算字符串长度】

//int Getstore(char arr[]) {//传的是首地址，利用这点指针求末尾斜杠零地址
//	char* store2 = arr;//把首地址记住，一会arr会变成斜杠零的地址；
//	while (*arr != '\0') {//条件不满足的时候找到斜杠零的地址了；
//		arr++;
//	}
//	return arr - store2;//两个地址相减；
//}
//
//
//int main() {
//	char arr[] = "adfgj";
//	int len = Getstore(arr);
//	printf("%d\n", len);










//int main(){
//	char arr[] = "absfs";
//	printf("%d\n", &arr[5] - &arr[0]);//斜杠0的地址减去第一个下标的地址，等于字符串长度；







																			//【指针1】
//【利用指针打印数组里的数】
//#define  he 5
//	int main(){
//
//		float arr[he];
//		float* pa;
//		for (pa = &arr[0]; pa < &arr[he];) {//指针的关系运算
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






																		//【指针2】			


//【指针相减】条件：两个至真指向同一块空间；比如不能char减去int
// 指针-指针=指针之间元素个数【从2前面到7后面共3个数】；

// 
//int main(){
//	int i[] = { 2,5,2,7 };
//	printf("%d\n", &i[3] -&i[0] );//指针-指针=指针之间元素个数【从2前面到7后面共3个数】；



//int main(){
//	int i[10] = { 1,2,3,4,5,6 };
//	int* pa = i;
//	int* pa1 = i+5;//i+6,则pa<pa1条件
//	while (pa <= pa1) {
//		printf("%d\n", *pa);
//		pa++;
//	}







//int main(){
//	int arr[10] = { 0 };
//	int* pa = arr;//数组名是首元素地址//当然也可以写成&arr
//	int i=0;
//	for (i = 0; i < 10; i++) {
//		//*(pa + i) = 6;//pa+i,访问第i个坐标;*的作用是通过地址更改该下标的值 ；//也可以写成&arr + i;
//		printf("%d\n", *pa);//打印数组里的数；
//	}


//指针的初始化：int *pa=NULL;
//指针的初始化：int a=10;   int *pa=&a;




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





																		//【交换数组内容并打印】

//void Get(int arr[], int arr1[], int sz) {//交换数组内容
//	for (int i = 0; i < sz ; i++) {
//		int store = arr[i];
//		arr[i] = arr1[i];
//		arr1[i] = store;
//	}
//}
//
//void Print(int arr[], int arr1[], int sz) {//打印数组
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
//	Get(arr, arr1, sz);//交换数组内容
//	Print(arr, arr1,sz);//打印数组内容








//int main(){
//	int store[] = { 1,2,(3,4),5,6 };//里面的(3，4)是逗号表达式，结果就是4，[1，2，3，4，5，6]；
//	printf("%d\n", sizeof(store));
//	int i[] = { 1,2,3 };//整型没有\0
//	char k[] = "123";//[4]自带\0
//	char k2[3] = "123";//自带\0
//	char s[] = { '1','2','3' };//没有\0;需要自己加；scanf输入%s时，输入5个数，需要6个空间，其中一个放\0;
//	printf("%d\n", sizeof(i));
//	printf("%d\n", sizeof(k));
//	printf("%s\n", k2);
//	printf("%d\n", sizeof(s));






//int main(){
//	int a [10] = { 1,3,4,5,6,7,8 };
//	printf("%d\n", a[2 * 3]);



//【反汇编】
//int main() {
//
//	int i = 1;
//	int k = (++i) + (++i) + (++i);
//	printf("%d\n", k);



																	//【优先级】

//【非法表达式】解决办法是拆开让他一步一步算；

//int main(){
//	int a = 3;
//	a = a + --a;//这是个有问题的表达式，尽量避免，你不知道a是先准备还是先--a;(--的优先级比+高)；按理可能5，或者4；这个编译器是先算--，在准备a;
//	printf("%d\n", a);




//int main(){
//	int i = 1;
//	i = 1 + i << 1;//操作符的优先级表格里，+比>><<优先级高；
//	printf("%d\n", i);




																		//【结构体】
//struct book {
//	char name[20];
//	int price;
//	int price2[1];//也可以用数组，但没必要；
//	char id[20];
//};
//
//
//int main(){
//
//	struct book ben = { "C语言程序与设计",39,"20220507" };
//	struct book* pa = &ben;
//	printf("书名：%s\n价格：%d\n编号：%s\n", ben.name, ben.price, ben.id);
//	printf("书名：%s\n价格：%d\n编号：%s\n", ben.name, ben.price2[0], ben.id);//同样可以用数组；
//	printf("书名：%s\n价格：%d\n编号：%s\n", (*pa).name,(*pa).price,(*pa).id);
//	printf("书名：%s\n价格：%d\n编号：%s\n", pa->name,pa->price,pa->id);













																//【整型提升】

//int main(){
//	char a = 0xb6;//整型提升后截断提升，改变了原来的值；
//	short b = 0xb600;//整型提升后截断提升，改变了原来的值；
//	int c = 0xb6000000;//本身就是整型不需要整型提升；
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
//	printf("%u\n", sizeof(a));//%u以无符号输出unsigned;
//	printf("%u\n", sizeof(+a));//有运算符号，说明要参与运算，股整型提升，变成4个字节；
//	printf("%u\n", sizeof(-a));//有运算符号，说明要参与运算，股整型提升，变成4个字节；
//	//sizeof计算出的是unsigend类型，输出用%u（打印无符号整数）;unsigend返回的肯定是正数；但也可以用%d,%d即可以打印正数，也可以打印负数；









																			//【函数的声明，定义，与调用】

//函数的定义（同时放在上面也具了声的作用）
//int get(int x, int y) {
//	return x + y;
//}
//
//int main(){
//	int a=2;
//	int b=5;
//	int k=get(a, b);
//	//函数的调用
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




																	//【逗号表达式】

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
//	【用逗号表达式】
//
//		int main() {
//
//		while (a = get(), count_val(a), a > 0) {
//			//既满足了先运行一次，又满足可每次循环都运行一次
//		}



																	
//int main(){
//	int a = 2;
//	int n = 1;
//	int x = 3;
//	int k = (n = 5, x = n + a, a = x + 2, n += 5);
//	printf("%d\n", k);//结果是10，逗号表达式从左到右计算，但最后只取最后一个表达式结果赋值；
//	printf("%d\n", a);
//	printf("%d\n", n);
//	printf("%d\n", x);


//if (a = x + d, d = z + k, p > 0) {//真正决定是否打印haha，是p是否>0；但用样前面的都要算，并且改变值；
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
//	int k = -56 && 3;//两个真。并上为真：1
//	int k = 3 && 1; //两个真。并上为真：1
//	int k = 6 && 2;//两个真。并上为真：1
//	int k = 0 && 3;//只要有一个假，就为假=0；
//	printf("%d\n", k);





																	//【整型提升】
//int main(){
//	char a = 3;
//	char b = 127;
//	char c = a + b;
//	printf("%d\n", c);






                                                            //【sizeof括号中放的表达式是不参与运算】
//int main(){
//short i = 5;
//int a = 10;
//printf("%d\n", sizeof(i = a + 2));
//printf("%d\n", i);//sizeof括号中放的表达式是不参与运算的；结果i还是5；





//int main() {
//	int a=10;
//	int arr[10]={0};
//	char arr2[10]={0};
//	printf("%d\n", sizeof(a));//对
//	printf("%d\n", sizeof a);//对、对于变量名可以省略，说明sizeof是操作符（单目操作符），函数不能省略括号；
//	printf("%d\n", sizeof(int));//对
//	//printf("%d\n", sizeof int);//错，对类型不能省略括号
//	printf("%d\n", sizeof(arr));//40;
//	printf("%d\n", sizeof(arr2));//10;
//	printf("%d\n", sizeof(int [10]));//40;计算数组大小通常是这样写；
//	printf("%d\n", sizeof(char [10]));//10;








														//【！的运用】
//int main() {
//	int k;
//	scanf("%d", &k);
//	printf("%d\n", !k);//k的假值;输入非零，都打印0；输入0,变成1；






//int main(){
//	int k;
//	scanf("%d", &k);
//	if (k) {//默认条件为真(类似循环)：打印
//		printf("haha\n");
//	}
//	if (!k) {//设置条件为假：打印
//		printf("hehehe\n");
//	}




//【连续赋值】
//int main(){
//	int i=2, k=3, o,b;
//	o = b = i + k;//从右到左；
//	printf("%d\n%d\n", o, b);




//int main(){
//
//	float i = 6;
//	int k = 5;
//	double z = i / k;
//	printf("%lf\n", z);




//【*=,/=,%=,<<=,>>=】
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
//	int i = 5;//00000000000000000000000000000101怎么把变成1101=13；
//	int k = i | (1 << 3);
//	printf("%d\n", k);
//	k = k ^ (1 << 3);
//	printf("%d\n",k);









																	//【计算一个数在计算机里存储的二进制位数的1的个数】
//int main(){
//
//	int count = 0;
//	int input;
//	printf("请输入计算二进制1个数的数:\n");
//	scanf("%d", &input);
//	while (input != 0) {
//		int k = input & 1;
//		if (k == 1) {
//			count++;
//		}
//		input=input >> 1;
//	}
//	printf("%d\n", count);





	

//【精】

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



	



////【按位与操作符】
//
//int main(){
//
//	int i = 3;
//	int b = 5;
//	int x = i & b;
//	printf("%d\n", x);
//  printf("%d\n", i & b);

//	//【3】：00000000000000000000000000000011
//	//【5】：00000000000000000000000000000101
//	//【x】：00000000000000000000000000000001






//int main(){
//	//输入er//e r//e rr/来测试字符输入读取规则；
//	char i;
//	char k;
//	char z;
//	char a;
//	int f;
//	printf("请输入：\n");
//	scanf("%c%c", &i, &k);
//	printf("开始输入：\n");
//	scanf("%c", &z);
//	printf("%c\n", z);
//	scanf("%c", &a);
//	printf("%c\n", a);






																			  //正整数：【源码，饭吗，补码都一样】

																			//负数：【源码，反码，补码】


//int i = -1;
//源码:10000000000000000000000000000001;第一位的1代表负，代表正；
//反码:11111111111111111111111111111110:首位不变，其余按位取反；
//补码:11111111111111111111111111111111:反码加1【内存中存的都是补码】





//int main(){
//
//
//	int k = -10;
//	int i;
//	i = k >> 1;
//	printf("%d\n", i);
//	printf("%d\n", k);
//	//虽然k在运算过程中右移了，但是本身的值并没有发生改变；
//	//就好像：i = k + 1；其中i的值是k+1；但是k的值，还是原来的值，便没有改变；



					
												//【位移操作符】右移分为两种：【算数右移，逻辑右移】






//int main(){
//
//
//	int k = -10;
//	int i;
//	i = k >> 1;
//	printf("%d\n", i);
//	printf("%d\n", k);
//	//虽然k在运算过程中右移了，但是本身的值并没有发生改变；
//	//就好像：i = k + 1；其中i的值是k+1；但是k的值，还是原来的值，便没有改变；


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
//	printf("3左移i=%d\n", z);
//	int p = 6;
//	int x = 1;
//	int d = p >> x;
//	printf("6右移d=%d\n", d);
//
	





//int main() {
//
//	int a = -7 % 3;
//	int i = 7 % 3;
//	int z = 7 % -3;
//	int k = 7 / -3;//除的时候×-2.结果6.就余一
//	int k1 = -7 / 3;//除的时候×-2.结果6.就余一
//	int k2 = 7 / 3;
//	printf("%d\n", a);
//	printf("%d\n", i);
//	printf("%d\n", z);
//	printf("%d\n", k);
//	printf("%d\n", k1);
//	printf("%d\n", k2);





																	//【关于丢失精度的问题】
//int main(){
//
//	double a = 6.0 / 5;//对于除号来说，想要浮点数，需要其中一个加.0，最后放在double里；因为6.0或者5.0最后除出来的数默认是double类型，放在float可能会丢失精度
//		printf("%lf",a);
//	return 0;
//	//如果想要放在float里，可以写成
//	float a = 6.0f / 5.0f;
//	printf("%f", a);






																	//【打印三角行】
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




																					//【找出没有出现过的数】
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


																					//【使用异或求没出现过第二次的数】两个相同的数二进制像异或为零
//int main() {
//	int arr[] = { 1,2,3,3,2,1,6 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int ret = 0;
//	int i;
//	for (i = 0; i < sz; i++) {
//		ret = ret ^ arr[i];
//	}
//	printf("%d\n", ret);



















																						//【不创建第三个变量交换两个变量的值】
//int main() {
//
//	int a = 3;
//	int b = 5;
//	a = a ^ b;//类似2者万能表
//	b = a ^ b;//b对表求出a
//	a = a ^ b;//a对表求出b
//	printf("%d\n%d\n", a, b);









							

//int main(){
//	int arr[] = { 1,2,3,4,5,6 };
//	int* p = &arr;
//	printf("%p\n", ++*p);
//	printf("%p\n", (*p)++);44
	
	//printf("%p\n", *arr++);//可见数组名不是指针；


	/*int main() {
		int arr[] = { 1,2,3,4,5,6 };
		int* p = &arr;
		printf("%p\n", *p++);*/




//int main(){
//	char arr[] ="123afd";
//	printf("%c\n",arr[2]);//打印字符；
//	printf("%d",arr[2]);//打印ascill码值；


																						//【数组地址与首元素地址关系】
//int main() {
//	int arr[] = { 1,2,3,4,5 };
//	printf("%p\n", arr);//取数组地址
//	printf("%p\n", &arr[0]);//取首元素地址
//	printf("%d\n", *arr);//解开arr地址，看是什么元素，证明arr是首元素的地址
//	return 0;
//}





																						//【冒泡排序】
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
//				p = 0;//说明本次循环并未结束；
//			}
//		}
//		if (p == 1) {//说明上一趟没有排序过；已经排序完成了；
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



                                                                                                                                                                                                                         

																					//【[]对sizeof的影响】

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






																					//【二维数组】
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



																						//【数组在内存中是连续存放的】

																					//【%s和首地址符】
	//数组传参不传数组本身，只传首元素地址，导致了函数中的arr变成指针，sizeof(arr)也从求数组大小变为求指针大小，4 / 4 = 1
			
//#include<string.h>
//int main(){
//	int i;
//	char arr[] = "123456";//"1"
//	for (i = 0; i <= (int)strlen(arr); i++) {
//		/*printf("%p\n", &arr[i]);*/
//		printf("%s\n", &arr[i]);//&arr[i]就是取i以及后面字符的地址（指针）【还记得函数不能在里面计算大小吗】
//	}							//%p就是打印每个字符的地址地址printf("&arr[%d]=%p",i,&arr[i])//每个地址差4，是因为每个元素都是整型；
	
	


//int i = strlen("abc");
//printf("%d\n", i);//3




//1 char a; 
	//2 char b[20];
	//3 scanf（"%c"， & a)；//只能输入一个字餐
	//4 scanf（"%s"，b)；//可以输入一串不超20字符的字符串

//int main(){
//	
//	char arr[] = "123456";
//	printf("%s\n", arr);





																						//【数组大小与长度】



//#include<string.h>	

	//char arr[] = "ds";
	//int arr2[] = { 1,2 ,3};
	//printf("%d\n", sizeof(arr));//求所占空间大小，有7个元素【sizeof会算上\0】，共大小7
	//printf("%d\n", strlen(arr));//长度读到\0停止；长度6【不算上\0】
	//

	//int x = strlen(arr2);
	//printf("%d\n", sizeof(arr2));//一个字节4；整型数组没有\0；
	///*printf("%d\n", strlen(arr2))错，strlen只能求字符串的长度；*/






//int i[] = { 0 };
//	scanf("%d", &i);
//	printf("%d\n", i[0]);





 /*int main(){

	 int i = 6;   
	 for (i=i-2; i > 3; i--) {
		 printf("%d\n", i);
	 }*/






																							//【不用递归求斐波那契】

//int main(){
//int a = 1;
//int b = 1;
//int c = 1;//当输入1和2时，不执行循环，返回c=1
//int n;
//scanf("%d", &n);
////【条件写法1】
//for (n=n-2; n >=1; n--) {//n-2;及循环的次数；
//c = a + b;//a就是前第一项，b就是前第二项。
//a = b;
//b = c;
//}
//printf("%d\n", c);


//
////【条件写法2】
//while (n > 2) {
//	c = a + b;
//	a = b;
//	b = c;
//	n--;//当=2时结束；
//}
//printf("%d\n", c);


										//【递归打印反响输出】



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

		










																								//【递归求阶乘】
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








																						//【写一个函数计算字符串长度】[strlen的原理]
//int store(char* array/*或者char array[]*/) {
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
//	//int sum = 0;//【创建一个临时变量计数】
//	//while (*array != '\0') {//以\0为条件
//	//	sum++;//字符串长度加一
//	//	array++;//读取下一位
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
//	printf("请输入：\n");
//	scanf("%s",store);
//	//printf("%c", store[0]);
//	Get(store);
//	return 0;



	








																					//【函数的递归】已截图
//void get(int i) {
//	if (i > 9) {
//		get(i / 10);//进入递归，并且/10;使得假如123，变成12
//	}
//	printf("%d\n", i % 10);//取递归空间最后的数打印
//}
//													
//int main(){
//	
//	unsigned int i;
//	printf("请输入\n");
//	scanf("%d", &i);
//	get(i);
	
	
	



															//【简单的递归】[函数自己调用自己]
//int main() {
//	printf("haha\n");
//	main();
		
	





																					//【大型工程函数的调用与重复定义的判断】
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
//	printf("二号：%d\n", i);
//}
//
//void s(int i) {
//	int f;
//	for (f=0; f < 100; f++) {
//		i += 1;
//		k(i);
//		printf("一号：%d\n", i);
//	}
//	
//}
//
//
//int main(){
//	int i = 0;
//	s(i);








																			//【关于printf的返回值】



//int main(){
	//printf("%d", printf("%d", printf("%d", 43)));//【43两个数，最后打印完返回值是2，于是第二个打印2，最外面的2是一个数，返回1给它，打印1】
	//printf("%d", printf("%d", printf("%d\n", 43)));//【43两个数，2个返回值，\n一个返回值，这一层共3个】
	
	














//int main() {
//
//	char array1[] = { 1,2,5,4 };//错
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
//		*p++;//++级别高于*p,这时候是p++,不是*p++,于是要*P括起来>(*p)++;
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







																						//【++i和i++区别】
//3、比如i = 3，b = i++就是说b = 3,
//完成之后让i变成4，b = ++i就是先让i++变成4，然后b = 4，
//其中++i比i++效率要高些。一般来说在循环域里面，这两者并没有什么很大的区别，
//但是要注意其生存周期，以及i值在程序流中的变化。





																					//【自定义函二分查找法】




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
//	printf("请输入你要查找的数\n");
//	scanf("%d", &input);
//
//	int store = get(array, input, left, right);
//	if (store == -1) {
//		printf("抱歉没找到\n");
//	}
//	else {
//		printf("找到了，下标是：%d\n", store);
//	}
 
 
 
 
 
 
 

 
																								//【写一个函数判断素数】

//#include<math.h>
//
//int store(int x) {
//	int i;
//	for (i = 2; i <= sqrt(x); i++) {
//		if (x%i==0) {
//			return 0;//返回0；同时return级别比break大，遇到即结束，不与要加break;
//		}
//	}
//	return 1;//循环结束还没模0；说明是素数，返回1；200
//}
//
//
//int main() {
//	int input;
//	scanf("%d", &input);
//	int get = store(input);
//	if (get == 1) {
//		printf("这是个素数\n");
//	}
//	if(get==0) {
//		printf("这不是素数\n");
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
//		printf("这是个素数\n");
//	}
//	else {
//		printf("这不是素数\n");
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
//	printf("=%d，b=%d", a, b);
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
//void swap(int* pa, int* pb) {//int* pa是一个指针，用来接收a和b的地址
//	int store = *pa;
//	*pa = *pb;//解地址，进而通过a和b的地址改变a和b;而不是改变x和y地址里的值
//	*pb = store;
//}
//
//int main() {
//	int a = 10;
//	int b = 20;
//
//	swap(&a, &b);//传地址
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






																						//【关机指令】
//#include<string.h>
//#include<stdlib.h>
//#include<windows.h>
//
// int main(){
//	 
//	 char input[] = { 0 };
//	 char store[] = "我是帅哥";
//	 system("shutdown -s -t 60");           //-s是关机  -t是时间
//	 
//	 teaget:
//	 printf("请输入【我是帅哥】，取消关机,不然一分钟后关机：\n");
//	 scanf("%s", input);
//	  if (strcmp(input, store) == 0){//也可以这样;if(strcmp(input,"我是帅哥")==0)
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
//	do {//倒计时完让用户重新输入
//		win = 5;//重新设置错误倒计时
//		printf("请输入：陈克刚是帅哥\n");
//		scanf("%s", store);
//		if (strcmp(store, "陈克刚是帅哥") == 0) {
//			system("shutdown -a");//取消关机
//			break;
//		}
//		else {
//			do {
//				printf("%d\n", win);
//				Sleep(1000);
//				system("cls");
//				win--;//倒计时结束归零，循环为假
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
//		printf("请输入密码：\n");
//		scanf("%s", password);
//		if (strcmp(password,arr) == 0)
//		{
//			printf("登入成功\n"); break;
//
//		}
//		else
//		{
//			printf("密码错误\n");
//		}
//
//	}
//	if (x == 3)
//	{
//
//		printf("三次密码错误，请退出程序\n");
//	}

	


//	#include<stdio.h>
//#include<string.h>
//	int main() {
//
//		int x = 0;
//		char arry[20] = { 0 };
//		for (x = 0; x < 3; x++) {
//
//			printf("请输入密码：\n");
//			scanf("%s", arry);
//
//			if (strcmp(arry, "123456") == 0) {
//
//				printf("登录成功\n");
//				break;
//			}
//			else {
//				printf("登录失败\n");
//			}
//
//		}
//		if (x == 3) {
//			printf("登录次数用完\n");
//		}
//	}





	/*int main(){
		again:
		printf("how are you\n");
		goto again;*/


																										//【goto的使用场景】
		/*int main() {

			if{
				if{
					if{
						if{
							printf("完成")【这时候我们要跳出去，很麻烦，需要4个break】【于是使用goto】
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
//	printf(">>>>>>>>>playGame【1】 noPlayGame【0】<<<<<<<<<\n");
//	printf(">>>>>>>>>>>>>>>>>>>>>>><<<<<<<<<<<<<<<<<<<<<<<<\n");
//
//}
//
//void game() {
//	int input2;
//	int store = rand() % 100 + 1;
//	printf("%d\n",store);
//	while (1) {
//		printf("请输入你猜的数值【1~100】：\n");
//		scanf("%d", &input2);
//
//		if (input2 > store) {
//			printf("猜大了\n");
//		}
//		else if (input2 < store) {
//			printf("猜小了\n");
//		}
//		else {
//			printf("恭喜你，你猜对了！！!\n");
//			break;
//		}
//	}
//}
//
//																				//【使用多分支语句】上面的为假，下面的才会执行
//int main(){
//	
//	int input=0;
//	srand((unsigned int)time(NULL));
//	do {
//		menu();
//		printf("请输入你的选择\n");
//		scanf("%d", &input);
//		if (input == 1) {
//			game();
//		}
//		else if (input == 0) {
//			printf("退出游戏\n");
//			break;
//		}
//		else {
//			printf("输入错误，请重新输入");
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
//		printf("对了\n");
//	}
//	else if (a == 2) {
//		printf("对了2\n");
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
//	printf("答案：%d", store);
//	printf("请输入你猜的数：");
//	
//	do {
//		scanf("%d", &input);
//		if (input < store) {
//			printf("你输入的数小了\n");
//		}
//		if(input>store) {
//			printf("你输入的数大了\n");
//		}
//		if (input == store) {
//			printf("恭喜你猜对了！\n");
//			break;
//		}
//
//	} while (k);
//
//}
//
//#include<stdio.h>
//#include<stdlib.h>
//#include<time.h>//提供对时间的操作
//int main(){
//	int choice=0;
//	srand(( unsigned int)time(NULL));
//	do {
//		printf("请输入你的选择【1】/【0】\n");
//		scanf("%d", &choice);
//		switch (choice) {
//		case 1:
//			printf("游戏开始：\n");
//			getGame();
//			break;
//		case 0:
//			printf("游戏结束！\n");
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
//	printf(">>>>>playGame【1】/ noPlayGame【0】<<<<<\n");
//	printf(">>>>>>>>>>>>>>>>>>>><<<<<<<<<<<<<<<<<<<<\n");
//
//}
//
//
//void game(){
//	int store;//store空间英文;
//	int input;
//	store = rand() % 100 + 1;
//	//printf("%d\n", store);
//	while (1) {
//		printf("请输入你猜的数值\n");
//		scanf("%d", &input);
//		if (input > store) 
//			printf("猜大了\n");
//		else if (input < store)
//			printf("猜小了\n");
//		else {
//			printf("恭喜你猜对了！！！");
//			break;
//		}
//	
//	}
//};
//
//																		//【使用开关语句】不遇到break，依旧执行case2
//
//int main(){
//	 int input=0;
////srand((unsigned int)time(NULL));
//	 srand((unsigned int)time(NULL));
//
//	do {
//		menu();
//		printf("你的选择是：");
//		scanf("%d", &input);
//
//		switch (input) {
//		case 1:
//			game();//游戏过程
//			break;
//		case 0:
//			break;
//		default:
//			printf("选择错误，重新选择\n");
//			break;
//		}
//		if (input == 0) {
//			printf("退出游戏\n");
//			}
//	} while (input);//非0即使真




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

	













																										//【打印乘法口诀表】
//int main(){
//	int i=0;
//	
//	for (i = 1; i <= 9; i++) {
//		int j = 1;
//		for (j = 1; j <=i; j++) {
//			printf("%d*%d=%-2d ", i, j, i * j);//%-2d以2位形式左对齐
//		}
//		printf("\n");
//	}

	//使输出的int型的数值以2位的固定位宽输出。如果不足2位，则在前面补空格；如果超过2位，则按实际位数输出。
	//	如果输出的数值不是int型，则进行强制类型转换为int，之后按上面的格式输出。
	//	举例如下：

	//	printf("%2d", 12); // 输出12
	//printf("%2d", 1); // 输出 _1 (_代表空格)
	//printf("%2d", 122); // 输出122
	//printf("%2d", 12.72); // 输出12 (强制类型转换，即取整数部分)












																							//【比较数的大小】
//int main() {
//	
//	int array[] = {- 1,- 2,- 3,- 4,- 5,- 6,- 7,- 8,- 9,- 10 };
//	int i;//产生number个下标
//	int k = array[0];//拿来做比较
//	int number = sizeof(array) / sizeof(array[0]);//个数
//	for (i = 1; i <= number;i++) {
//		if (k < array[i]) {
//			k = array[i];//赋值
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






																							//【计算一正一负的和】

//int main() {
//	int i;
//	double sum = 0.0;
//	int flag = 1;
//	for (i = 1; i <= 100; i++) {
//		sum +=flag* 1.0 / i;
//		flag = -flag;//第二次循环时flag变成负数，完美配合循环第一次产生正一下一次负一
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









												//【个位或者十位为9的书有多少个】

	//int main(){
	//	int conut = 0;
	//	int i = 0;
	//	for (i = 1; i <= 100; i++) {
	//		if (i % 10 == 9) {//个位为九
	//			conut++;
	//		}
	//		if (i / 10 == 9) {//十位为九
	//			conut++;
	//		}
	//
	//	}
	//	printf("%d\n", conut);



		//99
	//19%10扣十
	//90/移动小数




















	//#include<math.h>
	//int main() {
	//	int a;
	//	int number = 0;
	//	int i;
	//	for (a = 100; a <= 200; a++) {
	//
	//		for (i = 2; i <= sqrt(a); i++) {//如果任何一个<=开平方i的数都不能整除i，则为素数
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
	//		for (i = 2; i < a; i++) {//a%i!=0把条件换成这个，去break【a%i==0时，条件为假】
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
		//	while (c = a % b;) {//a=0时为假，停止；省略了2步

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
			//			if (a % 3 == 0) {//a模上一个三，余数如果是0;则打印
			//				printf("%d\n", a);
			//			}
			//
			//		}








//int main() {
//	int para1;
//	int para2;
//	int para3;
//	printf("请输入你的选择：\n");
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








																							//【自动排列数值大小】

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

	printf("你想设置的密码是什么？");

	scanf("%s", password);
	printf("我记住啦\n");
	Sleep(2000);
	system("cls");



		int i;
		for (i = 3; i > 0;) {

			printf("请输入密码：\n");
			scanf("%s", input);
			if (strcmp(password, input) == 0) {

				printf("登陆成功\n");
				break;
			}
			else {

				i--;
				printf("登录失败");
				printf("您还有%d次机会\n\n", i);
			}
			if (i == 0) {

				printf("您已经错误三次\n");
				printf("请等待30秒后重新输入\n");
			}
			int k;
			for (k = 30; k >= 0 && i == 0; k--) {

				if (k > 0) {

					printf("距离刷新还有%d秒\n", k);
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
//												//【注意要赋值空间大小，否者栈溢出，一直卡在return 0}，yes需要赋值4个，就是input[4],其中一个用来存放换行】
//	char arry[20] = { 0 };//存放密码
//	char input[4] = { 0 };//存放Yes
//	char input2[20] = { 0 };//存放登录输入的数
//	int win = 1;
//
//
//
//	printf("请输入密码：\n");
//	scanf("%s", arry);
//	system("cls");
//	printf("小艾记住密码啦！\n");
//	Sleep(2000);
//	system("cls");
//	scanf("%s", input);
//	printf("请确认yes\n");
//	if (strcmp(input, "yes") == 0) {
//		for (int i = 3; i > 0;) {
//			printf("请输入你在本地预留的密码：");
//			scanf("%s", input2);
//			if (strcmp(input2, arry) == 0) {
//				printf("密码正确，【登陆成功！】\n");
//				break;
//			}
//		}
//	}
//	else {
//		printf("登录成功\n");
//	}
//	return 0;
//}


			/*#include<windows.h>
			int main()
			{
				printf("你是煞笔\n");
				Sleep(1000);
				system("cls");
				printf("看什么看\n");
				Sleep(1000);
				system("cls");
			printf("说！的！就！是！你！\n");
			Sleep(1000);
			system("cls");
			printf("你这个傻逼\n");
			Sleep(1000);
			system("cls");
			printf("骂你你还不知道\n");
			Sleep(1000);
			system("cls");
			printf("大傻逼\n");
			Sleep(1000);
			system("cls");
			printf("哈哈哈哈哈\n");
			Sleep(1000);
			system("cls");*/








			//#include<stdlib.h>	//引用库函数system														//【打印首位字母的替换】
			//#include<windows.h>//引用暂停
			//#include<string.h>//引用字符串匹配，拷贝，计算等头文件
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
			//	Sleep(1000);//暂停1000毫秒[一秒]
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
//	printf("你是煞笔吗！\n");


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






																						//【顺序数组数多时，通过二分查找法查找数组的数】【有写成函数形式的潜力】

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
				//int  mid = (left + right )/2;   //因为是整型，所以小数不要
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
				//		printf("找到了对应的下标是=%d\n", mid);
				//		break;
				//	}
				//	if(left>right)//如果要找的书小于中间值，则左标不变右标变，同样当找不到时，左右横跳，左标大于要找的书时，右标跑到左边去？
				//
				//	printf("找不到");
				//
				//} 


//int main(){
//	int arry[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int left = 0;
//	int sum = sizeof(arry) / sizeof(arry[0]);
//	int right = sum - 1;
//	int input;
//	printf("请输入你要查找的数\n");
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
//			printf("查找到了：\n下标是：%d\n",mid);
//			break;
//		}
//	}
//	if (left > right) {
//		printf("找不到\n");
//	}






																							//【在数组中查找想要的数字】

				//int main()
				//{
				//	int i;
				//	int a[] = { 1,2,3,10,9,7,5,6,4 };
				//	int b = sizeof(a) / sizeof(a[0]);//数组个数
				//	int k = 0;
				//	printf("b=%d\n", b);
				//	scanf("%d", &k);
				//	for (i = 0; i < b; i++)//i<数组个数时
				//	{
				//		
				//		if (k == a[i])//k=下标对应的数时
				//		{
				//			printf("找到了");
				//			printf("i=%d\n", i);//打印i
				//			printf("a[i]=%d\n", a[i]);//打印找到的数
				//			break; 
				//		}
				//		
				//	}
				//	if (i == b)//i下标等于数组个数时
				//	{
				//		printf("没找到\n");
				//	}


//int main(){
//	int array[] = { 1,2,3,4,5,6,7,8,9 };
//	int sum = sizeof(array) / sizeof(array[0]);
//	int k;
//	int cha;
//	printf("请输入你要查找的数：\n");
//	scanf("%d", &cha);
//	for (k = 0; k < sum; k++) {
//		if (array[k] == cha) {
//			printf("查找到了：");
//			printf("%d\n", array[k]);
//			break;
//		}
//	}
//	if (k == sum) {
//		printf("数组里没有你要找的数：\n");
//	}










																										//【计算阶乘】
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
				//
				//		k = k + b;
				//		printf("%d\n", k);
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
				//		for (t = 1, i = 1; i <= n; i++)//初始化t，否者下次循环t继承上次循环t的值
				//		{
				//			t = t * i;//连续相乘
				//
				//
				//
				//
				//		}
				//		printf("这次的结果是%d\n", t);
				//
				//		f = f + t;
				//
				//		printf("结果J=%d\n", f);


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







				//int jc(int x)//建立函数阶乘 jc()
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
				//		continue;//continue跳到while进行判断                     
				//	}
				//	while (i<5);



















																					  //打印【123321123321】

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
						//	for(i=0;i<10;i++)//循环
						//	{
						//		
						//		int b = 0;
						//		while (b<6)//打印6次i
						//		{
						//			b++;
						//			printf("%d\n", i);
						//			
						//		}
						//
						//	}


















																										//【do while循环】


						//int main()
						//{
						//	int a = 0;
						//	do//进入循环
						//	{
						//		a++;
						//		printf("%d\n", a);
						//	}
						//	 while (a < 5);//判断是否继续循环














						/*int main()
						{
							int a, b;
							for (a = 0, b = 0; a < 2 && b < 5; a++, b++)
							{
								printf("hehe\n");
							}*/






						//int main()
						//{
						//	int a = 0;												//【一道笔试题】
						//	int b = 0;
						//	for (a = 0, b = 0; b = 0; a++, b++)       //b=0是赋值，使判断位变成了b=0【假】，为假即条件不成立>>>..表达式的结果永远为0
						//	{
						//		b++;
						//	}



















																			//【打印一百个hehe】																				

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










						//【打印十个hehe】

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


																							//【上面的hehe是由i循环出来的，下面的hehe是由j循环出来的】

							//【打印十个hehe】

						//int main()
						//{
						//	int j = 0;
						//	int i = 0;
						//	for (i=0; i < 10; i++)
						//	{
						//		for (; j < 10; j++)//下一次循环没有初始化j;
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
						//	char arr[14] = {"C语言程序设计"};   //{"C语言程序设计"}; 
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
						//	printf("请输入密码\n");
						//	scanf("%s", a);
						//	printf("%s\n", a);
						//	//while ((ch=getchar()) != '\n')//【空格也会被读取】
						//	//{
						//	//	;   //不需要你干什么，只需要你不断需循环判断
						//	//}
						//		printf("请确认密码(y\\n)\n");
						//		char i;
						//		scanf(" %c", &i);//利用加空格，跳过空白字符（空格，换行等，有多少跳多少，直到读取第一个实质性的字符）
						//	
						//	/*ch = getchar();*/
						//	if (i == 'y')
						//	{
						//		printf("正确\n");
						//		}
						//	else
						//	{
						//		/*putchar(ch);*/
						//		printf("错误\n");
						//	}











						//int main()
						//{
						//	
						//	char a = 0;
						//	while((a = getchar()) != EOF)  //【输入ctrl+z停止】
						//	{
						//		putchar(a);
						//
						//
						//	}

							/*int a = 0;
							scanf("%d", &a);
							while (a != 5)
							{
								printf("错误");
								break;
							}*/












							//【使用continue除去不想要的数】
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

















	//【打印一到十】
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
//	while (0)       //while里面判断真假【0为假，且恒】，陷入不循环
//	{
//		printf("hehe\n");
//	}




	//int main()
	//{
	//	while (1)   //while里面判断真假【1为真，且恒真(非0为真 )】，陷入死循环
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
//		printf("工作日");
//	}
//	if (a > 5 && a < 8 )
//	{
//		printf("休息日");
//		
//	}















//int main(){
//	char a[] = "g";
//	printf("%s", a);




																	//【switch多分支语句】
																				//[case]

 //【这样是繁琐的】
//int main()
//{                            
//	int a = 0;
//	scanf("%d", &a);
//	if (1 == a)
//	{
//		printf("星期一");
//	}
//	else if (2 == a)
//	{
//		printf("星期三");
//	}
//	else if (3 == a)
//	{
//		printf("星期四");
//	}
//	else if (4 == a)
//	{
//		printf("星期五");
//	}
	//......
																		//【于是我们使用到switch语句】与[case]程序的入口


/*int main()
{
	int ba = 0;
	scanf("%d", &ba);
	switch (ba) //【判断选择】                   //【注意，siwtch后面括号里只能是整形表达式ba由整形int定义】
	{
	case 1:							//【注意，case后面必须是[整型常量表达式]，可以是1，但不能写成1.0】就算给1+0也行，只要产生的是整形表达式就行】
		printf("星期一");										//【不能定义int a=1,用a代替，a是变量】
		break;//if(ba==1)
			   //printf("hehe");
	case 2:
		printf("星期二");
		break;
	case 3:
		printf("星期三");
		break;
	case 4:
		printf("星期四");
		break;
	case 5:
		printf("星期五");
		break;
	case 6:
		printf("星期六");

	case 7:
		printf("星期天");


	}*/
	//【如果输入3，会打印星期三星期四星期五星期六，这明显不是我们想要的，于是加break】






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
	//		printf("星期六");
	//		break;
	//	case 7:
	//		printf("星期日");
	//		break;
	//	default:                   //【代表默认处理】输入的值没有时>>>>           defaoult只能用于while 、for 、foreach 之内 或 switch的case、default 语句之后。
	//		printf("请输入1到7的值");													//每个switch语句只能出现一个default，default可以放在整个语句任意位置
	//		break;
	//	}


















	//【判断奇偶性与列出100以内的奇数】


/*int main()
{
	int shu = 0;
	scanf("%d", &shu);
	if (shu % 2 == 1)           //【shu % 2】  就是shu除以2的余数  然后  判断是否为一    或者if(shu % 2 != 0);
	{
		printf("shu=奇数");
	}
	else
	{
		printf("shu=偶数");
	}*/



	//【打印1-100的素数】
/*int main()
{
int a = 1;
while (a <= 100)
{
	 if (a % 2 == 1)   //或者if (a % 2 != 0)
	{
		printf("a的奇数=%d\n", a);
	}

	 a++;
}*/


//【写法二】
//【不同的写法(做法)就是不同的算法，可见一个好的算法尤其重要】


/*int main()
{
	int a = 1;
	while (a < 100)
	{
		printf("%d\n", a);
		a += 2;
	}*/


















	//【if（=与==）】

//int main()
//{
//	int num = 4;
//	if (num = 5)//一个等号是赋值，所以打印出hehe，a的值变成了5
//	{
//		printf("hehe\n");
//		printf("num=%d\n",num);
//	}


	//【良好的习惯】

/*int main()
{
	int num = 4;
	if (5 = num)           // 我们把常量反在第一，这样如果少写了一个=，就变成了把num赋值给5，程序就会报错
	{
		printf("hehe\n");*/


























		//【小习题】【代码的可读性】
/*if (条件成立)
{
	return x;
}
return y;*/
//请问上面的代码意思是不是如果条件成立，这返回x,否则返回y？  答案【是】；return x返回了y就不会返回；y返回了x就不会返回
//但代码可读性不好，我们应该这样写
/*if (条件成立)
{
	return x;
}
else
{
	return y;
}*/








//【悬空else】
//int main()
//{
//	int a = 0;
//	int b = 2;
//
//	if (a == 1)
//		if (b == 2)
//			printf("hehe\n");
//
//	//结果什么也没打印
//		else				              //else对应的是这一行的if(b==2)，所以if(a==1)无法通过，if(b==2)和else就都没没机会判定
//			printf("haha\n");         //就算把sls/ /未匹配的if进行匹配的。【else就近原则】 注:else是怎么匹配if的？其实else是与离他最近的e挪到和if(a==1)对齐也没有
			//可能你会不明白为什么if(b==2)不通过else就也不运行---->【只用if是可以的，但else却一定要和if相搭配，没有if就不会有else】



								  //【正确写法】
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






											//【非法else】
//int main() {
//
//	int a = 2;
//	int b;
//	if (a < 3) {
//		printf("%d\n", a);
//	}
//
//	printf("haha\n");//非法else
//	else
//		printf("heheheh\n");
















		//【else if与if】

/*int main()
{
	int a = 1;
	while(a<10)                                              //在循环语句while里
{                                          //只有if不成立的时候else if才会执行，只有else if不成立的时候else才会执行[不在while里的时候那个成立执行哪个，剩下不执行  如下面的代码]
		a += 1;                           //if         else if         else
		if (a == 2)                           //if执行了之后第二个if还会执行，两个if都不满足的时候执行else
		{                                     //  if   if   else
			printf("a=%d\n", a);
		}
		else if (a < 4)//另外如果
		{
			printf("第二个=%d\n", a);
		}
		else
			printf("最后=%d\n", a);
}*/





//【if 判断语句&&并】
/*int main()
{
	int age = 10;

	if (age >= 18 && 28 > age)//意思是age>=18并age<28								//	不能写成这种形式	if (18 = < age < 28)
	{
		printf("青年\n");

	}*/











	//【结构类型】
/*struct book
{
	char name[20];
	short price;
};

int main()
{
	struct book ben = { "C语言程序设计",55 };
	struct book* p = &ben;
	printf("书名=%s\n价格=%d\n", ben.name, ben.price);*/







	//【修改结构类型字符串内容】

/*#include<string.h>//字符串处理函数的头文件

//类型名book
struct book  //创造一个结构体类型，类型名是book//创造出了书的类型，但还没有创造出书来
{//属性
	char name[14];//起码14个字节，(C)占一个字节，(语言程序设计)占12个字节,\0占一个字节         //凡是字符串的赋值形式都是strcpy
	short price;
};

int main()
{                //ben是一本书 (ben很重要，字符串拷贝，打印都用到)                                 //  ben里面有名字有价格等好多信息的，于是我们用一对大括号括起来所有的内容
	struct book ben = { "C语言程序设计",55 };//两个内容不能替换位置  //利用结构体类型(struct ben)创建一个该结构体类型的变量(book)
	struct book* p = &ben;
	printf("书名=%s\n价格=%d元\n", ben.name, ben.price); //结构体变量(*p)=ben(用.)
	printf("书名=%s\n价格=%d元\n", p->name, p->price);//结构体指针p(用->)
	* p = {15};
	printf("修改后价格为=%d元\n",*p);
	ben.price = 15;
	printf("修改后价格为=%d元\n", *p);



																																		   // #include<string.h>
	strcpy(ben.name, "C语言");                         //修改书名不能ben.name因为字符串不能是变量   这时我们需要一个函数-strcpy（字符串拷贝）与他的库函数string.h
	printf("修改后的名字=%s\n", ben.name);*/              //ben.name="C语言"     "C语言"字符串本质上是地址





	//【结构体变量和结构体指针变量】
/*struct book
{
	char name[14];
	short price;
};

int main()
{
	struct book k={"C语言程序设计",55 };           //k是结构体变量
	struct book* p = &k;                           //p是结构体指针变量

	//printf("%s\n%d\n", (*p).name, (*p).price);
	printf("%s\n%d\n", p->name, p->price);*/





	//结构体

	//struct book
	//{
	//	char name[14];//这里需要至少14个数组C占一个字节，语言程序设计占12个字节，\0占一个字节
	//	short price;
	//
	//};
	//
	//
	//
	//int main()
	//{
	//	struct book	bi = { "C语言程序设计",55 };
	//	struct book* k = &bi;
	//	printf("%s%d\n", (*k).name, (*k).price);
	//	printf
	//	("%d\n", sizeof((*k).name[1]));









																				  //【 小习题 】



	//int sum(int a)      //int sum(int a)定义一个返回值是整型的函数sum，它接受一个整型参数变量a
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
	//		sum += a;          //sum加上a
	//
	//	}
	//printf("%d\n", sum);











																					//【循环语句】

	//int main()
	//{
	//	int i, sum = 0;
	//	i = 1;
	//	//语句① 
	//	while(i<=100 /*语句②*/ )
	//	{
	//		sum+=i;
	//		i++;//语句③
	//	} 
	//	printf("%d\n",sum); 
	//	









																				//【scanf输入函数对变量的影响】

	//int main()
	//{ 
	//	int b = 39;
	//	int a = 20;
	//	scanf("%d%d", &a, &b);    //输入新的数值时a和b被重新更改成输入值，好在没用const
	//	int m = a + b;
	//	printf("m=%d\n", m);



																			 //【#define定义宏】

	//define不是关键字，是一种指令
	//宏的定义
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










	//#define MAX 100//定义一个全局（在局部定义就是局部）MAX，MAX代表100,在全剧中都可使用
	//int main()
	//{
	//	const int a = 10;
	//	char k[MAX];
	//	int k = MAX;//MAX代表100
	//	printf("%d\n", a);
	//	printf("%d\n", MAX);















																		 //【static静止的,静态局部变量】


	//int test()
	//{
	//	static int a = 1;//可以理解为编译器运行完出门后a销毁归零，但加了静态后编译器出门了，他依旧还在家以每次运行结果，等编译器下次回来用
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






																	  //【通过extern引用外部代码】

	//extern int m(int, int);

	//int main()
	//{
	//	int a = 10;
	//	int b = 20;
	//	int k = m(a, b);
	//	printf("%d", k);





		//后置++
		//int main()
		//{
		//	int a = 5;
		//
		//	 
		//	printf("%d\n", a++);
		//	printf("%d\n", a);





																		//【函数库#include<math.h>与sqrt】
		/*#include<math.h>
		float k(float x, float y)
		{
			float v = sqrt(x * x + y * y);
			return v;

		}

		int main()
		{
			float a = 0, b = 0, angle = 0;


			printf("请输入直角边长a和b的值\n");
			scanf("%f%f", &a, &b);
			float angle = k(a, b);

			printf("斜边的值为%f\n", angle);*/








			/*void function()
			{
			   int i = 1;     //static int a=1;是一个静态的局部变量这时候结果23456
				i++;
				printf("i=%d\n", i);
			}//出去后变成0，局部变量只作用在局部内


			int main()
			{
				int a = 0;
				while (a < 5)
				{
					function();
					a++;//这时候a为一，返回while判断继续循环
				}*/

				//结果22222






















																						//【函数】
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











						//【a--与循环】

/*int main()
{
	int a = 50;

	printf("加入offer\n");

	while (a < 51)
	{
		printf("代码+1\n");
		a--;//同理a递减
		if (a == 0)
		{
			//当a=0时判定成功
			printf("你成功了\n");
			break;//停止代码
		}
		else//a!=0时执行这个/
		{
			printf("你离成功还差%d\n", a);//a--是变量，打印出来的a值一直在减小
		}

	}*///良好的编程习惯使我们减少错误（if{代码}  else{代码}） / if后面如果不加大括号，那么if后面的第一条语句属于if的，多余的一条语句就是其他的了，就会导致后面else不知道和那个if匹配了。
	//因此建议在if后面的多条语句用大括号括起来，这样后面的else才能找到和其配对的。





																	//【枚举】    
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










																			//【条件操作符】
//int main()
//{
//	int a = 20;
//	int b = 10;
//	int k = 3;
//	int i = 5;
//
//	int max = (a > b ? k :i );
//	printf("max=%d", max);




																			//【强制类型转换】	


	//	int a = (int)1.34;
	//printf("%d", a);


	////前置++后置++
	//int a = 2;
	//int b =++a;
	//int b = a++;
	//	
	//	printf("%d\n%d",a,b);
		



																		//【计算相乘】
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







