#define _CRT_SECURE_NO_WARNINGS 1    

#include<stdio.h>	





















//精细的写法



//if (str == NULL)
//{
//	return 0;
//}
//else
//{
//	return 1;
//}
//
//
//优质写法：
//
//return str != NULL;//不等于空指针成立返回1，否则返回0；





											//【strcat和strncat】

//strcat【被追加者，追加者】

//#include<string.h>
//int main() {
//
//	char arr[20] = "hell ";
//
//	strncat(arr,arr,5);
//	printf("%s\n", arr);
//
//	return 0;
//}




//strncat【被追加者，追加者，追加者个数】

//#include<string.h>
//int main() {
//
//	char arr[20] = "hell ";
//	char arr2[] = "hh";
//	//strcat(arr,"hh");//可以
//	//strcat(arr,arr2);//可以
//	//strcat(arr,arr);//不可以
//
//	printf("%s\n", arr);
//
//	return 0;
//}





															//判断字符是不是该字符的翻转字符


//方法一：利用位移法

//#include<string.h>
//
//int string_swap(char* str,char* str2)
//{
//	int i = 0;
//	int n = strlen(str);
//
//	for (i = 0; i < n; i++)//全部循环一遍
//	{
//		char tmp = *str;
//		int j = 0;
//		for (j = 0; j < n - 1; j++)
//		{
//			*(str + j) = *(str + j + 1);
//		}
//		*(str + n - 1) = tmp;
//		if (strcmp(str,str2)==0)//某一次找到返回1
//		{
//			return 1;
//		}
//	}
//	return 0;
//}
//
//
//int main() 
//{
//
//	char arr[] = "ABCDEF";
//	char arr2[] = "CDEFAB";
//	int k = 2;//一次旋转2个
//
//	int Sum=string_swap(arr,arr2);
//	if (Sum==1)
//	{
//		printf("yes\n");
//	}
//	else
//	{
//		printf("no\n");
//	}
//
//	return 0;
//}






//方法2:利用三步翻转法


//#include<string.h>
//
//void swap(char* str1, char* str2)
//{
//	while (str1<str2)
//	{
//		char store = *str1;
//		*str1 = *str2;
//		*str2 = store;
//		str1++;
//		str2--;
//	}
//}
//
//
//int string_swap(char* str1, char* str2)
//{
//	int len = strlen(str1);
//	int k = len;
//	while (k--)
//	{
//		swap(str1, str1);
//		swap(str1 + 1, str1 + len - 1);
//		swap(str1, str1 + len - 1);
//		if (strcmp(str1,str2)==0)
//		{
//			return 1;
//		}
//	}
//	return 0;
//}
//
//
//int main() 
//{
//
//	char arr[]="ABCDEF";
//	char arr2[]="CDEFAB";
//	//char arr2[] = "FABCDE";
//
//	int Sum=string_swap(arr,arr2);
//	if (Sum==1)
//	{
//		printf("yes\n");
//	}
//	else
//	{
//		printf("no\n");
//	}
//
//	return 0;
//}



//后面的往前放呢？其实转到最后一个时候就是了








//【写法3】！

//如果给ABCD追加ABCD
//ABCDABCD
//我们再来
//CDAB
//是不是可以在追加的字符串中的子字符串找到它












//#include<string.h>
//
//int arr_compare(char*arr1,char*arr2)
//{
//	if (strlen(arr1)!=strlen(arr2))
//	{
//		return 0;
//	}
//	strncat(arr1,arr1,6);//函数，只要有一模一样的子字符串就返回首地址，没有返回NULL空指针
//
//	char* pa = strstr(arr1,arr2);
//	return pa != NULL;
//
//}
//
//
//
//int main()
//{
//
//	char arr1[20] = "ABCDEF";
//	char arr2[] = "CDEFAB";
//
//	int ret=arr_compare(arr1,arr2);
//	if (ret==1)
//	{
//		printf("找到了\n");
//	}
//	else
//	{
//		printf("没找到\n");
//	}
//
//	return 0;
//}











																	//旋转字符串


                             //写法1

//#include<string.h>
//
//void string_swap(char* str, int k)
//{
//	int i = 0;
//	int n = strlen(str);
//
//	for (i = 0; i < k; i++)
//	{
//		char tmp = *str;
//		int j = 0;
//		for (j = 0; j < n - 1; j++)
//		{
//			*(str + j) = *(str + j + 1);
//		}
//		*(str + n - 1) = tmp;
//	}
//}
//
//
//int main() 
//{
//
//	char arr[] = "ABCDEF";
//	int k = 2;//一次旋转2个
//
//	string_swap(arr,k);
//	printf("%s\n", arr);
//
//	return 0;
//}



												//写法2

//三步翻转法

//#include<string.h>
//
//void swap(char*left,char*right)
//{
//	while (left<right)
//	{
//		char tmp = *left;
//		*left = *right;
//		*right = tmp;
//		left++;
//		right--;
//	}
//	
//}
//
//void string_swap(char*arr,int k)
//{
//	int len=strlen(arr);
//	swap(arr,arr+k-1);
//	swap(arr+k,arr+len-1);
//	swap(arr,arr+len-1);
//}
//
//
//int main()
//{
//
//	char arr[] =  "ABCDEF";
//	int k = 2;
//	string_swap(arr,k);
//	printf("%s", arr);
//
//	return 0;
//}







																		//杨氏矩阵



//#define H 3
//#define L 3
//
////如果要求函数只负责找，应该对行列用指针
//int Get(int arr[H][L],int input)
//{
//	int x = 0;
//	int y = L - 1;
//	while (x < 3 && y >= 0)//防止越界
//	{
//		if (arr[x][y]>input)
//		{
//			y--;
//		}
//		else if (arr[x][y]<input)
//		{
//			x++;
//		}
//		else
//		{
//			printf("找到了\narr[%d][%d]=%d",x,y,arr[x][y]);
//			return 0;//找到了
//		}
//	}
//	printf("没找到\n");
//	return 0;//没找到
//}
//
//int main() 
//{
//
//	int input = 0;
//	int arr[H][L] = { 1,2,3,4,5,6,7,8,9 };
//	scanf("%d", &input);
//
//	Get(arr,input);
//
//	return 0;
//}









//int main() {
//
//	
//	int a[3] = { 1,2,3 };
//	int* pa = &a;
//
//	&pa/ 
//
//	int(*pa)[] = {a};//&a//int(*)[3]
//
//
//
//
//	char* a[] = { "ha","he" };
//	char(*pa)[] = { a };
//	char** pa = a;
//	printf("%s\n", *pa);
//
//	return 0;
//}



//int main() {
//
//	int a = 5;
//	int b = 4;
//
//	a = a ^ b;
//	b = b ^ a;
//	a = a ^ b;
//	printf("a=%d\n", a);//4
//	printf("b=%d\n", b);//5
//
//	return 0;
//}







											//不创建第三个变量交换两个数的值



//int main() {
//
//	char a = 'h';
//	char b = 'e';
//
//	a = a + b;
//	b = a - b;
//	a = a - b;
//
//	printf("a=%c\n", a);
//	printf("b=%c\n", b);
//
//	return 0;
//}






//【1】
//int main() {
//
//	int a = 5;
//	int b = 4;
//
//	a = a - b;
//	b = b + a;
//	a = b - a;
//	printf("a=%d\n", a);
//	printf("b=%d\n", b);
//
//
//	return 0;
//}






//【2】
//int main() {
//
//	int a = 5;
//	int b = 4;
//
//	a = a + b;
//	b = a - b;
//	a = a - b;
//
//	printf("a=%d\n", a);
//	printf("b=%d\n", b);
//
//
//	return 0;
//}




//【3】
//int main() {
//
//	char a = 'h';
//	char b = 'k';
//
//	a = a ^ b;
//	b = b ^ a;
//	a = a ^ b;
//	printf("a=%c,b=%c", a, b);
//
//
//	return 0;
//}



//int main() {
//
//	int a = 4;
//	int b = 5;
//	//交换
//	int c = 0;
//
//	c = a;
//	a = b;
//	b = c;
//	printf("a=%d\n", a);
//	printf("b=%d\n", b);
//
//
//	return 0;
//}








//int main() {
//
//	char* a[] = { "work","at","alibaba" };
//	char** pa = a;
//	pa++;
//
//	printf("%s", *pa);//at
//
//	return 0;
//}








//int main() {
//
//	int a[2][5] = { 1,2,3,4,5,6,7,8,9,10 };
//	int* ptr1 = (int*)(&a+1);
//	int* ptr2 = (int*)(*(a+1));
//
//	printf("%d,%d", *(ptr1 - 1), *( ptr2 - 1));//10,5
//
//	return 0;
//}








//int main() {
//
//	int a = 3;
//	int b = 2;
//	printf("%p\n", &a);
//	printf("%p\n", &b);
//	printf("%d\n", &a - &b);
//
//	return 0;
//}





//int main() {
//
//	int a[5][5];
//	int(*p)[4];
//	p = a;
//
//	printf("%p,%d\n",&p[4][2]-&a[4][2],&p[4][2]-&a[4][2]);//FFFFFFFC,-4
//
//	return 0;
//}







//int main() {
//
//	printf("%d\n", 0x02000000);
//	printf("%p\n", 33554432);
//
//	return 0;
//}







////指针强题
//
//int main() {
//
//	char* c[] = { "ENTER","NEW","POINT","FIRST" };
//	char** cp[] = { c + 3,c + 2,c + 1,c };
//	char*** cpp = cp;
//
//	printf("%s\n", **++cpp);
//	printf("%s\n", *-- * ++cpp + 3);
//	printf("%s\n", *cpp[-2] + 3);
//	printf("%s\n", cpp[-1][-1] + 1);
//
//	return 0;
//}


//
//int main() {
//
//	int a[4] = { 1,2,3,4 };
//	int* ptr1 = (int*)(&a+1);
//	int* ptr2 = (int*)((int)a+1);
//
//	printf("%x,%x", ptr1[-1], *ptr2);//4,2
//
//	return 0;
//}









//如何证明电脑存-4，并不是简单的把-4存进去呢？

//int main() {
//
//	//1
//	int a = -4;
//	
//	printf("%p\n", a);//我们把-4当做地址打印，如果存的真是-4，那么-4就会被当成地址打印
//	//但结果是FFFFFFFC
//	//我们得出，内存存的不是-4这个数
//
//	//分析·我们知道，FFFFFFFC是十六进制
//	//内存存放东西是2进制
//	//FFFFFFFC——>1111 1111 1111 1111 1111 1111 1111 1100
//	//【1111=15】
//	//1111 1111 1111 1111 1111 1111 1111 1100说明内存存的是这个
//	//这个显然是-4的补码
//
//	return 0;
//}













//int main() {
//
//	int a[5][5] = { 0 };
//	int(*p)[4];
//	p = a;
//	printf("%p\n%d\n", &p[4][2] - &a[4][2], &p[4][2] - &a[4][2]);
//	//arr[2]等价*(arr+2)
//	//p[4]==*(p+4)		p[4][2]==*(*(p+4)+2)
//	//p[4]找到这里  0000.0 000.00 00.000 0.0000 00000
//	//				   +1     +2   +3    +4
//	//再解引用得到+4后的首元素地址，再+2	=	0.00.00跳到第二个点
//	return 0;
//}






//int main() {
//
//	int arr[4][3] = { 1,2,3,4,5,6,7,8,9,10,11,12 };
//	int(*p)[3]=arr;
//
//	for (int i = 0; i < 4; i++) {
//		for (int j = 0; j < 3; j++) {
//			printf("%d ", *(*(p+i) + j));
//		}
//
//	}
//
//	return 0;
//}








//int main()
//{
//
//	int a[3][2] = { (0,1),(2,3),(4,5) };//逗号表达式
//	int* p;
//	p = a[0];//a[0]是首元素地址，但在这里既没有单独当sizeof();也没有&地址，所以代表的是首元素地址；
//	printf("%d", p[0]);
//
//	return 0;
//}







//int main(){
//
//	int a[3][2] = { {1,2},{3,4},{5,6} };;
//	printf("%p\n", &a[0][0]);
//	printf("%p\n", a[0]);
//
//	return 0;
//}










//struct Test
//{
//	int Num;
//	char* pcName;
//	short sDate;
//	char cha[2];
//	short sBa[4];
//
//}*p;//*代表这是个结构体指针
////p=0x00000000,下面的结果是
//
//
//int main() {
//	printf("%p\n", p + 0x1);//0x10000014		0x1相当于二进制的1，也就是p(数据类型20个字节)的地址+1；跳过20个字节=0x1000014  /这个1是16，4是4，16+4=20
//	printf("%p\n", (unsigned long)p + 0x1);//0x10000001       强转为长整型；转化成整型之后+1，加的就是1	==0x100001【例如10+1就是11】
//	printf("%p\n", (unsigned int*)p + 0x1);//0x10000004
//
//	return 0;
//}


//【考点：考察了指针的类型决定了指针的运算】（加减整数的运算）





//int main() 
//{
//
//	printf("%d\n", sizeof(long));
//
//	return 0;
//}







//int main() {
//
//	int arr[] = { 1,2,3,4,5 };
//	
//	int* ptr = (int*)(&arr + 1);//arr[5]取地址，取出的是数组的地址，数组地址存放在数组里，自然要-指针数组int * [5];能放进去这个类型，自然是这个类型的数据
//	printf("%d,%d\n",*(arr+1),*(ptr-1));//prt作为整型指针-1，向前挪了一个整型=5
//
//	return 0;
//}
//









//int main() {
//
//	char* a[] = { 'a','b','c' };
//	printf("%p\n",&a);
//	printf("%p\n",&a + 0);
//
//	return 0;
//}








//int main() {
//
//	int a[3][4] = { 1,2,3,4,5,6,7,8,9,10,11,12 };
//
//
//	printf("%d\n", sizeof(a[0] + 1));//4/8
//	printf("%d\n", *(a[0]+1));
//	printf("%p\n", &a[0]+1);
//	printf("%p\n", a[1]);
//	return 0;
//}




//int main() {
//
//	//经典：
//	int a[3][4] = { 0 };
//
//	printf("%d\n", sizeof(a[0]));//16
//	printf("%d\n", sizeof(*a));//16
//	printf("%d\n", sizeof(*(&a[0])));//16
//
//}










