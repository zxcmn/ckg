


															//【找嫌疑人】
//日本某地发生的一起谋杀案，嫌疑人有4个
//1.A:不是我
//2.B:是C
//3.C:是D
//4.D:C在胡说
//现在已经知道有3人说的是真话，1人说的是假话
//请编写程序判断谁才是凶手；


//int main() {
//	char xs;
//	for (xs = 'A'; xs <= 'D'; xs++) {//假设凶手是谁【如果真是，必定有3个人说的是对的】
//		if ((xs != 'A') + (xs == 'C') + (xs == 'D') + (xs != 'D') == 3) {//条件为真，返回1、条件为假返回0；有三个真；加起来=3
//			printf("%c", xs);//打印假设成立的凶手
//		}
//	}
//
//	return 0;
//}






														//【猜名次】
//题目内容：
//5位运动员参加了10米台跳水比赛，有人让他们预测比赛结果：
//A选手说：B第二，我第三;
//B选手说：我第二，E第四;
//C选手说：我第一,D第二;
//D选手说：C最后，我第三;
//E选手说：我第四，A第一;
//比赛结束后，每位选手都说对 半，请编程确定比赛的名次。



//int main() {
//	int a, b, c, d, e;
//	for (a = 1; a <= 5; a++) {
//		for (b = 1; b <= 5; b++) {
//			for (c = 1; c <= 5; c++) {
//				for (d = 1; d <= 5; d++) {
//					for (e = 1; e <= 5;e++) {
//						if (
//							((b == 2) + (a == 3) == 1)
//							&& ((b == 2) + (e == 4) == 1)
//							&& ((c == 1) + (d == 2) == 1)
//							&& ((c == 5) + (d == 3) == 1)
//							&& ((e == 4) + (a == 1) == 1)
//							) {
//							if (a * b * c * d * e == 120) {
//								printf("a=%d b=%d c=%d d=%d e=%d\n", a, b, c, d, e);;
//							}
//						}
//					}
//				}
//			}
//		}
//	}
//	return 0;
//}





















//1111111110000000 - 128
//1111111101111111 - 128 - 1
//截断存入的补码：
//01111111
//符号位是0；补 = 反 = 原





										//【打印菱形】

//int main() {
	//
	//	int line;
	//	scanf("%d", &line);
	//	int i = 0;
	//	int j = 0;
	//	for (i = 0; i < line; i++) {//上半部分
	//		
	//		for (j = 0; j < line - 1 - i; j++) {//line-1=6
	//			printf(" ");
	//		}
	//		for (j = 0; j < 2 * i + 1; j++) {
	//			printf("*");
	//		}
	//		printf("\n");
	//	}
	//	for (i = 0; i < line-1; i++) {//下半部分
	//		for (j = 0; j <=i; j++) {
	//			printf(" ");
	//		}
	//		for (j = 0; j < 2*(line-1-i)-1; j++) {//2*6-1；2*5-1;2*4-1.....line-1=6
	//			printf("*");
	//		}
	//		printf("\n");
	//	}
	//	return 0;
	//}










//【为什么字符串数组地址存入指针可用%c打印单个字符】指针跨度为类型字节，加一减一才会移动

//int main() {
//	char arr[] = "hhahesf";
//	char* pa = arr;
//	printf("%c\n", arr);//字符串数组本身用%c输出就不对，就好像前面的以浮点读出，整型打印，无法打印出很大的数
//	printf("%c\n", *pa);//这里的指针存入的是一个字符的地址，%c输出值，%p输出地址
//	return 0;
//}







//【指针减去指针=指针之间元素的个数】【不是字节的个数】



															//【结构体类型的使用与传参使用的形参】

//struct stu {
//	int id;
//	char name[10];
//	int age;
//};
//
//void fun(struct stu* pa) {
//	printf("%s\n", (*pa).name);
//}
//
//int main() {
//	struct stu a[3] = { {9928,"chen",20},{9936,"ke",19},{9958,"gang",21} };
//	fun(a + 1);
//
//	return 0;
//}