//int main() {
//
//	char* p = "abcdef";
//
//	printf("%p\n", &p);
//	printf("%p\n", p);
//	printf("%d\n", sizeof(p));
//
//
//	return 0;
//}







//类型属性：
//int main() {
//	short arr = 4;
//	int t = 6;
//	printf("%d\n,", sizeof(arr = 2 + t));//2
//	printf("%d\n", arr);//4
//	return 0;
//}
//
//
//
//值属性：
//int main() {
//	int a = 4;
//	int b = 6;
//	a = a + b;
//	printf("%d\n", a);//10
//	return 0;
//}






//```csharp
//int main() {
//	int a[] = { 1,2,3,4 };
//
//	printf("%d\n", sizeof(a));
//	printf("%d\n", sizeof(*a));
//	printf("%d\n", sizeof(a + 0));
//	printf("%d\n", sizeof(a + 1));
//	printf("%d\n", sizeof(a[1]));
//
//	printf("%d\n", sizeof(&a));
//	printf("%d\n", sizeof(*&a));
//	printf("%d\n", sizeof(&a + 1));
//	printf("%d\n", sizeof(&a[0]));
//	printf("%d\n", sizeof(&a[0] + 1));
//	return 0;
//}
//
//```
//
//## 答案 + 解析
//```csharp
//int main() {
//	int a[] = { 1,2,3,4 };
//
//	printf("%d\n", sizeof(a));//16  这里单独放数组名，表示计算整个数组大小
//	printf("%d\n", sizeof(*a));//4  这里没有单独放数组名，表示首元素地址解引用，计算1的大小
//	printf("%d\n", sizeof(a + 0));//4/8  这里没有单独放数组名，表示计算首元素地址大小
//	printf("%d\n", sizeof(a + 1));//4/8  这里没有单独放数组名，第二个元素地址大小
//	printf("%d\n", sizeof(a[1]));//4//  计算第二个元素类型大小
//
//	printf("%d\n", sizeof(&a));//4/8  根据前言，取出的是整个数组地址
//	printf("%d\n", sizeof(*&a));//16  先取出整个数组地址，再解引用=数组a
//	⭐注意：& 数组名，不管有没有单独放在sizeof都是取数组地址
//		printf("%d\n", sizeof(&a + 1));//4/8  是数组后面的空间的地址（也是个地址）
//	⭐注意：sizeof（类型属性）是不会去计算以及访问括号里的内容
//		printf("%d\n", sizeof(&a[0]));//4/8  根据优先级，先算a[0]=1，再取地址，取出1的地址，计算大小
//	printf("%d\n", sizeof(&a[0] + 1));//4/8  &a[0]是1的地址，+1是第二个元素的地址
//	return 0;
//}
//地址大小取决于编译器是32位还是64位；32 = 4，64 = 8；
//```
//
//# 2、字符数组
//## 例题
//
//```csharp
//int main() {
//
//	char arr[] = { 'a','b','c','d','e','f' };
//
//	printf("%d\n", sizeof(arr));
//	printf("%d\n", sizeof(arr + 0));
//	printf("%d\n", sizeof(*arr));
//	printf("%d\n", sizeof(arr[1]));
//	printf("%d\n", sizeof(&arr));
//	printf("%d\n", sizeof(&arr + 1));
//	printf("%d\n", sizeof(&arr[0] + 1));
//
//	printf("%d\n", strlen(arr));
//	printf("%d\n", strlen(arr + 0));
//	printf("%d\n", strlen(*arr));
//	printf("%d\n", strlen(arr[1]));
//	printf("%d\n", strlen(&arr));
//	printf("%d\n", strlen(&arr + 1));
//	printf("%d\n", strlen(&arr[0] + 1));
//	return 0;
//}
//```
//
//## 答案 + 解析
//```csharp
//int main() {
//
//	char arr[] = { 'a','b','c','d','e','f' };
//
//	printf("%d\n", sizeof(arr));//6  单独放，表示计算整个数组的地址（字符数组没有\0）
//	printf("%d\n", sizeof(arr + 0));//4/8  没有单独放，arr代表首元素地址
//	printf("%d\n", sizeof(*arr));//1  没有单独放，代表首元素地址解引用计算a大小
//	printf("%d\n", sizeof(arr[1]));//1  计算b大小
//	printf("%d\n", sizeof(&arr));//4/8  &数组名代表取出整个数组的大小，地位再牛逼也是地址
//	printf("%d\n", sizeof(&arr + 1));//4/8	数组地址+1跳过整个数组，计算数组外的地址
//	⭐注意：sizeof（类型属性）是不会去计算以及访问括号里的内容
//		printf("%d\n", sizeof(&arr[0] + 1));//4/8	取arr[0]首元素地址+1，计算第二个元素地址
//
//	printf("%d\n", strlen(arr));//随机值  以数组大小为单位访问没有\0,停下来取决于后面什么时候访问到\0
//	printf("%d\n", strlen(arr + 0));//随机值		以元素大小为单位，停下来取决于后面什么时候访问到\0
//	printf("%d\n", strlen(*arr));//报错 错误,不是地址，把a（Ascii=97）传过去，在经过进制转化成97，
//	企图将97当成地址
//		printf("%d\n", strlen(arr[1]));//错误	同上个题，'b'不是地址
//	⭐注意：在模拟strlen时，我们传的是指针（地址）
//		printf("%d\n", strlen(&arr));//随机值	整个数组地址，+1跳过整个数组大小，遇到\0才会停
//	printf("%d\n", strlen(&arr + 1));//随机值	数组地址+1，跳过数组，以数组后的地址开始找\0
//	printf("%d\n", strlen(&arr[0] + 1));//随机值		&arr[0]第一个元素地址，+1第二个元素地址开始找\0
//	return 0;
//}
//```
//
//# 3、字符串数组
//## 例题
//
//```csharp
//int main() {
//
//	char arr[] = "abcdef";
//
//	printf("%d\n", sizeof(arr));
//	printf("%d\n", sizeof(arr + 0));
//	printf("%d\n", sizeof(*arr));
//	printf("%d\n", sizeof(arr[1]));
//	printf("%d\n", sizeof(&arr));
//	printf("%d\n", sizeof(&arr + 1));
//	printf("%d\n", sizeof(&arr[0] + 1));
//
//
//	printf("%d\n", strlen(arr));
//	printf("%d\n", strlen(arr + 0));
//	printf("%d\n", strlen(*arr));
//	printf("%d\n", strlen(arr[1]));
//	printf("%d\n", strlen(&arr));
//	printf("%d\n", strlen(&arr + 1));
//	printf("%d\n", strlen(&arr[0] + 1));
//
//	return 0;
//}
//
//```
//
//## 答案 + 解析
//```csharp
//int main() {
//
//	char arr[] = "abcdef";
//
//	printf("%d\n", sizeof(arr));//7		计算数组大小，有\0
//	printf("%d\n", sizeof(arr + 0));//4/8	数组名没有单独，arr=首元素地址
//	printf("%d\n", sizeof(*arr));//1	数组名没有单独，arr=首元素地址，解引用='a'
//	printf("%d\n", sizeof(arr[1]));//1	计算b类型大小
//	printf("%d\n", sizeof(&arr));//4/8	 数组地址
//	⭐知识：取出的地址类型应该是char(*)[7]
//		应为数组能存放在什么类型里，自身就应该是什么类型（指针数组）
//		printf("%d\n", sizeof(&arr + 1));//4/8	  数组地址+1跳过整个数组，计算数组地址后的地址大小
//	printf("%d\n", sizeof(&arr[0] + 1));//4/8	&arr[0]第一个元素地址，+1计算第二个元素地址大小
//
//
//	printf("%d\n", strlen(arr));//6		单独放，计算整个数组长度
//	printf("%d\n", strlen(arr + 0));//6		不单独放，代表首元素地址，于是从首元素地址开始找\0
//	printf("%d\n", strlen(*arr));//错误		arr代表首元素地址，解引用找到具体值'a'字符,
//	传输过程转化成ASCii（97），97不能当地址
//		⭐注意：在模拟strlen时，我们传的是指针（地址）
//		printf("%d\n", strlen(arr[1]));//错误	同上，找到'b'字符，不是地址
//	printf("%d\n", strlen(&arr));//6   数组地址和首元素地址一样，
//	strlen接收从数组地址开始数以char* 大小开始数
//		⭐知识回忆：我们知道，模拟strlen传参，形参的创建不会创建一模一样大小，很浪费空间，于是传'a'的地址，地址 + 1，跳过4个字节，到下个'b'地址
//		所以根本不会跳过整个数组大小，跳多少字节形参决定了
//		printf("%d\n", strlen(&arr + 1));//随机		不同与上一题，在传之前已经跳到了整个数组后面的地址，找到\0才会停止
//	printf("%d\n", strlen(&arr[0] + 1));//5		&arr[0]得到'a'地址，+1得到'b'地址；开始找\0；
//
//	return 0;
//}
//
//```












//int main() {
//
//	char a[3] = "ha";
//
//	printf("%d\n", sizeof(a + 0));
//	printf("%d\n", sizeof(a));
//
//	return 0;
//}






//int main() {
//	char arr[] = { 'a','b' };
//	printf("%p\n", arr);
//	printf("%p\n", &arr);
//	return 0;
//}










//sizeof(数组名)这里的数组名表示整个数组，计算的是整个数组的大小。
//&数组名，这里的数组名表示整个数组，取出的是整个数组的地址
//除此之外所有的数组名都表示首元素地址

//sizeof()内部表达式不参与真实运算，编译时计算运算值。 2、即使sizeof内部写有赋值表达式，也不会去实际操作，sizeof在计算时只看操作数的类型，不会访问相应的空间。



//int main() {
//
//	short s = 5;
//	int a = 4;
//	printf("%d\n", sizeof(s = a + 6));
//	printf("%d\n", s);
//
//	return 0;
//}



//int main() {
//
//	int a[3][4] = { 0 };
//
//	printf("%d\n", sizeof(a));//48
//	printf("%d\n", sizeof(a[0][0]));//4
//	printf("%d\n", sizeof(a[0]));//16
//	printf("%d\n", sizeof(a[0] + 1));//4/8
//	printf("%d\n", sizeof(*(a[0] + 1)));//4
//	printf("%d\n", sizeof(a + 1));//4/8
//	printf("%d\n", sizeof(*(a + 1)));//16//a+1是第二行地址；*是找第二行内容计算；arr[1]数组名单独放进去是计算整个数组大小
//	printf("%d\n", sizeof(&a[0] + 1));//4/8
//	printf("%d\n", sizeof(*(&a[0] + 1)));//16
//	printf("%d\n", sizeof(*a));//16
//	printf("%d\n", sizeof(a[3]));//随机
//
//
//	printf("%d\n", sizeof(a[0]));
//	printf("%d\n", sizeof(*a));
//	printf("%d\n", sizeof(*(&a[0])));
//
//	return 0;
//}







//int main() {
//
//	char* p = "abcdef";
//
//	printf("%d\n", sizeof(p));//4/8
//	printf("%d\n", sizeof(p + 1));//4/8
//	printf("%d\n", sizeof(*p));//1
//	printf("%d\n", sizeof(p[0]));//1
//	printf("%d\n", sizeof(&p));//4/8
//	printf("%d\n", sizeof(&p + 1));//4/8
//	printf("%d\n", sizeof(&p[0] + 1));//4/8
//
//
//	printf("%d\n", strlen(p));//6
//	printf("%d\n", strlen(p + 1));//5
//	printf("%d\n", strlen(*p));//arr
//
//	return 0;
//}



//int main() {
//
//	char arr[] = "abcdef";
//
//	printf("%d\n", sizeof(arr));//7
//	printf("%d\n", sizeof(arr + 0));//4/8
//	printf("%d\n", sizeof(*arr));//1
//	printf("%d\n", sizeof(arr[1]));//1
//	printf("%d\n", sizeof(&arr));//4/8		取出的地址类型应该是char(*)[7]
//	printf("%d\n", sizeof(&arr + 1));//4/8
//	printf("%d\n", sizeof(&arr[0] + 1));//4/8
//
//
//	printf("%d\n", strlen(arr));//6
//	printf("%d\n", strlen(arr + 0));//6
//	printf("%d\n", strlen(*arr));//错误
//	printf("%d\n", strlen(arr[1]));//错误
//	printf("%d\n", strlen(&arr));//6   strlen接收从数组首地址开始数
//	printf("%d\n", strlen(&arr + 1));//随机
//	printf("%d\n", strlen(&arr[0] + 1));//5
//
//	return 0;
//}








//int main() {
//	char arr[] = { 'a','b','c','d','e','f' };
//
//	printf("%d\n", sizeof(arr));//6
//	printf("%d\n", sizeof(arr + 0));//4/8
//	printf("%d\n", sizeof(*arr));//1
//	printf("%d\n", sizeof(arr[1]));//1
//	printf("%d\n", sizeof(&arr));//4/8
//	printf("%d\n", sizeof(&arr + 1));//4/8
//	printf("%d\n", sizeof(&arr[0] + 1));//4/8
//
//	printf("%d\n", strlen(arr));//随机值
//	printf("%d\n", strlen(arr + 0));//随机值
//	printf("%d\n", strlen(*arr));//错误,不是地址，把a（Ascii=97）传过去，把97当成地址；错误
//	printf("%d\n", strlen(arr[1]));//错误
//	printf("%d\n", strlen(&arr));//随机值
//	printf("%d\n", strlen(&arr + 1));//随机值
//	printf("%d\n", strlen(&arr[0] + 1));//随机值
//	return 0;
//}



//int main() {
//	int a[] = { 1,2,3,4 };
//
//	printf("%d\n", sizeof(a));//16
//	printf("%d\n", sizeof(a + 0));//4/8
//	printf("%d\n", sizeof(*a));//4
//	printf("%d\n", sizeof(a + 1));//4/8//第一个元素地址+1
//	printf("%d\n", sizeof(a[1]));//4
//
//	printf("%d\n", sizeof(&a));//4/8
//	printf("%d\n", sizeof(*&a));//16//数组地址解引用=数组a
//	printf("%d\n", sizeof(&a + 1));//4/8//是数组后面的空间的地址
//	printf("%d\n", sizeof(&a[0]));//4/8
//	printf("%d\n", sizeof(&a[0] + 1));//4/8
//	return 0;
//}




//#include<string.h>
//int main() {

	//
	//
	//	/*int a[] = { 1,2,3,4 };*/
	//	//	printf("%d\n", sizeof(a));//16
	//	//	printf("%d\n", sizeof(a+0));//4/8
	//	//	printf("%d\n", sizeof(*a));//4
	//	//	printf("%d\n", sizeof(a+1));//4/8//第一个元素地址+1
	//	//	printf("%d\n", sizeof(a[1]));//4
	//	//
	//	//	printf("%d\n", sizeof(&a));//4/8
	//	//	printf("%d\n", sizeof(*&a));//16//数组地址解引用=数组a
	//	//	printf("%d\n", sizeof(&a+1));//4/8//是数组后面的空间的地址
	//	//	printf("%d\n", sizeof(&a[0]));//4/8
	//	//	printf("%d\n", sizeof(&a[0]+1));//4/8
	//	//
	//
	//
	//
	//	//char arr[] = { 'a','b','c','d','e','f' };
	//	//printf("%d\n", sizeof(arr));//6
	//	//printf("%d\n", sizeof(arr+0));//4/8
	//	//printf("%d\n", sizeof(*arr));//1
	//	//printf("%d\n", sizeof(arr[1]));//1
	//	//printf("%d\n", sizeof(&arr));//4/8
	//	//printf("%d\n", sizeof(&arr+1));//4/8
	//	//printf("%d\n", sizeof(&arr[0]+1));//4/8
	//	//printf("%d\n", strlen(arr));//随机值
	//	//printf("%d\n", strlen(arr+0));//随机值
	//	//printf("%d\n", strlen(*arr));//错误,不是地址，把a（Ascii=97）传过去，把97当成地址；错误
	//	//printf("%d\n", strlen(arr[1]));//错误
	//	//printf("%d\n", strlen(&arr));//随机值
	//	//printf("%d\n", strlen(&arr+1));//随机值
	//	//printf("%d\n", strlen(&arr[0]+1));//随机值
	//
	//
	//
	//
	//
	//	//char arr[] = "abcdef";
	//
	//	//printf("%d\n", sizeof(arr));//7
	//	//printf("%d\n", sizeof(arr+0));//4/8
	//	//printf("%d\n", sizeof(*arr));//1
	//	//printf("%d\n", sizeof(arr[1]));//1
	//	//printf("%d\n", sizeof(&arr));//4/8		取出的地址类型应该是char(*)[7]
	//	//printf("%d\n", sizeof(&arr+1));//4/8
	//	//printf("%d\n", sizeof(&arr[0]+1));//4/8
	//
	//
	//	//printf("%d\n", strlen(arr));//6
	//	//printf("%d\n", strlen(arr + 0));//6
	//	//printf("%d\n", strlen(*arr));//错误
	//	//printf("%d\n", strlen(arr[1]));//错误
	//	//printf("%d\n", strlen(&arr));//6   strlen接收从数组首地址开始数
	//	//printf("%d\n", strlen(&arr + 1));//随机
	//	//printf("%d\n", strlen(&arr[0] + 1));//5
	//
	//
	//
	//
	//	char* p = "abcdef";
	//
	//	//printf("%d\n", sizeof(p));//4/8
	//	//printf("%d\n", sizeof(p+1));//4/8
	//	//printf("%d\n", sizeof(*p));//1
	//	//printf("%d\n", sizeof(p[0]));//1
	//	//printf("%d\n", sizeof(&p));//4/8
	//	//printf("%d\n", sizeof(&p+1));//4/8
	//	//printf("%d\n", sizeof(&p[0]+1));//4/8
	//
	//
	//	//printf("%d\n", strlen(p));//6
	//	//printf("%d\n", strlen(p+1));//5
	//	//printf("%d\n", strlen(*p));//arr
	//	
	//
	//	char* pa = p;
	//
	//	//printf("%d\n", strlen(p[0]));//err
	//
	//	printf("%p\n", p);
	//
	//	printf("%d\n", strlen(&p));//随机（如果有0，必定小于4个字节）（地址4个字节，
	//	// 如果0x23343600(十六进制：8个字节，一个字节4bit),以字节为单位解读，其中的00就等价\0;所以必定小于4个字节（例如这里233436=3字节））
	//	
	//	//printf("%d\n", strlen(&p+1));//随机
	//	//printf("%d\n", strlen(&p[0]+1));//5
	//
	//	
	//	char* k = "ha";
	//
	//	printf("%p\n",k);
	//
	//	printf("%d\n", strlen(&k));
	//
	//





	//int a[3][4] = { 0 };

	//printf("%d\n", sizeof(a));//48
	//printf("%d\n", sizeof(a[0][0]));//4
	//printf("%d\n", sizeof(a[0]));//16
	//printf("%d\n", sizeof(a[0] + 1));//4/8
	//printf("%d\n", sizeof(*(a[0] + 1)));//4
	//printf("%d\n", sizeof(a + 1));//4/8
	//printf("%d\n", sizeof(*(a + 1)));//16//a+1是第二行地址；*是找第二行内容计算；arr[1]数组名单独放进去是计算整个数组大小
	//printf("%d\n", sizeof(&a[0] + 1));//4/8
	//printf("%d\n", sizeof(*(&a[0] + 1)));//16
	//printf("%d\n", sizeof(*a));//16
	//printf("%d\n", sizeof(a[3]));//随机


	/*printf("%d\n", sizeof(a[0]));
	printf("%d\n", sizeof(*a));
	printf("%d\n", sizeof(*(&a[0])));*/
	








//	return 0;
//}




//#include<stdio.h>
//int main() {
//
//	char* a = "abcdef";
//
//	printf("%d\n",strlen(&a));
//	printf("%p\n", a);
//
//}
//










//int main() {
//	int a = 1;
//
//	char* pa = (char*)&a;
//	if (*pa == 1) {
//		printf("小端\n");
//	}
//	else {
//		printf("大端\n");
//	}
//
//
//	return 0;
//}










//#include<string.h>
//int main() {
//
//	char arr[] = "haha";//有\0
//	char a[] = { '2','3','4'};//没有\0
//
//	printf("%d\n", sizeof(arr));
//	printf("%d\n", sizeof(a));
//
//	return 0;
//}





//sizeof(数组名)-数组名表示整个数组的-计算的是整个数组的大小
//&arr数组名取的是数组的地址


//int main() {
//
//	int a[] = { 1,2,3,4 };
//	printf("%d\n", sizeof(a));//16
//	printf("%d\n", sizeof(a+0));//4/8
//	printf("%d\n", sizeof(*a));//4
//	printf("%d\n", sizeof(a+1));//4/8//第一个元素地址+1
//	printf("%d\n", sizeof(a[1]));//4
//
//	printf("%d\n", sizeof(&a));//4/8
//	printf("%d\n", sizeof(*&a));//16//数组地址解引用=数组a
//	printf("%d\n", sizeof(&a+1));//4/8//是数组后面的空间的地址
//	printf("%d\n", sizeof(&a[0]));//4/8
//	printf("%d\n", sizeof(&a[0]+1));//4/8
//
//
//	return 0;
//}




									//&a+1跳过的大小


//int main() {
//
//	int arr[] = { 1,2,3 };
//
//	int* pa = &arr+1;//和下面的一样
//	int* pa1 = arr + 3;
//
//	printf("%d\n", *(arr + 1));
//	printf("%d\n", pa);
//	printf("%d\n", *(&arr + 1));
//
//
//	return 0;
//}







//int main() {
//
//	int a[] = { 1,3,4,6 };
//	printf("%d\n", sizeof(a + 1));
//
//
//	return 0;
//}





//void get(int* pa) {
//
//	printf("%d ", *pa);
//}
//
//int main() {
//	int arr[3] = { 1,2,3 };
//	get(arr+1);
//	printf("\n");//
//	get(&arr+1);//跳过一个数组,跳到arr[4]
//	printf("\n");
//	printf("%p\n", &arr);
//	printf("%p", &arr + 1);//十六进制地址
//
//
//	return 0;
//}








//int main() {
//
//	int a = 10;
//	void* pa = &a;//没有具体类型的指针，可以存放各种类型的数据；但不能解引用和指针++等，因为不知道具体类型，于是不知道访问几个字节；
//
//
//	return 0;
//}








//模仿qsort,自己创建一个函数可以实现个个数据的类型的排序

//int compare(const void*pa1,const void*pa2) {
//	return *(int*)pa1 - *(int*)pa2;
//}
//
//
//void print(int sz, int* arr) {
//	for (int i = 0; i < sz; i++) {
//		printf("%d ", *(arr + i));
//	}
//}
//
//
//void swap(char* pa1, char* pa2, int element_size) {
//	int i = 0;
//	for (i = 0; i < element_size; i++) {
//		char store = *pa1;
//		*pa1 = *pa2;
//		*pa2 = store;
//		pa1++;
//		pa2++;
//	}
//}
//
//void mock_qsort(void* pa, int el_sum, int el_size, int (*compare)(const void* e1, const void* e2)) {
//	int i = 0;
//	for (i = 0; i < el_sum - 1; i++) {
//		int j = 0;
//		for (j = 0; j < el_sum - 1 - i; j++) {
//			if (compare((char*)pa + j * el_size, (char*)pa + (j + 1) * el_size) > 0) {
//				swap((char*)pa + j * el_size, (char*)pa + (j + 1) * el_size, el_size);
//			}
//		}
//	}
//}
//
//
//int main() {
//
//	int sz;
//	int arr[] = { 9,8,7,6,5,4,3,2,1 };
//	sz = sizeof(arr) / sizeof(arr[0]);
//
//	mock_qsort(arr, sz, sizeof(arr[0]), compare);
//	print(sz, arr);
//
//	return 0;
//}













//结构体数据变量


//struct Stu {
//	char name[20];
//	int age;
//};
//
//
//int main() {
//	int i = 0;
//	struct Stu s[] = { {"张三",16},{"李四",18},{"陈五",20}};//数组大小3；可以存放3个变量；
//
//	for (i = 0; i < 3; i++) {
//	printf("%s  %d\n", s[i].name, s[i].age);
//	}
//
//	return 0;
//}





												//结构体变量使用qsort排序




//struct Stu {
//	char name[20];
//	int age;
//};
//
//
//int main() {
//	int i = 0;
//	struct Stu s[] = { {"张三",18},{"李四",16},{"陈五",20}};//数组大小3；可以存放3个变量；
//
//	for (i = 0; i < 3; i++) {
//	printf("%s  %d\n", s[i].name, s[i].age);
//	}
//
//	return 0;
//}
 

//对s进行排序



//struct Stu {
//	char name[20];
//	int age;
//};
//
//
//int Get(const void*e1,const void*e2) {
//	return ((struct Stu*)e1)->age - ((struct Stu*)e2)->age;//不需要解引用，->已经找到了age
//}
//
//void print(int sz, struct Stu *s) {
//	for (int i = 0; i < sz; i++) {
//		printf("%s  %d\n", (s+i)->name, (s+i)->age);
//	}
//
//}
//
//
//#include<stdlib.h>
//int main() {
//	int i = 0;
//	struct Stu s[] = { {"张三",18},{"李四",16},{"陈五",20} };//数组大小3；可以存放3个变量；
//	int sz = sizeof(s) / sizeof(s[0]);
//	
//	qsort(s,sz,sizeof(s[0]),Get);
//	
//	print(sz,&s);
//
//	return 0;
//}




//通过排名字



//struct Stu {
//	char name[20];
//	int age;
//};
//
//
//int Get(const void* e1,const void* e2) {
//	return strcmp(((struct Stu*)e1)->name, ((struct Stu*)e2)->name);
//}
//
//void print(int sz, struct Stu *s) {
//	for (int i = 0; i < sz; i++) {
//		printf("%s  %d\n", (s + i)->name, (s + i)->age);
//	}
//}
//
//
//
//#include<string.h>
//#include<stdlib.h>
//int main() {
//
//	struct Stu s[] = { {"zhangsan",18},{"lisi",16},{"chenwu",20} };//数组大小3；可以存放3个变量；
//																   //注意：abcq和adc比较，是a 的Asc码==a,b的Asc<d,于是adc>abcq
//																		
//	int sz = sizeof(s) / sizeof(s[0]);
//	
//	qsort(s,sz,sizeof(s[0]),Get);
//	
//	print(sz,s);
//
//	return 0;
//}





												//测试strcmp

//int main() {
//
//	/*char arr[] = "chenwu";
//	char arr2[] = "lisi";*/
//
//	char arr[] = "abcq";
//	char arr2[] = "ad";
//
//	printf("%d", strcmp(arr, arr2));//>返回1；==0返回0；<返回-1；
//
//	return 0;
//}


//#include<string.h>
//int main() {
//
//	char a[] = "abcq";
//	char b[] = "adc";
//
//	if (strcmp(a, b)>0) {
//		printf("haha\n");
//	}
//	else {
//		printf("hehe\n");
//	}
//
//
//	return 0;
//}





//#include<string.h>
//int main() {
//
//	char a[] = "haha";
//	char b[] = "hehehe";
//	printf("%d", strcmp(a, b));
//
//	return 0;
//}








//#include<stdlib.h>
//
//int cmp_int(const void*e1,const void*e2) {
//	return *(int*)e1 - *(int*)e2;
//}
//
//
//void print(int *a,int sz) {
//	int i = 0;
//	for (i = 0; i < sz; i++) {
//		printf("%d\n", *(a + i));
//	}
//}
//
//
//
//int main() {
//
//	int arr[] = { 8,8,7,6,5,4,3,2,1 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//
//	qsort(arr,sz,sizeof(arr[0]), cmp_int);
//
//	print(arr,sz);
//
//	return 0;
//}





//int Get(const void* pa1, const void* pa2) {
//	return strcmp((char*)pa1, (char*)pa2);
//}
//
//
//void print(int sz, char* pa) {
//	int i = 0;
//	for (i = 0; i < sz; i++) {
//		printf("%c", *(pa + i));
//	}
//
//}
//
//#include<stdlib.h>
//#include<string.h>
//
//int main() {
//
//	int sz;
//	char arr[] = { 'h','g','f','e','d','c','b','a',0};
//	sz = strlen(arr);
//	qsort(arr, sz, sizeof(arr[0]), Get);
//	print(sz, arr);
//
//	return 0;
//}