//【形参是指针用->,形参是变量用.】

//struct b {
//	char m[20];
//	int i;
//	char d[20];
//};
//
//struct stu {
//	struct b s;//结构体
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










//【2，22，222，2222，22222】相加

//别人写的[暂时看不懂]
//#include <stdio.h>
//#include <math.h>
//int f(int x, int y) {
//	if (x != 0) return x * 2 * pow(10, y) + f(x - 1, y + 1);
//	else return 0;
//}
//int main() {
//	int x;
//	scanf("%d", &x);
//	printf("%d", f(x, 0));
//}






//char arr[10]={0};     scanf("%c%s") % c% s遇到空格会停止；用gets_s(arr,10);gets_s是接收包括空格，以回车建结束；10是允许输入10个字符（包括\0）









//数组名代表第一个元素的首地址，
//是一个具体的常量，假如让数组名自增或自减，
//在其过程中必涉及到赋值的运算，
//而一个地址常量是不能作为赋值运算符的左值的，
//所以，编译就会报错
//arr++; 报错
//arr + 1; 不报错










//                                         []是一个操作符，类似a+b；同样可以写成b+a;故arr[2]<==>2[arr]等价；

//int main() {
//	int arr[10] = { 2,3,4,5,6 };
//	printf("%d\n", arr[2]);
//	printf("%d\n", 2[arr]);
//}
//int *pa=arr;arr和*pa都是首地址，故pa=arr,故*(pa+2) <=>  *(arr+2)<=>*(2+pa)<==>*(2+arr)==2[arr]==p[2]


//arr[2] == 编译器处理成:*(arr + 2);
//pa[2]==编译器处理成:*(pa+2);



																		//【利用指针相减算字符串的长度】




////int Getstore(char arr[]) {//传的是首地址，利用这点指针求末尾斜杠零地址
//char* store2 = arr;//把首地址记住，一会arr会变成斜杠零的地址；
//while (*arr != '\0') {//条件不满足的时候找到斜杠零的地址了；
//	arr++;
//}
//return arr - store2;//两个地址相减；
//}
//
//
//int main() {
//	char arr[] = "adfgj";
//	int len = Getstore(arr);
//	printf("%d\n", len);




//int* pa; int意思是pa指向的那个对象类型是整型;
// 【二级指针】 int **paa=&pa;就是*pa解引用,就是地址指向的那个值;//pa是指针变量,也是变量,可以对其取地址;





//【指针相减】条件：两个至真指向同一块空间；比如不能char减去int
// 指针-指针=指针之间元素个数【从2前面到7后面共3个数】；

// 
//int main(){
//	int i[] = { 2,5,2,7 };
//	printf("%d\n", &i[3] -&i[0] );//指针-指针=指针之间元素个数【从2前面到7后面共3个数】；


//int main(){
//	char arr[] = "absfs";
//	printf("%d\n", &arr[5] - &arr[0]);//斜杠0的地址减去第一个下标的地址，等于字符串长度；







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






//指针地址由低到高








//int main() {
//	int i;
//	int b;
//	if (a && b) {//a和b都为真才打印；
//		printf("sjfs");
//	}
//}


																   		  //【！的运用】
//int main() {
//	int k;
//	scanf("%d", &k);
//	if (k) {//默认条件为真(类似循环)：打印
//		printf("haha\n");
//	}
//	if (!k) {//设置条件为假：打印
//		printf("hehehe\n");
//	}



//int main() {
//int k;
//scanf("%d", &k);
//printf("%d\n", !k);*//k的假值;输入非零，都打印0；输入0,变成1；














																			//【源码，反码，补码】
//int i = -1;
// 
// 
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





//int main() {
//
//	int 3/5//商0余3，结果为0；
//  int 6/5//商1余1，结果为1；
//  int 7%3//商2余数1.结果为1；
// int 7/3//商2余数1，结果为2；
//	return 0;
//}