//int Get(const void* pa1, const void* pa2) {
//	return strcmp(*(char**)pa1, *(char**)pa2);
//}
//
//
//void print(int sz, char** pa) {//二级指针接收【有些人可能迷糊了，为什么不是一级指针，下面解释
//	int i = 0;
//	for (i = 0; i < sz; i++) {
//		printf("%s ", *(pa + i));
//	}
//
//}
//
//
//#include<string.h>
//#include<stdlib.h>
//int main() {
//
//	int sz;
//	char* arr[] = {"ef","cd","ab"};
//	sz = sizeof(arr) / sizeof(arr[0]);
//
//
//	qsort(arr,sz,sizeof(arr[0]), Get);
//	print(sz,arr);
//
//	return 0;
//}



//int main() {
//
//	int arr[] = { 1,2,3 };
//	int(*pa)[] = { arr };
//	printf("%p\n", *pa);
//	printf("%p\n", &arr);
//	printf("%p\n", **pa);
//	printf("%p\n", arr);
//	printf("%p\n", &arr[0]);
//
//	int* pa1 = &arr;
//	printf("%d", *pa1);
//
//
//	return 0;
//}










//int main() {
//
//	char* arr[] = { "ab","cd","ef" };
//
//	printf("%p\n", arr);
//	printf("%p\n", arr[0]);
//	printf("%p\n", &arr[0]);
//
//	printf("-----------------\n");
//	int arr1[] = { 1,2,3,4 };
//
//	printf("%p\n", arr1);
//	printf("%p\n", arr1[0]);
//	printf("%p\n", &arr1[0]);
//
//
//
//	return 0;
//}








//#include<string.h>
//int main() {
//
//	char a = 'a';
//	char b = 'b';
//	char* a1 = &a;
//	char* b1 = &b;
//
//	printf("%d", strcmp(a1,b1));
//
//
//	return 0;
//}








//int Get(int x) {
//	if (x==0) {
//		return 0;
//	}
//
//		return x + Get(x - 1);
//	
//}
//
//
//int main() {
//
//	int x=0;
//
//	scanf("%d", &x);
//
//	printf("%d", Get(x));
//
//	return 0;
//}












//#include<stdio.h>
//
//int main() {
//	char a = 0;
//	int i = 0;
//
//	for (i = 1; i <= 255; i++) {
//		a = 0;
//		a = a + i;
//		printf("a+%d = %d\n", i, a);//依次打印出a+1,a+2...a+255的值
//
//	}
//
//	return 0;
//}








																	//【函数指针】

//存放函数地址的指针
//arr != &arr
//Add == &Add
//[]数组，()函数
//只有函数可以省略*


//int Add(int x, int y) {
//	return x + y;
//}
//
//int main() {
//
//	int a = 10;
//	int b = 10;
//
//	//pa就是一个函数指针变量
//	int (*pa)(int, int) = &Add;//int返回类型；（参数类型int,int）
//
//	printf("%p\n", &Add);//打印函数地址
//	printf("%p\n", Add);//数组名和地址一样，同理函数也可以
//
//	return 0;
//}



//void Get(int(*pa)[6]) {
//	int i = 0;
//	for (i; i < 6; i++) {
//		printf("%d\n", **(pa + 1) + i);//pa+1指向6后面的5的数组地址，然后*（pa+1）解一次，得到数组地址；然后+i挪动指针，*解一次，通过数组地址得到具体值，导致最后5+5=10；
//	}
//}
//
//
//int main() {
//
//	int arr[][6] = { 1,2,3,4,5,6,5,6,7,8,9,30 };
//	Get(arr);
//
//	return 0;
//}






//void test(char*pa) {
//	
//}
//
//int main() {
//
//	void (*pt)(char*) = &test;
//
//	return 0;
//}




											//【使用指针里的函数地址；调用函数】

//int test(int x,int y) {
//	return x + y;
//}
//
//int main() {
//	//存储：
//	int (*pa)(int,int) = &test;
//	//等价
//	int (*pa)(int,int) = test;//&test=test
//	
//	//调用：
//	//int sum=(*pa)(3, 5);//(*pa)=test;  //(*****pa)(3,5)都一样//只有函数可以省略*
//	// 等价
//	//int sum=pa(3,5);
//	// 等价
//	//int sum=Add(3,5);//Add = &Add;又 &Add = pa；所以 Add(3,5);=pa(3,5);     【下面证明】
//	// 
//	// 
//	//printf("%d", sum);
//	/*printf("%d", (*pa)(3, 5));*/
//
//	return 0;
//}



																//证明pa=&a

//int main() {
//
//
//	int a = 10;
//	int* pa = &a;
//
//
//	printf("%p\n", a);
//	printf("%p\n", *pa);
//	printf("%p\n", &a);//&a==pa
//	printf("%p\n", pa);
//	printf("%p\n", &pa);
//
//
//	return 0;
//}




//void Get(int *pa) {
//	int i = 0;
//	for (i = 0; i < 3; i++) {
//		printf("%d", *pa+i);
//	}
//
//}
//
//int main() {
//	int a[] = {1,2,3};
//	int* pa = &a;
//	Get(pa);
//	return 0;
//}









//检测函数里



//void Get(int(* pa)[6]) {//pa={1,2,3,4,5,6}
//
//	int i = 0;
//	
//		printf("%d\n", **(pa + 1));
//	
//}


//void Get(int*pa) {//pa={1}//
//
//	int i = 0;
//
//	printf("%d\n", *(pa + 1));
//
//}

//int main() {
//	int arr[][6] = { 1,2,3,4,5,6,33,66,77,6,5,3,6 };
//	//int* pa = arr+1;
//	Get(&arr);
//	
//
//	return 0;
//}


//补充 int *pa=&a;&a取得是一串数，我们需要把他变成地址，于是放在指针里面，
//%p 打印就是以地址形式打印


 


//int Get() {
//	return 3;
//}
//
//
//int main() {
//
//	int (* pa)() = &Get;
//	printf("%d", pa());
//
//	return 0;
//}



 
//int main() {
//
//
//	printf("%p\n", (*(void (*)())0));
//	printf("%p\n", ((void (*)())0));//同理，根据函数指针调用的特点，可以忽略*；
//	printf("%d\n", ((void (*)())0));
//	printf("%p",0);
//
//
//
//	//(*(void (*)())0)();//void (*p)()是函数指针变量;void (*)()是函数指针类型；就好想int a和int;后者用来定义以及强制类型转化；
//};//把数据类型括起来是强制类型转化0【把0的地址就被当成这个函数指针类型的地址】；调用0,因为0数据类型是无参的，调用0（）也是无参的；







//int main() {
//
//	void (*signal(int, void (*)(int)))(int);//理解：signal是一个函数，函数的数据类型是int整型  void(*)(int)函数指针类型，
//	//这个函数的返回类型是函数指针类型
//
//	//void(*)(int)(signal(int, void(*)(int)));读取理解的写法
//	//想要用这中容易理解的写法，可以用typedef类型重定义
//
//
//	//typedef
//	// 一般typedef unsigned int uint;
//	//但typedef void (*)(int) pfun_t;不能这样写
//	typedef void (*pfun_t)(int);//对void (*)(int)的函数指针类型重命名为pfun_t;
//	pfun_t signal(int, pfun_t);
//
//	//于是pfun_t signal(int , pfun_t)=void (*signal(int,void (*)(int)))(int)
//
//
//
//	return 0;
//}



//int main() {
//	
//	typedef unsigned int uint;
//	char a = -1;
//
//	return 0;
//}



										//函数指针数组

//int Sum(int x, int y) {
//	return x + y;
//}
//
//int Sum2(int x, int y) {
//	return x - y;
//}
//
//int main() {
//	
//
//	int (*pf1)(int, int) = Sum;
//	int (*pf2)(int, int) = Sum2;
//	//函数指针数组
//	int (*pa[2])(int, int) = { Sum,Sum2 };
//
//
//	return 0;
//}





											//不使用函数指针写计算两个数




//void Game() {
//	printf("********************\n");
//	printf("**** 1.+    2.- ****\n");
//	printf("**** 3.*    4./ ****\n");
//	printf("****   0.退出   ****\n");
//	printf("********************\n");
//
//}
//
//int ap1(int x,int y) {
//	return x + y;
//}
//
//int ap2(int x, int y) {
//	return x - y;
//}
//
//
//int ap3(int x, int y) {
//	return x * y;
//}
//
//
//int ap4(int x, int y) {
//	return x / y;
//}
//
//
//int main() {
//
//	int input = 0;
//
//	do {
//
//		int get = 0;
//		int x = 0, y = 0;
//		Game();
//		scanf("%d", &input); 
//		
//		switch (input) {
//
//		case 1:
//			printf("请输入两个运算数：");
//			scanf("%d%d", &x, &y);
//			get=ap1(x,y);
//			break;
//		case 2:
//			printf("请输入两个运算数：");
//			scanf("%d%d", &x, &y);
//			get = ap1(x, y);
//			break;
//		case 3:
//			printf("请输入两个运算数：");
//			scanf("%d%d", &x, &y);
//			get = ap1(x, y);
//			break;
//		case 4:
//			printf("请输入两个运算数：");
//			scanf("%d%d", &x, &y);
//			get = ap1(x, y);
//			break;
//		case 0:
//			break;
//		default:
//			printf("输入错误\n");
//			break;
//		}
//
//	}while(input);
//
//	return 0;
//}
//后续的维护特别困难，比如要加<<计算，>>计算，比较大小，按位与，按位或；


																//【于是使用函数指针数组】

//【优化】




//void Game() {
//	printf("********************\n");
//	printf("**** 1.+    2.- ****\n");
//	printf("**** 3.*    4./ ****\n");
//	printf("****   0.退出   ****\n");
//	printf("********************\n");
//
//}
//
//int ap1(int x,int y) {
//	return x + y;
//}
//
//int ap2(int x, int y) {
//	return x - y;
//}
//
//
//int ap3(int x, int y) {
//	return x * y;
//}
//
//
//int ap4(int x, int y) {
//	return x / y;
//}
//
//
//int main() {
//
//	int input = 0;
//
//	do {
//
//		int get = 0;
//		int x = 0, y = 0;
//		Game();
//		int (*pfArr[5])(int, int) = { 0,ap1,ap2,ap3,ap4 };//创建函数指针数组，同时使ap1数组下标从1开始；对应输入的序号//返回类型必须一致；
//		scanf("%d", &input);
//		if (input >= 1 && input <= 4) {
//		printf("请输入两个有效数字：\n");
//		scanf("%d%d", &x, &y);
//		printf("结果：%d\n", (pfArr[input])(x, y));
//		}
//		else if (input == 0) {
//			printf("退出成功\n");
//		}
//		else {
//			printf("选择错误\n");
//		}
//		
//	} while (input);
//
//	return 0;
//}








//02d%

//int main() {
//
//	int i = 0;
//	for (i = 0; i <= 10; i++) {
//		printf("%02d\n", i);
//	}
//
//	return 0;
//}






//int main() {
//
//	int i = 10;
//	int* pa = &i;
//	printf("%p\n", pa);
//	printf("%p\n", &i);
//	printf("%d\n", *pa);
//
//	return 0;
//}







																//【转移表】

//如果一个数组，起到跳转作用，比如上面的函数指针数组；这样的一个数组叫做【转移表】




																//【指向函数指针数组的指针】


//指针数组-就是说首先是一个数组，而数组的元素是指针，也就是说，如果数组元素都是相同类型的指针，则称这个数组为指针数组
//不难想到既然有指向数组的指针；那么就有指向函数指针数组的指针


//int Get(int x, int y) {
//	return x + y;
//}
//
//int main() {
//	int i = 0;
//
//	int (*pfArr[])(int, int) = { Get };//函数指针数组
//	i=(*pfArr[0])(3, 5);//传参
//	int(* (*pfArr2)[])(int ,int) = {pfArr};//指向函数指针数组的 指针数组
//
//	printf("%d\n", pfArr);
//	printf("%d\n\n", Get);
//
//
//
//	printf("%d\n", *pfArr2);
//	printf("%d\n", pfArr);
//	printf("%d\n", *pfArr);
//	printf("%d\n", **pfArr2);
//	printf("%d\n", Get);//是用整型输出打印的函数的地址
//	printf("%d\n", Get(3,5));//打印函数返回值；
//	printf("%d\n", (*pfArr[0])(3, 5));
//	printf("%d\n", i);
//
//	return 0;
//}



//int main() {
//
//	int arr[] = { 1,2,3,4,5,6,7 };
//	int(* pa)[3] = arr;
//	printf("%d\n",**(pa+1));
//
//	return 0;
//}



														//【整合】


//char*(*pa)[]  数组指针，指向的数组每个元素类型是char*

//int main() {
//
//	int a[10];
//	//int是数组元素类型
//	//int[10]是数组类型
//
//
//
//	int a[]={0};
//	int(*pk)[] = &a;//数组指针//指向整型数组的指针
//	int(*pa[])[] = &a;//数组指针数组//指向多个数组的指针
//
//
//	int* i[] = { 0 };
//	int (*pk)[] = &i;//数组指针-指向整型指针数组的指针
//
//
//	int i;
//	int(* i)[];//数组指针
//	int* i[]={0};//指针数组//可以存放多个地址的指针变量；
//
//
//	//函数指针数组
//	int (*pk)(int, int);//函数指针
//	int (*pfArr[])(int, int) = { pk };//函数指针数组
//	int (*(*pa)[])(int, int) = { pfArr };//指向函数指针数组的指针
//	int (*(*pa[])[])(int, int) = {pfArr};//指向函数指针数组的指针数组
////(*pa)代表指针；[]代表指向数组的指针；int (*)(int ,int );代表指针类型即每个元素的类型；
//
//	return 0;
//}










																//是否有指向数组的数组指针 即是否有指向函数指针数组的数组指针//有

//int main() {
//	int arr[] = { 0 };
//	int* pa = &arr;//指针
//	int* pa1[] = { &pa };//指针数组
//	int(*pa2)[] = { &arr };//数组指针
//	int* (*pa3[])[] = { &arr };//指向数组的数组指针数组
//
//	return 0;
//}
//int(*pa[10])[5];//pa是一个存放数组指针的数组；能够存放10个数组指针，每个数组指针能够指向一个数组，数组5个元素，每个元素int型





																				//探索数组指针解引用
//int main() {
//
//	int arr[6] = { 1,2,3,4,5,6, };
//	int arr2[3] = { 7,8,9 };
//	//int(*pa[2])[] = {arr,arr2};
//	int(*pa[2])[3] = {arr,arr2};//忽略的话下面的(*pa)[1]就会 报错
//
//	printf("%d\n", (** pa)[1]);
//	printf("%d\n", *(* pa)[1]);
//
//
//	printf("%p\n", *(* pa));//arr的地址
//	printf("%p\n", &arr);//arr的地址
//
//	return 0;
//}



//int main() {
//
//	int arr[] = { 1,3,4,8 };
//	int* pa = &arr;
//	int** pa2 = &pa;
//	
//	printf("%d\n", *pa);//解引用拿到的是数组的首元素的值；
//	printf("%d\n", **pa2);//二级指针解引用
//
//	return 0;
//}

//对比

//int main() {
//
//	int arr[3] = { 1,2,3 };
//	int* pa[2] = {&arr};
//
//	printf("%d\n", (*pa));//解引用拿到的不是数组首元素的值；拿到的是数组首元素的地址；
//	printf("%d\n", &arr);
//
//	printf("%d\n", *(*pa));//看起来和二级指针很像，但它什么是一级指针呢？
//	printf("%d\n", (* pa)[0]);
//	
//
//
//	return 0;
//}

//重点：&arr和首元素地址；值是一样，但意义完全不同！

//如果一次解引用可以直接找到首元素，那存储在p中的就是数组首元素的地址，而不是整个数组的地址。但是在C语言中，& 数组名代表的整个数组的地址，这就会自相矛盾。
// 
// 如果你能解引用直接找到值，说明这个是元素地址；但指针数组存储的是数组的地址，自相矛盾；//在指针数组里，强调了存储的是数组地址；
//在数组指针里，这个地址是数组的地址，就算地址一样，这时候也要分开；


//【重点】
//如果数组指针和其他类型的指针一样，解引用应该会拿到数组首元素的值才对。为什么解引用两次才会拿到首元素的值，那这样不就和二级指针是一样的吗。
//但其实我认为数组指针和二级指针只是用法相同，但是本质上是不一样的。二级指针存储的是变量的地址的地址，而数组指针存储的是数组的地址。
//由于数组的特殊性，数组的地址和数组首元素的地址是相同的，但是表达的意义是不同的。
//数组地址是整个数组的地址，加一会跳过整个数组；而数组首元素的地址仅仅是第一个元素的地址，加一只会跳过一个元素。
//因此如果要访问数组的话，肯定是要先找到数组首元素的地址，然后再解引用访问数组首元素。
//通俗一点说，如果一次解引用可以直接找到首元素，那存储在p中的就是数组首元素的地址，而不是整个数组的地址。
//但是在C语言中，& 数组名代表的整个数组的地址，这就会自相矛盾。
















															//【回调函数】
//回调函数：如果你把函数指针（地址）作为参数传递给另一个函数
//当这个指针被用来调用其所指向的函数时，我们就说这是回调函数


//自己写的例子：

//int Get1(int x, int y) {
//	return x + y;
//}
//
//int Get2(int (*formal_parameter)(int, int)) {//形参接收
//	int i = 0;
//	i = (formal_parameter)(3, 5);//通过形参反过来调用函数Get1
//	printf("%d\n", i);
//}
//
//int main() {
//
//	Get2(Get1);//传入函数地址
//
//	return 0;
//}





													//通过回调函数简化运算器程序

//void Game() {
//	printf("********************\n");
//	printf("**** 1.+    2.- ****\n");
//	printf("**** 3.*    4./ ****\n");
//	printf("****   0.退出   ****\n");
//	printf("********************\n");
//
//}
//
//int ap1(int x,int y) {
//	return x + y;
//}
//
//int ap2(int x, int y) {
//	return x - y;
//}
//
//
//int ap3(int x, int y) {
//	return x * y;
//}
//
//
//int ap4(int x, int y) {
//	return x / y;
//}
//
//
//int Calc(int (*pa)(int, int)) {//仿佛形成跳板中转站的作用
//	int x, y;
//	printf("请输入两个有效数字：\n");
//	scanf("%d%d", &x, &y);
//	printf("%d\n", pa(x, y));
//}
//
//
//int main() {
//
//	int input = 0;
//
//	do {
//
//		int get = 0;
//		int x = 0, y = 0;
//		Game();
//		scanf("%d", &input); 
//		
//		switch (input) {
//
//		case 1:
//			Calc(ap1);
//			break;
//		case 2:
//		
//			Calc(ap2);
//			break;
//		case 3:
//			Calc(ap3);
//			break;
//		case 4:
//			Calc(ap4);
//			break;
//		case 0:
//			printf("退出成功\n");
//			break;
//		default:
//			break;
//		}
//
//	}while(input);
//
//	return 0;
//}





//库里自定义

//int main() {
//
//	//ptrdiff_t a = 10;
//	//printf("%d\n", a);
//	//size_t库里定义的typedef unsgned int
//	// ptrdiff_t库里定义的typedef int
//	//转到定义都可以查看
//	return 0;
//}
















																	//【库函数qsort快速排序】

//什么数据类型都可以排。排整形，排字符串，排char，排体都可以


//排整型

//#include<stdlib.h>
//
//int cmp_int(const void*e1,const void*e2) {
//	return *(int*)e1 - *(int*)e2;
//}f
//
//
//void print(int *a,int sz) {
//	int i = 0;
//	for (i = 0; i < sz; i++) {
//		printf("%d\n", *(a + i));
//	}
//}
//
//
//
//int main() {
//
//	int arr[] = { 9,8,7,6,5,4,3,2,1 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//
//	qsort(arr,sz,sizeof(arr[0]), cmp_int);
//
//	print(arr,sz);
//
//	return 0;
//}






//排字符串

//#include<stdlib.h>
//#include<string.h>
//
//int cmp_int(const void*e1,const void*e2) {
//	return *(char*)e1 - *(char*)e2;//字符相减，小于int进行整形后提升后计算结果=1；再以整型返回；
//}
//
//void print(char* pa, int sz) {
//	int i = 0;
//	for (i = 0; i < sz; i++) {
//		printf("%c\n", *(pa + i));
//	}
//
//}
//
//int main() {
//
//	char arr[] = "987654321";
//	int sz = strlen(arr);
//
//	qsort(arr,sz, sizeof(char),cmp_int);
//
//	print(arr,sz);
//
//	return 0;
//}






//int main() {
//
//	char b = '9';
//	char c = '8';
//	printf("%d\n", b);
//	printf("%d\n", c);
//
//	return 0;
//}


//int main() {
//
//	char a = -1;
//	printf("%u\n", a);
//
//	return 0;
//}









																	//字符串比较元素大小


//int main() {
//
//	char arr[] = "123456";
//	if ((int)arr[0] < (int)arr[1]) {
//		printf("小于\n");
//	}
//	else {
//		printf("大于\n");
//	}
//
//	return 0;
//}





//int main() {
//
//	char arr[] = "ha";
//	char a1 = 'h';
//	char a2 = 'a';
//
//	printf("h=%d\n", a1);
//	printf("h=%d\n", a2);
//
//
//
//	if ((int)arr[0] < (int)arr[1]) {
//		printf("小于\n");
//	}
//	else {
//		printf("大于\n");
//	}
//
//	return 0;
//}












//int main() {
//	int a = 10;
//	int* pa = a;//a等价10；把10存进去，会认为这个10是一个地址
//	printf("%d", *pa);
//
//	return 0;
//}





//int Get(int sum) {
//	int i = 1;
//	int sum1 = 1;
//	for (i = 1; i <= sum; i++) {
//		int k = 1;
//		int z = 1;
//
//		for (k = 1; k <= i; k++) {
//
//			z *= k;
//		}
//		sum1 *= z;
//	}
//	return sum1;
//
//}
//
//
//int main() {
//
//	int i, k;
//	int sum = 0;
//	scanf("%d%d", &i,&k);
//	sum = i + k;
//
//	printf("%d", Get(sum));
//
//
//	return 0;
//}
















//struct tan {
//	char name[10];
//	int money;
//	char ID[20];
//}ren;
//
//int main() {
//
//	struct tan ren = { "陈可林",50200,"202115002332" };
//	printf("%s", ren.name);
//
//	return 0;
//}




//void get(int** pa) {
//	printf("%d", **pa);
//}
//
//int main() {
//
//	int a = 10;
//	int* pa = &a;
//	get(&pa);
//
//	return 0;
//}



//
//#include<stdio.h>
//
//
//
//void get(int** pa) {
//	printf("%d", **pa);
//}
//
//int main() {
//
//	int a = 10;
//	int* a1 = &a;
//	int* pa[] = {a1};
//	get(pa);
//
//	return 0;
//}












//void get(int* pa) {
//
//	printf("%d", *pa);
//}
//
//int main() {
//
//	int a = 10;
//	int* pa = &a;
//	get(pa);
//
//	return 0;
//}






//一级指针传参：数组名，&数组名，&a，*pa；
//二级指针传参：一级指针，二级指针，指针数组


//void get(int** pa) {
//
//	printf("%p\n", *pa);
//	printf("%d\n", **pa);
//	
//}
//
//int main() {
//	int a = 2;
//	//get(&a);
//	
//	int* p = &a;//*pa=&a;*p就是通过a的地址找到a具体的值；
//	int* arr[] = { p };//arr存的是p的地址，就是p=&a，故arr可以传给二级指针
//	get(arr);
//	printf("%p", a);
//
//	return 0;
//}



									//【传指针】

//void get(int* pa) {
//	printf("%d", *pa);
//}
//
//int main() {
//	int a = 10;
//	int* pa = &a;
//	get(pa);
//
//
//	return 0;
//}


									//【传指针地址】相当与二级指针

//void get(int **pa) {
//	printf("%d", **pa);
//}
//
//int main() {
//	int a = 10;
//	int* pa = &a;
//	get(&pa);
//
//
//	return 0;
//}








//void get(int a) {
//	printf("%d", a);
//}
//
//int main() {
//	int a = 10;
//	int* pa = &a;
//	get(*pa);
//
//
//	return 0;
//}











//void get(int** pa1) {//形参为二级指针时，能传什么参数给他呢？【传二级指针&pa1】【传一级指针的地址&pa】//一级指针地址，要用二级指针接收指针地址
//	printf("%d\n", *(*pa1));
//	printf("%d", **pa1);
//}
//
//int main() {
//	int a = 10;
//	int* arr[] = {0};
//	int* pa = &a;
//	int** pa1 = &pa;
//	get(pa1);
//	//二级pa1,一级pa,指针数组arr,
////arr[0]本身是一个指针，但是arr是数组名，保存的是数组首元素的地址，
//	//也就是说arr中存储的是一级指针的地址，所以可以传递可以 int *arr[10]这个是一个指针数组
//	return 0;
//}


//int main() {
//	int a = 10;
//	int b = 2;
//	int c = 3;
//	int* pa[3] = { &a,&b,&c };
//	int** pa1 = &pa;
//	printf("%d", *(* pa1));
//
//	return 0;
//}









														//【指针作业讲解】


//int main(){
//	int arr = 0x11223344;
//	char* pa = (char*)&arr;
//	*pa = 0;//char指针指向地址，char指针跨度为1个字节，修改1个字节
//	printf("%x\n", arr);




//int i;//i是全局变量//全局变量不初始化，默认为0；
//int main() {
//	i--;
//	if (i > sizeof(i)) {//sizeof这个操作符，算出结果类型是unsigned int 
//		printf(">\n"); //于是他会返回一个无符号整型；这时i与其进行运算时，会整型提升为unsigned int; -1变为很大的数所以>4
//	}
//	else {
//		printf("<\n");
//	}
//	return 0;
//}




//int i;
//int main() {
//	
//	i--;
//	printf("%d\n", i);
  //
//
//	return 0;
//}



											//【计算a+aa+aaa+aaaa+aaaaa】
//我一开始写的
//int main() {
//	int a, col;
//	scanf("%d%d", &a,&col);
//	int b = a;
//	int c = a;
//	for (int k = 0; k < col-1;k++) {
//		b = b * 10 + c;
//		a += b;
//	}
//	printf("%d\n", a);
//	return 0;
//}


//写法
 
//int main() {
//	int sum = 0;
//	int ret = 0;
//	int i = 0;
//	int input, col;
//	scanf("%d%d", &input, &col);//输入数和项
//	for (i = 0; i < col; i++) {
//		ret = ret * 10 + input;
//		sum += ret;
//	}
//	printf("%d\n", sum);
//
//	return 0;
//}

//思路：先考虑产生每一个数，然后都加起来；产生2，22，222，2222，22222


//int rece(int i, int col, int input) {
//	int sum = 0;
//	if (>0) {
//		i = i * 10 + input;
//		--;
//		sum=rece(i, col, input);
//	}
//	sum += i;
//	return sum;
//}
//int main() {
//	int input, col;
//	int i = 0;
//	int k;
//	scanf("%d%d", &input, &col);
//	k=rece(i, col,input);
//	printf("%d\n", k);
//	return 0;





																	//【水仙花数】

//#include<math.h>
//int main() {
//	int a = 100;
//	int n;//幂
//	int i, k, b;
//	printf("请输入水仙花的幂\n");
//	scanf("%d", &n);
//	do {
//		
//		i = a / 100;
//		k = a / 10 % 10;
//		b = a % 10;
//
//		if (pow(i, n) + pow(k, n) + pow(b, n) == a) {
//			printf("%d\n", a);
//		}
//		a++;
//	} while (a!=1000);
//	
//	return 0;
//
//}





									//【求1~100000的水仙花数】