//【使用异或求没出现过第二次的数】
//int main() {
//	int arr[] = { 1,2,3,3,2,1,6 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int ret = 0;
//	int i;
//	for (i = 0; i < sz; i++) {
//		ret = ret ^ arr[i];
//	}
//	printf("%d\n", ret);





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







																			//【不创建第三个变量交换两个变量的值】
//int main() {
//
//	int a = 3;
//	int b = 5;
//	a = a ^ b;//类似2者万能表
//	b = a ^ b;//b对表求出a
//	a = a ^ b;//a对表求出b
//
//	printf("%d\n%d\n", a, b);



																			//【数组名不是指针】
//int main(){
//	int arr[] = { 1,2,3,4,5,6 };
//	int* p = &arr;
//	printf("%p\n", *p++);
//	printf("%p\n", *arr++);//可见数组名不是指针；

//如果数组名是指针，那么应该能和指针一样进行指针的*p++操作；









																	//【%s和首地址符】
//#include<string.h>
//int main() {
//	int i;
//	char arr[] = "123456";
//	for (i = 0; i <= (int)strlen(arr); i++) {
//		printf("%s\n", &arr[i]);
//	}

//printf("%s\n", arr[1])这里用% s是不行的, % s是打印字符串（arr就是地址），arr[1]是具体的（一个）字符数，应该用% c;





//int main() {
//	int a[10] = { 1,2,3 };
//	int i = 1;
//	printf("%d", a[i]);
//	scanf("%d", &a[i]);//【要求用户输入一个整型的值,并把它保存在数组a下标为i的那一位!】
//	printf("%d\n", a[i]);









//#include<stdio.h>
//#include<string.h>
//int main() {
//	char array[] = { "你好" };
//	printf("%d\n", strlen(array));

//int main() {
//	/*char array5[] ={ '2'};*/
//	char array1[] = { 1,2,5,4 };//错
//	char array2[] = "134";
//	char array3[] = { '1','2','3','\0' };
//	printf("%s\n", array1);
//	printf("%s\n", array2);
//	printf("%s\n", array3);
	/*printf("%s\n", array5);*/

	


//int main() {
//	int array1[] = { 1,2,3,4 };//对
//	char array2[] = { 'b','t','e','\0' };//"biet";
//	printf("%d\n", array1[2]);
//	printf("%s\n", array2);














															//【如何让一个变量正负循环】
//int flag = 1;
//int i;
//int main(){
//for (i = 1; i <= 100; i++) {
//	num = flag * i;
//	flag = -flag;//第一次变成负的flag，第二次负负得正变成正的flag
//}


















//【如何交换两个变量里的值】
//int a = 10;
//int b = 20;
//if (a < b)
//{
//	int nu = a;//把a的值复制下
//	a = b;//把比a大的值赋给a
//	b = nu//把比b小的值赋给a
//}










//scanf("%d#%d#%d", &a, &s, &d);//你在输入里的格式怎么样，你就要怎么输入【输入#输入#输入】














//int MAX(int x, int y)
//{
//
//	int z = (x * y);
//
//	return z;
//
//}
//
//int main()
//{
//	int max;
//	int a = 0;
//	int b = 1;
//	for (a = 1; a != 0; a++)
//	{
//		int max = 1;
//		max = MAX(a, );
//
//		printf("%d\n", max);
//	}





//#include<stdio.h>
//
//#include<math.h>
//int MAX(int x, int y)
//{
//	int z = sqrt(x * x + y * y);
//
//	return z;
//}
//
//int main()
//{
//	int b = 0;
//	int a = 0;
//	scanf("%d%d", &a, &b);
//	int max = MAX(a, b);
//	printf("%d\n", max);














															
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







																			//【笔试题】

//int main()
//{
//	int a = 0;												//【一道笔试题】
//		int b = 0;
//	for (a = 0, b = 0; b = 0; a++, b++)//b=0是赋值，使判断位变成了b=0【假】，为假即条件不成立
//	{
//		b++;
//	}


