//#include<math.h>
//int main() {
//
//	int n = 0;
//	int i = 0;
//	
//	
//	int ret = 0;
//	for (n = 1; n < 100000; n++) {
//		int rep = n;//防止影响n
//		int a = 1;//每次循环重新赋值
//		while (rep / 10) {
//			a++;
//			rep = rep / 10;
//		}
//		rep = n;//防止影响n
//		int sum = 0;//每次循环重新赋值 
//		while (rep) {
//			
// 			sum+=pow(rep % 10, a);
//			rep=rep / 10;
//			
//		}
//		if (sum == n) {
//			printf("%d\n", sum);
//		}
//		
//	}
//
//	return 0;
//}







//int main() {
//	unsigned long arr[5] = { 6,7,8,9,10 };
//	unsigned long* pa;
//	pa = arr;
//	*(pa + 3) += 3;//只是指针移动3个unsigned long字节长度后改变里面的元素；指针并并没用发生pa=pa+3
//	printf("%d\n%d\n", *pa, *(pa + 3));
//	return 0;
//}


//int main() {
//	unsigned long i;
//	unsigned int k;
//	long arr;
//	double z;
//	printf("%d\n%d\n%d\n%d\n", sizeof(i), sizeof(k), sizeof(arr),sizeof(z));
//
//	return 0;
//}




//struct get() {
//	int a;
//	float b;
//	char arr[10];
//}stu;//这个stu是利用这个体创建一个变量；就好像利用int创建a   ->    int a;
//
//等价struct get stu
//stu是体变量名




//struct stu {
//	int id;
//	char name[10];
//	int age;
//};
//
//void fun(struct stu* pa) {//体类型形参
//	printf("%s\n", (*pa).name);
//}
//
//int main() {
//	struct stu a[3] = { {9928,"chen",20},{9936,"ke",19},{9958,"gang",21} };
//	fun(a + 1);//传第二个元素{9936,"chen",20}的首地址
//
//	return 0;
//}

//struct stu a[3],存了3个该体类型的变量，a+1指向第二个变量；



//【指针减去指针=指针之间元素的个数】【不是字节的个数】



					//【下面哪个是指针数组】A
//int main() {
//	int* arr[10];
//	int* arr[];
//	int** arr;
//	int(*arr)[10];
//
//	return 0;
//}


//struct s {
//	int a;
//	int b;
//
//};
//
//
//int main() {
//	struct s a, * pa = &a;
//	a.a = 99;
//	printf("%d\n", );//a.a【对】//*pa.a【错，点的优先级更高】//(*pa).a【对】//pa->a【对】
//	return 0;
//}



//字符串逆序
//int main() {
//	char arr[] = "Hell wo si";
//	int left = 0;
//	int right =strlen(arr)-1;
//	printf("%d\n", sizeof(arr));
//	printf("%d\n", strlen(arr));
//	char* pa = arr;
//	char* pa2 = pa+ right;
//	char arr2=0;
//	while (left < right) {
//		arr2 = arr[left];
//		arr[left] = arr[right];
//		arr[right] = arr2;
//		left++;
//		right--;
//	}
//	printf("%s\n", arr);
//
//	return 0;
//}//写成函数，最好加个断言assert(形参!=NNLL);




//递归求法

//我一开始呆呆是思路。其实便没有什么用,无非就是循环
//void get(char* left, char* right) {
//	if (left < right) {
//		char a = *left;
//		*left = *right;
//		*right = a;
//		left++;
//		right--;
//		get(left, right);
//	}
//	return 0;
//
//}
//
//#include<string.h>
//int main() {
//	char arr[] = "ni hao qo";
//	char* left = arr;
//	char* right = arr + strlen(arr) - 1;
//	get(left, right);
//	printf("%s\n", arr);
//	return 0;
//}



//真正的写法【思路：先让地址向后移，直到移动到最后，条件促发，递归开始打印最后一个字符，返回返回上一个递归打印倒数第二个字符】

//void get(char* pa) {
//	if (*pa) {
//		get(pa++);//传pa++后结果的值
//		printf("%c", *pa);
//	}
//}
//
//int main() {
//	char arr[] = "nihaoya";
//	get(arr);
//	return 0;
//}


//【不能写成char*pa="hahfids";这里的字符串是常量字符串；】




											//【为什么字符串数组地址存入指针可用%c打印单个字符】指针跨度为类型字节，加一减一才会移动
											
//int main() {
//	char arr[] = "hhahesf";
//	char* pa = arr;
//	printf("%c\n", arr);//字符串数组本身用%c输出就不对，就好像前面的以浮点读出，整型打印，无法打印出很大的数
//	printf("%c\n", *pa);//这里的指针存入的是一个字符的地址，%c输出值，%p输出地址
//	return 0;
//}



//#include<string.h>
//int main() {
//	char arr[] = "hageh";
//	printf("%c\n", arr[2]);
//	printf("%d\n", sizeof(arr) / sizeof(arr[0]) - 1);
//	printf("%d\n", strlen(arr));
//
//	return 0;
//}





//打印菱形图案




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



												//【喝汽水游戏，一元一瓶汽水，2个空瓶子换一瓶汽水，能喝几瓶】

//int main() {
//	
//	int money = 0;
//	scanf("%d", &money);
//	int kong=money;
//	int he = money;
//	while (kong >= 2) {
//		he += kong / 2;
//		kong = kong / 2 + kong % 2;//上一次余下的一个空瓶子
//		
//	}
//	printf("%d\n", he);//依次输入8，9.10；会发现规律，2*money-1；
//
//	return 0;
//}



													//通过规律2*money-1写法：

//int main() {
//	int money = 0;
//	scanf("%d", &money);//如果0，结果就不对
//	int total = 2 * money - 1;
//	printf("%d\n", total);
//	return 0;
//}

//于是

//int main() {
//	int money = 0;
//	int total = 0;
//	scanf("%d", &money);
//	if (money > 0) {
//		total = 2 * money - 1;
//	}
//	printf("%d\n", total);
//	return 0;
//}






//写法思路：【边喝边换】
//int main() {
//	int s = 20;
//	int b = 0;//喝
//	while (s) {
//		s--;
//		b++;
//		if (b % 2 == 0) {//喝来偶数，余出两个空瓶子，换一瓶，使得s++
//			s++;
//		}
//	}
//	printf("%d\n", b);
//	return 0;
//}


													//【将数组偶数放在前半部分，奇数放在后半部分】


//粗糙的
//int main() {
//	int arr[] = { 1,2,3,4,5,6,8,8,8,8,7,12};
//	int i = 0;
//	int k = sizeof(arr) / sizeof(arr[0])-1;
//	for (i = 0; i < sizeof(arr) / sizeof(arr[0]) - 1;i++) {
//		if (arr[i] % 2 != 0) {
//			while (k>i) {
//				if (arr[k] % 2 == 0) {
//					int a = arr[i];
//					arr[i] = arr[k];
//					arr[k] = a;
//					break;
//				}
//				k--;
//			}
//		}
//	}
//	for (i = 0; i < sizeof(arr) / sizeof(arr[0]); i++) {
//		printf("%d\n", arr[i]);
//	}
//	return 0;
//}






//粗糙的函数置换
//void move(int* pa, int sz) {
//	int*pa2=pa+(sz-1);
//	while (pa < pa2) {
//		
//		if (*pa % 2 != 0) {//找到了，开始找后面的
//			while (pa2>pa) {
//				if (*pa2 % 2 == 0) {//找到了，置换
//					int a = *pa;
//					*pa = *pa2;
//					*pa2 = a;
//					break;
//				}
//				pa2--;//没找到，前挪
//			}
//		}
//		pa++;//没找到奇数，向后找
//	}
//}







//void print(int arr[], int sz) {
//	int i = 0;
//	for (i = 0; i < sz; i++) {
//		printf("%d ", arr[i]);
//	}
//}
//
//
//void move(int* pa, int sz) {
//	int* pa2 = pa + sz - 1;
//	while (pa < pa2) {
//
//		while ((pa<pa2)&&(*pa % 2 == 0)) {//没找到奇数//pa<pa2是因为防止当数组都是偶数时pa向后访问越界访问到数组外面
//			pa++;//后移
//		}
//		while ((pa<pa2)&&(*pa2 % 2 != 0)) {//没找到偶数//pa<pa2是因为防止当数组都是奇数时pa2向前访问越界访问到数组外面
//			pa2--;//前移
//		}
//		if (pa < pa2) {
//			int a = *pa;
//			*pa = *pa2;
//			*pa2 = a;
//		}
//	}
//}
//
//
//
//int main() {
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	move(arr,sz);//实现置换
//	print(arr,sz);//实现打印
//	return 0;
//}





//#include<stdio.h>
//
//void print(int arr[], int sz) {//打印数组
//	int i = 0;
//	for (i = 0; i < sz; i++) {
//		printf("%d ", arr[i]);
//	}
//}
//
//	void subs(int arr[], int sz) {
//		int left = 0;
//		int right = sz - 1;
//		while (left < right) {
//			while (left < right && arr[left] % 2!= 0) {//条件成立，则left下标元素是奇数，不用置换
//				left++;
//			}
//			while (left < right && arr[right] % 2 == 0) {//条件成立，则right下标元素是偶数，不用置换
//				right--;
//			}
//			if (left < right) {
//				int a = arr[left];
//				arr[left] = arr[right];
//				arr[right] = a;
//			}
//
//		}
//	}
//
//	int main() {
//		//int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//		int arr[] = { 1,3,5,7,9 };//如果都是奇数
//		int sz = sizeof(arr) / sizeof(arr[0]);
//		subs(arr, sz);//置换奇数与偶数
//		print(arr, sz);//打印数组
//		return 0;
//	}



//【无符号整形提升补0】【有符号位整型提升补符号位】
//int main() {
//	unsigned char a = 200;
//	unsigned char b = 100;
//	unsigned char c = 0;
//	c = a + b;
//	printf("%d %d", a + b, c);
//
//	return 0;
//}



//#include<string.h>
//int main() {
//	char a[1000] = { 0 };
//	int i = 0;
//	for (i = 0; i < 1000; i++) {
//		a[i] = -1-i;
//
//	}
//	printf("%d\n", strlen(a));//strlen找'\0',  -1,-2,-3....-127,-128,127,126...0【共255个】
//	return 0;
//}


//char=‘0’和char=0 都对，有啥区别吗
//有区别，一个是字符0，一个是数值0.
//字符0的asc码值是0x30, 数值0的就是0
//char c=0和char c='\0' 是相同的 ， char c='0' 和 char c=0x30是相同的








//int main() {
//	char a = 127;
//	/*a += 1;
//	printf("%d", a);*/
//	printf("%d", a + 1);//结果并没有截断
//	return 0;
//}




//关于char -127-1后的值

//1000000001111111 - 127
//1000000001111110
//1111111110000001补
//10000001
//
//1111111110000001 - 127
//1111111111111111 - 1
//
//1111111110000000 - 127 + (-1)的补
//1111111101111111  反
//1000000010000000  原



//1111111110000000 -128的
//1111111101111111  -128-1
//截断存入的补码：
//01111111
//符号位是0；补=反=原


//1000000001000000  -128的原
//1111111110111111  -128的反
//1111111111000000  -128的补


//111111111111000000  -128-1
//111111111110111111  -128-1的补
//01111111  -128-1截断
//原=反=补
//127





														//打印杨辉三角

//int main() {
//	int arr[10][10] = { 0 };
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < 10; i++) {
//		
//		for (j = 0; j <= i; j++) {
//			if (j == 0) {
//				arr[i][j] = 1;
//			}
//			if (j == i) {
//				arr[i][j] = 1;
//			}
//			if (i >= 2 && j > 0) {
//				arr[i][j] = arr[i - 1][j] + arr[i - 1][j - 1];//上面一行的j列和j-1列相加
//			}
//		}
//	}
//	for (i = 0; i < 10; i++) {
//		for (j = 0; j <= i; j++) {
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//
//	return 0;
//}



													//优化杨辉三角

//int main() {
//	int i = 0;
//	int j = 0;
//	int arr[10][10] = { 0 };
//	for (i = 0; i < 10; i++) {
//		for (j = 0; j <= i; j++) {
//			if (j == 0) {
//				arr[i][j] = 1;
//			}
//			if (i == j) {
//				arr[i][j] = 1;
//			}
//			if (i >= 2 && j >= 1) {
//				arr[i][j] = arr[i - 1][j]+arr[i - 1][j - 1];
//			}
//		}
//	}
//	
//	for (i = 0; i < 10; i++) {
//		int sum = 9;
//		int z =0;
//		for (z; z < sum - i; z++) {//第一行打印9-i=9空格//第二行9-i=8个空格
//			printf(" ");
//		}
//		for (j = 0; j <= i; j++) {
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
// }




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










//猜名次
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















//int main() {
//	int n = 0;
//	int i = 0;
//	int j = 1;
//	scanf("%d", &n);
//	for (i = 1; i <= n; i++) {
//		for (j = 1; j <= n - i; j++) {
//			printf(" ");
//		}
//		
//		int k = 1;
//		for (k=1; k <= 2*i-1; k++) {
//			printf("*");
//		}
//		printf("\n");
//	}
//	for (i = 1; i <n; i++) {
//		for (j = 0; j < i; j++) {
//			printf(" ");
//		}
//		for (j = 1; j <=2*(n-i-1)+1; j++) {
//			printf("*");
//		}
//		printf("\n");
//
//	}
//
//	return 0;
//}

 /* *
   ***
  *****
 *******
**********/









 
														//【指针进阶1】
//int main(){
//	char arr1[] = "Hello haha";
//	char arr2[] = "Hello haha";
//	char* pa1 = "Hello haha";//存入H的地址【Hello haha是一个字符串常量】
//	char* pa2 = "Hello haha";//同为字符串常量且一样，在内存中共用          【建议常量加const】const char *pa
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



												//【指针数组】

//指针是数组，数组里存放的是指针（地址）

//int main(){
//	int a = 10;
//	int b = 20;
//	int c = 30;
//	int* pa[3] = {&a,&b,&c};//这种写法是非常挫的
//	int i = 0;
//	for (i = 0; i < 3; i++) {
//		printf("%d\n", *pa[i]);
//	}


								//常见的写法

//int main(){
//	int a[] = { 2,3,4 };
//	int b[] = { 5,6,7 };
//	int c[] = { 8,9,0 };
//
//	int* pa[3] = {a,b,c};//a,b,c分别代表首地址；
//	int i = 0;
//	for (i = 0; i < 3; i++) {
//		int k = 0;
//		for (k = 0; k < 3; k++) {
//			//printf("%d\n", *(pa[i]+k));
//			printf("%d\n", pa[i][k]);//i是访问指针的元素，k是访问指针元素的元素；这种写法模拟了一个二维数组【二维数组内存是连续的，这个不是连续的】
//		}
//		printf("\n");
//	}

	
													//【数组指针】【数组&arr和arr的区别】

//指针数组：指数组【指针类型的数组】
//数组指针：指指针【能够指向数组的指针】
//正如【整型指针】【能够指向整型数据的指针】；
//【&arr是取数组地址，arr是数组首元素地址】
//数组指针：存放数组元素首地址的地址//【小地址的地址就是大地址】


//int main() {
	//int a[3] = { 1,2,3 };
	//int (* pa)[3] = &a;//pa是指针名字，指针指向int型数组【pa先和指针结合，使得其是指针】【指针再指向[]数组】
	////数组指针,其中存放的是数组的地址
	//int* pa[3] = &a;//这里int *pa[]相当于指针数组，指针数组存放的是指针，这里&a是数组；【pa先和方块[]结合说明他是一个数组，然后int*说明同是一个指针类型都数组，即指针数组】
	//printf("%d", (*pa)[1]);



	/*double* arr[5];
	double* (*pa)[5] = &arr;
	printf("%p", pa);*/



	//【对数组arr[10]取地址&arr和arr区别】
	//int arr[10] = { 0 };
	//printf("%p\n", &arr);
	//printf("%p\n", arr);
	////指向同一个位置，但意义完全不一样
	////char arr='a';//97-char
	////int arr=97;//97-int 就好像这两个的意义不一样


	//int arr[10] = { 0 };
	//int *pa1=arr;//首元素地址；int类型
	//int(*pa2)[10] = &arr;//数组地址，(*pa)[]类型
	//printf("%p\n", p1);
	//printf("%p\n", p1+1);
	//printf("%p\n", p2);
	//printf("%p\n", p2+1);//指针类型决定了指针+1到底+几

	//【整型指针加1跳过4个字节】
	//【数组指针加1 跳过数组指针指向的对象数组的大小p2+1跳过arr[10]大小的数组】



												//【数组指针的使用】【一般运用在二维数组以上】
//不建议在一维数组使用，会很别扭；
//例如

//int main(){
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int(*pa)[10] = &arr;
//	for (int i = 0; i < 10; i++) {
//		printf("%d ", *(*pa) + i);//*pa相当于arr数组名；*(*pa)相当于对地址解引用，+i是地址指向下一个元素【移动4个字节】，*(*pa)+1先移动在解引用
//	}

	//这种通常只需要一个一级指针
//int main(){
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int* pa = arr;
//	for (int i = 0; i < 10; i++) {
//		printf("%d ", *pa + i);
//	}


//【二维数组】【二维数组的首元素地址=数组的第一行】

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


//写法【】
 


//void print(int(*pa)[5], int r, int c) {//p是一个指向一维数组的指针，它指向的这个数组有5个元素，每个元素int型,则1代表arr[1],6代表arr[2],11代表arr[3]
//	for (int k = 0; k < r; k++) {
//		for (int i = 0; i < c; i++) {
//			printf("%d ", *(*(pa + k) + i));
//		}
//		printf("\n");
//	}
//
//}
//
//int  main() {
//	int arr[3][5] = { 1,2,3,4,5,6,7,8,9,10,11,12,13,14,15 };
//	print(arr, 3, 5);
//	//传的是第一行5个数组元素的首地址【本身传的不是地址，是数组，如果接收，应该用数组指针】
//	//如果传的是&arr，不能用一维数组，要用二维数组char (*pa)[3][5]
//	return 0;
//}




//int arr[10];
//int(*pa)[10];
//int(*pa[10])[5];//pa是一个存放数组指针的数组；能够存放10个数组指针，每个数组指针能够指向一个数组，数组5个元素，每个元素int型
//理解：pa是数组名，int （*pa)[5]是一个数组指针，数组名加[10],有十个空间看，能存放10个数组指针




														//【数组参数和指针参数】

//如果将数组或则指针传给函数，函数参数应该怎么设计


//一维数组传参】

//void test(int arr[]) {//形参可以不用写
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

//void test2(int** arr2) {//存放指针地址的指针//二级指针
//	printf("%d\n", *arr2);
//}

//int main(){
//	int arr[10] = { 0 };
//	int* arr2[20] = { 0 };
//	//test(arr);
//	test2(arr2);


//二维数组传参】

//void test(int arr[3][5]) {
//
//}
//void test(int arr[][5]) {
//	
//}
//void test(int arr[][]) {//【错】，只能忽视行，不能忽视列
//	
//}
//void test(int(* arr)[5]) {//不能int *arr;传的是第一行的【数组】，5个元素;int *arr[5];这是指针数组，存放指针；【传的是数组，我应该用指向数组的指针接收】
//
//}

//void test(int(* arr)[5]) {
//	printf("%d\n", *((*arr)[1]));
//}


//void test(int(*arr)[5]) {
//	printf("%d ", (*arr)[3]);//解引用=数组名，数组名+下表=访问【要上面那样（*（*pa+k）+i），这是指针位移，位移完要知道知道指针内容，通过解引用】
//}
//int main(){
//	int arr[3][5] = { 1,2,3,4,5,6,7,8,9,10,11,12,13,14,15 };
//	test(arr);














															  //【浮点数与整数在内存中存储的方式不同】

//地址进行强制类型转化，仅仅转化的是类型，地址里面的值并没有改变
//int main(){
//
//	int n = 9;
//	float* pa = (float*)&n;//地址是一个地址，地址是指针，强制类型转化用float*；
//	printf("n的值为%d\n", n);
//	printf("*pa的值为%f\n", *pa);
//
//	*pa = 9.0;
//	printf("以整型打印：%d\n", n);
//	printf("以浮点打印：%f\n", *pa);






//int main() {
//	int i = 9;
//	float*pa=(float*) & i;
//	*pa = 9.0;//以浮点型存入整型
//	float a = 9.0;//以浮点型存入浮点型
//	printf("%d\n", a);//打印的时候以整型输出浮点型
//	printf("%d\n", i); //打印的时候还是整型输出整型
////float读取的时候是以浮点型取出，最后以整型打印；
////*pa是以浮点型存入整型，但最后存进去后他是一个整型int i;读取的时候是整型，打印是整型；


//应该改成
//int int *pa1=(int*)&a;
//printf("%d\n",*pa1);//把他转成int型，读取的时候就是int型；




//5.5->101.1->1.011*2^2->（-1）^0*1.011*2^2


//5.5
//101.1
//1.011 * 2 ^ 2
//s = 0    M = 1.011   E = 2
//s = 0    M = 011     E = 2+127  【具体存入】
//0[10000000]【129】[1011]000000000000
//0100 0000 01011 0000 0000 0000
//40 b0 00 00  【十六进制显示】



//int main(){
//	int a = -9;
//	float k = (float)a;
//	printf("%f\n", a);
//	s=1   M=011   E=2+127












//int main(){
//	unsigned int a = 9;
//	for (a = 9; a >= 0; a--) {//i=0时减一变成一个2^32的数，因为是无符号的数，取值0~2^32【有符号-2^32-1~0~2^32-1】
//		printf("%u\n", a);
//		//printf("%d\n", a);
//	}



 /*int main(){
	 unsigned int a = 0;
	 a = a - 1;
	 printf("%u", a);*/


//【零界后加一截断的是符号位，而不是末尾位】
//int main(){
//	unsigned char a = 255;
//	a += 1;
//	printf("%u\n", a);


//int main(){
//	unsigned char a = 0;
//	for (a = 0; a <= 255; a++) {
//		printf("haha\n");
//	}





//【喝汽水写博客分析】
//int main() {
//
//	int i = 0;
//	scanf("%d", &i);
//	int kong=i;
//	int bu = i;
//	while (kong>=2) {
//		bu += kong / 2;
//		kong = kong/2+kong%2;
//	}
//	printf("%d", bu);
//
//	return 0;
//}



//int main() {
//
//	int i = 0;
//	scanf("%d", &i);
//	int kong = 0;
//	int bu = i;
//	int sum = 0;
//	while (kong!= 1) {
//		
//		sum += bu;
//		kong = bu+kong%2;
//		bu = kong / 2;
//		
//	}
//	printf("%d", sum);
//
//	return 0;
//}



//#include<stdio.h>
//
//int main() {
//
//	int money = 0;//钱
//	scanf("%d", &money);
//	int sum = 0;//喝进肚子里的汽水量
//	int q = money;//有多少瓶汽水可以喝
//	int k = 0;//空瓶子数量
//
//	while (k != 1) {
//		sum += q;//把手上的汽水装到肚子里
//		k = q + k % 2;//汽水喝完剩下的空瓶子
//		q = k / 2;
//	}
//	printf("%d", sum);
//
//	return 0;
//}


//int main() {
//	char arr[] = "fhek";
//	int arr1[] = { 1,2,3,4 };
//	printf("%d",arr[4]);
//	printf("%c", arr[4]);
//
//
//
//	return 0;
//}



//一级指针传参

//int main() {
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int* pa = &arr;
//
//
//
//	return 0;
//
//}



//#include<math.h>
//int main() {
//
//	int k = 1;
//	float n = 1;
//	double sum = 0;
//	double term = 0;
//
//	 do{
//		
//		term=k / n;
//		sum += term;
//		n += 2;
//		k=-k;
//
//	 } while (fabs(term) > 1.0/100000);
//
//	printf("%lf", sum*4);
//
//	return 0;
//}
//
//
//
//#include<math.h>
//int main() {
//
//	int k = 1;
//	float n = 1;
//	double sum = 0;
//	double term = 0;
//
//	do {
//
//		term = k / n;
//		sum += term;
//		n += 2;
//		k = -k;
//
//	} while (fabs(term) > 1e-5);
//
//	printf("%lf", sum * 4);
//
//	return 0;
//}



//int main() {
//
//	printf("%d\n", sizeof(char));//1
//	printf("%d\n", sizeof(unsigned char));//1
//	printf("%d\n", sizeof(int));//4
//	printf("%d\n", sizeof(unsigned int));//4
//	printf("%d\n", sizeof(float));//4
//	printf("%d\n", sizeof(double));//8
//
//	return 0;
//}


//int main() {
//
//	unsigned int a = -1;
//	printf("%d",a);//以有符号
//
//	return 0;
//}


//int main() {
//
//	/*float a = 1;
//	int* pa = &a;
//	*pa = 1;*/
//
//	int a = 0;
//	float* pa = &a;
//	*pa = 1;
//
//	printf("%d", a);
//
//	return 0;
//}

//int main() {
//	int a = 3.0 / 2;
//	printf("%d", a);
//
//
//	return 0;
//}


//void get(int* pa) {
//
//	printf("%d ", *pa);
//}
//
//int main() {
//	int arr[3] = { 1,2,3 };
//	get(arr+1);
//	printf("\n");//
//	get(&arr+1);//跳过一个数组,跳到arr[4]
//	printf("\n");
//	printf("%p\n", &arr);
//	printf("%p", &arr + 1);//十六进制地址
//
//
//	return 0;
//}



//void get(int* pa) {
//
//	printf("%d", *(pa + 1));
//}
//
//int main() {
//	int arr[] = { 1,2,3 };
//	get(&arr);
//	printf("\n");
//	printf("%p\n",&arr);
//	printf("%p\n",&arr+1);
//	return 0;
//}
//
////结论：对&arr进行操作+1；和将&arr传给*pa进行+1是不同的









//【有符号位和无符号位的整型提升】

//【unsigned认为，二进制中没有符号位，原本的符号位也是有效数字】11111111八个有效数字，没有符号位

//int main() {
//	char a = -1;
//	signed char b = -1;
//	unsigned char c = -1;//反码截断，%d输出整型提升
//	printf("%d\n", a);
//	printf("%d\n", b);
//	printf("%d\n", c);
//
//	return 0;
//}
//	



//int main() {
//	
//	int k = -1;
//	char a = k;
//	printf("%d\n", k);
//
//
//}



//int main() {
//
//	int k = -1;
//	char a = k;
//	printf("%d\n", k);//打印-1
//
//	return 0;
//}



//int main() {
//	
//	unsigned char c = -1;//%d输出整型提升
//	
//	printf("%d\n", c);
//
//	return 0;
//}




//int main() {
//
//	int a = -1;
//	if (sizeof(a)>a) {
//		printf("李四\n");
//	}
//	else {
//		printf("张三\n");
//	}
//
//}



//int main() {
//
//	int a = -1;
//	printf("%u\n", a);
//
//	return 0;
//}




//int main() {
//
//	unsigned char k = -1;
//	printf("%d",k);
//
//	return 0;
//}




	
	/*char a = -1;
	10000000000000000000000000000001
	11111111111111111111111111111110
	11111111111111111111111111111111【截断】
	11111111【存的】
	11111111111111111111111111111111【%d整型提升】【以符号位为准】
	11111111111111111111111111111110
	10000000000000000000000000000001【输出】【-1】
	signed char b = -1;
	11111111【存的】
	11111111111111111111111111111111【%d整型提升】【以符号位为准】
	11111111111111111111111111111110
	10000000000000000000000000000001【输出】【-1】
	unsigned char c = -1;
	11111111【存的】【第一个不充当符号位】
	00000000000000000000000011111111【无符号位的整型提升补0】
	【首符号位是0说明是正数，整数的原反补相同】
	00000000000000000000000011111111【输出】【255】*/


	
//int main() {
//	char k = -128;
//	printf("%u\n", k);//以无符号整型输出，不代表char k的数据类型是无符号；不影响char k的整型提升
//
//	return 0;
//}

//10000000000000000000000010000000
//11111111111111111111111101111111
//11111111111111111111111110000000【截断】
//100000000【存的】
//11111111111111111111111110000000【整型提升】【这里的%u是以无符号格式输出，不是说char k是无符号类型】
//11111111111111111111111110000000【以无符号整型打印这串二进制，则认为这串二进制没有符号位，故 原=反=补】4294967168

//输出时%u把最高位特性变了，%u认为他没有符号位，不进行原反补的转化；
//如果%d则先把11111111111111111111111110000000转化位原码在打印；-128
	



//int main(){
//	char a = 128;
//	printf("%u\n", a);
//
//
//
//	char b = 127;//char取值-128~0~127;
//	b += 1;
//	printf("%d", b);
//	01111111//127
//	10000000//127+1
//	1111111111111111111111111000000//%d整型提升
//	1111111111111111111111110111111//取反
//	1000000000000000000000001000000//取原-128







//int judge() {
//	int a = 1;
//	char* pa = (char*)&a;
//	return *pa;//返回1小端，返回0大端
//}
//
//int main(){
//
//	int ret = judge();
//	if (ret == 1) {
//		printf("小端\n");
//	}
//	else {
//		printf("大端\n");
//	}






//【判断编译器是小端存储还是大端存储】

//int main(){
//	int a = 1;
//	/*char* pa = & (char)a;*/
//	char* pa = (char*)& a;
//	if (*pa == 1) {
//		printf("小端\n");
//	}
//	else {
//		printf("大端\n");
//	}



//int main(){
//	short a = 263;//0000000100000111
//	char* pa = (char*)&a;//00000111=7
//
//	if (*pa == 7) {
//				printf("小端\n");
//			}
//			else {
//				printf("大端\n");
//			}





//数据在内存中以二进制形式存储
//整数：正整数，负整数；
//正整数：原码=反码=补码；
//负整数：源码->反码->补码


//【取反+1】
//1000001原码
//1111110反码
//1111111补码
//重点
//1111111补码
//1000000反码
//1000001补码
//
//可见进行2次一模一样的取反+1；最后变回了原码；
//计算机中，原码补码的相互转化是一样的，不需要额外的硬件电路；





//int main(){
//	int a = -10;调试，窗口，监视，&a查看a以十六进制存储的具体内容；
//	int b = 10;//【32位二进制，4个二进制2=1个十六进制00000000000000000000000000001010==0000000a】



//【大端字节序小端字节序】【大于一个字节就要考虑存储的顺序  】

//int main(){
//	int a = 0x11223344;//一个数的十六进制表示【在内存中到底怎么存储呢？】
//	例：11 22 33 44【44是低位字节序】
//	顺：11 22 33 44【4个字节】 【大端字节序】【空间 低->高】
//	逆：44 33 22 11            【小端字节序】
//
//	【大端字节序】：把数据的低位字节序的内容存放在高地址处，高位字节序的内容存放在低位地址处
//	【小端字节序】：把数据的低位字节序的内容存放在低地址处，高位字节序的内容存在高地址处
//大部分还是小端








//int main(){
//	int i = 0;
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	printf("%p\n", &i);
//	printf("%p\n", &arr[9]);//release中i的地址在arr下面；Debug中i的地址在arr的上面；【2022都在下面了】





//char arr[10]={0};     scanf("%c%s") % c% s遇到空格会停止；用gets_s(arr,10);gets_s是接收包括空格，以回车建结束；10是允许输入10个字符（包括\0）



//数组名代表第一个元素的首地址，
//是一个具体的常量，假如让数组名自增或自减，
//在其过程中必涉及到赋值的运算，
//而一个地址常量是不能作为赋值运算符的左值的，
//所以，编译就会报错
//arr++; 报错
//arr + 1; 不报错








//int main() {
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sum = sizeof(arr) / sizeof(arr[0]);
//	int* pa = &arr;
//	int* pa2 = arr + sum-1;
//	while(pa < pa2) {
//		printf("%d\n", *pa);
//		pa++;
//		printf("%d\n", *pa2);
//		pa2--;
//	}
//	return 0;
//}





	
										//【三步翻转法】

//例如：Hell beijing.
//三步：
//1.整体翻转=>         .gnijieb lleH
//2.每个单词逆序=>     beijing. Hell
//

//int main(){
//	char arr[]={0};
//	//scanf("%s", arr);是不行的。%c%s遇到空格会停止；得用gets()
//	gets(arr);
//	printf("%s",arr);





//【翻转】


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
//	while (*str) {//不能在外面设置同名pa用在里面，局部变量优先；
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
















											//【倒置字符串】
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



//【最小公倍数最小只会等于两个数中最大的那个数】
	/*int main() {
		int a;
		int b;
		scanf("%d%d", &a, &b);
		int count = a > b ? a : b;
		do {
			count++;
		} while (!(count % a == 0 && count % b == 0));
		printf("%d\n", count);*/

																//【更加高效的算法】

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


																//【辗转相除法】

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





//点兵，5人一排，多出2人，9人一排多出3人，19人一排多出1人，求出一个数即可
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

//第一次：         7          6
//第二次：      6     5    5     4
//第三次：    5  4  4  3  4  3  3  2
//以此类推：共67次








																//【获取奇数与偶数位写法】
//int main(){
//	int a = 15;
//	int i;
//	for (i = 0; i <= 30; i += 2) {//获取奇数位
//		printf("%d  ", (a >> i) & 1);
//	}
//	printf("\n");
//	for (i = 1; i <= 31; i += 2) {
//		printf("%d  ", (a >> i) & 1);
//	}







//										【求两个二进制中不同位个数、】
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



										//【优化1】
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





										//【最后优化2】


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










//【如何判断一个数是不是二的n次方】
//只要该数的二进制位里只有一个1，该数就是2的n次方
//如果【n&(n=1)=0】,就是只减1，就按位与零了，那么这个数就是2的n次方；




														//【计算二进制1的个数的最优写法】
//int main(){
//	int i = -1;
//	int connt = 0;
//	while (i) {
//		i = i & (i - 1);//就不需要位移，既满足正数，也满足了负数
//		conut++;
//	}
//	printf("1的个数=%d\n", conut);

//【网课92，30分】





													//【正确的计算二进制的写法，包括负数时】计算奇数偶数位时可用
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


																//例如奇偶

//int main(){
//	int i = -1;
//	int conut = 0;
//	int k = 0;
//	for (k = 0; k < 32; k++) {
//		int p = (i >> k) & 1;
//		if (k % 2) {
//			printf("偶数位=%d\n", p);
//		}
//		else {
//			printf("奇数位=%d\n", p);
//		}
//	}
	









//int main(){
//	int i = -1;
//	int conut = 0;
//	while (i) {
//		if (i & 1) {
//			conut++;
//		}
//		i >> 1;//i是负1，补码都是1，右移动左边补1，i&1不会为零，会死循环
//	}
//	printf("%d\n", conut);







															//【利用位移打印正数二进制中奇数位和偶数位】

//int main(){
//	int a = 13;
//	int conut = 0;
//	while (a) {
//		int z = a & 1;
//		conut++;
//		if (conut % 2) {
//			printf("位%d奇数=%d\n", conut, z);
//		}
//		else {
//			printf("位%d偶数=%d\n", conut, z);
//		}
//		a = a >> 1;
//	}

															//【利用模二除二打印正数二进制中奇数位和偶数位】
//int main(){
//	int a = 14;//用这种方法要考虑负数；如果unsigned int 的话，就算输入负数1，答案就是正确的32【负数以补码存储】/但代码不够好
//	int conut = 0;
//	while (a) {
//		int i = a % 2;
//		a = a / 2;
//		conut++;
//		if (conut % 2) {
//			printf("位%d奇数=%d\n", conut, i);
//		}
//		else {
//			printf("位%d偶数=%d\n", conut, i);
//		}
//	}







														//【位移操作符计算正数二进制位数】
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



														//【利用模二除二法计算正数二进制位数】

//int main(){
//	int a = 15;
//	int conut = 0;
//	while (a) {
//		if (a % 2) {
//			conut++;
//		}
//		a = a / 2;//相当于把a的二进制向右移动一位;a/=2;
//	}
//	printf("%d\n", conut);











// 【源文件写法】
//size_t MyStrlen(const char* arr2){
//	const arr1 = arr2;
//	while (*arr2++) {
//	}
//	return (arr2 - arr1 - 1);//*arr2++为假后，后置还要加加，所以减去1；









// 【优化写法2】
//size_t MyStrlen(const char* arr) {//const我只要计算字符串长度，不需要改变字符串本身的内容   size_t无符号整型
//	assert(arr != NULL);
//	//assert(arr);这样也可以，arr如果为空指针，空指针为0；0为假
//	size_t conut = 0;
//	char* arr1 = arr;
//	while (*arr != '\0') {
//		arr++;
//	}
//	return conut;
//}







//#include<assert.h>
//int MyStrlen(const char* arr) {//我只要计算字符串长度，不需要改变字符串本身的内容
//	assert(arr != NULL);
//	//assert(arr);这样也可以，arr如果为空指针，空指针为0；0为假
//	char* arr1 = arr;
//	while (*arr != '\0') {
//		arr++;
//	}
//	return arr - arr1;
//}
//
////模拟求字符串长度优化
//int main(){
//	int store;
//	char arr[] = "hahahaha";
//	printf("%d\n",store = MyStrlen(arr));








//int Get(const char* arr) {

//	int conut = 0;
//	while (*arr) {//【/0的AS码值=0】
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



                                                    //【字符串拷贝会把\0拷贝过去吗】
//#include<string.h>
//int main(){
//	
//	char arr[] = "xxxxxxxxxxxx";
//	char arr1[] = "hell";
//	strcpy(arr, arr1);
//	printf("%s\n", arr);//结果纸只打印hell,因为字符串拷贝的时候会把\0也拷贝过去；







//模拟字符串拷贝  

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



	//模拟字符串拷贝  优化1

	/*void Get(char* arr1, char* arr2) {
		while (*arr2 != '\0') {

			*arr1++ = *arr2++;
			
		}
		*arr1 = *arr2;
	}*/



	//模拟字符串拷贝  优化2

	//void Get(char* arr1, char* arr2) {
	//	while (*arr1++ = *arr2++;) {//里面是个表达式，赋值完H时，As码值不是零，为真，当赋值万\0时，\0的As码值=0；为假，停止
	//	}
	//}





	//模拟字符串拷贝  优化3

//#include<assert.h>
	//void Get(char* arr1, char* arr2) {
	// assert(arr1!=NULL);//断言，如果错了，【会停止程序】，并且提示哪里错了
	// assert(arr2!=NULL);//如果断言1成立，则这个断言没机会运行
													//【 assert(arr1!=NULL&&arr2!=NULL);】
	//	while (*arr1++ = *arr2++;) {//里面是个表达式，赋值完H时，As码值不是零，为真，当赋值万\0时，\0的As码值=0；为假，停止【这时arr不会加加】
	//	
	// }
	//}


//模拟字符串拷贝  优化4

//如果拷贝目标和被拷贝目标写错位置了。则程序奔溃，因为arr1拷贝到arr2,arr2的空间不够【但依旧就拷贝，这就很坑爹】；
//void Get(char* arr1, char* arr2) {
	//	while (*arr2++ = *arr1++;) {//反了
	//	}
	//}
//如何让拷贝反了容易发现呢
//void Get(char* arr1,const char* arr2) {//给arr2加const把arr2变成不可修改的值，这样如果arr2试图被修改，就会报错；char const *arr2;
	//	while (*arr1++ = *arr2++;) {
	//	}
	//}











//模拟字符串拷贝  优化4【标准】

//但是还是有缺陷
//int main(){
//	const int a = 20;
//	int* pa = &a;
//	//const int* pa = &a;//【把pa这个窗户锁死】【但是指针变量本身可以被修改【可以换个窗户（换了也不能改）】，只不过是不能通过指针变量修改窗户里的内容】
//	*pa = 10;
//	printf("%d\n", a);
	//此时你会发现a的值被改变了！【就好像我把教室门关了，不让你进，你过了门我就报错，但是你翻窗进】
	//【1】const int *pa   把这个窗户锁死【除非你又找来个窗户】


//【标准结果】1，const  2,assert  3,char *;
//char* Get(char* arr1, const char* arr2) {//返回类型char *；其实就是返回目标的起始地址；方便我们很好的查看；
//	char* a = arr1;//存放目标起始地址；
//	assert(arr1 != NULL);
//	assert(arr1 != NULL);
//	while (*arr1++ = *arr2++;) {
//	}
//	return a; 返回目标空间的起始地址；//同样返回类型是char *
//}

//#include<string.h>
//int main(){
//	char arr1[] = "xxxxxxxxx";
//	char arr2[] = "Hahfah";
//	
//	printf("%s\n", arr1);
//	printf("%s\n", Get(arr1, arr2));//【链式访问】既然返回的是目标空间的起始地址，那我们就可以放在打印里面，这叫链式访问；
//【链式访问】这个函数的返回值作为这个函数的参数，这就叫链式访问；
















                                                    //大概率是死循环，i=12的时候越界访问了i，使得i=0；代码陷入死循环
//int main() {
//	int i;
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	for (i = 0; i <= 12; i++) {
//		arr[i] = 0;
//		printf("hahahahahah\n");
//	}


														// 【寻找错误的笔试题】
//void GetMemorty(char* p) {
//	p = (char*)malloc(100);
//}
//
//int main(){
//	char* str = NULL;
//	GetMemorty(str);
//	strcpy(str, "hello world");
//	printf(str);


//指针的初始化
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
//		i *= i;//i的值影响条件，应该重新设置一个变量；
//		printf("%d\n", i);
//	}






//【条件断点】
//void get() {
//	printf("haha\n");
//}
//
//int main() {
//
//	int a = 10;
//	for (int i = 1; i < a; i++) {//条件断点i==5
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
		







	



	


//【调试的基本步骤】
//1. 发现程序错误的存在
//2.以隔离，消除等方式对错误进行定位
//3.确定错误产生的原因
//4.提出纠正错误的解决方法
//5.对程序错误给予改正.重新测试
	
	


																	//【体传参】
//【形参是指针用->,形参是变量用.】

//struct b {
//	char m[20];
//	int i;
//	char d[20];
//};
//
//struct stu {
//	struct b s;//体
//	char name[20];
//	int age;
//	char id[20];
//};//在体变量后面
//
//
////体传参（传变量）
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
//	printf("%u\n", sizeof(+a));//有运算符号，说明要参与运算，故整型提升，变成4个字节；
//	printf("%u\n", sizeof(-a));//有运算符号，说明要参与运算，故整型提升，变成4个字节；
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


	/*	return 0;

		}*/







