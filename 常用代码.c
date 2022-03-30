   //typedef类型重定义     //struct结构体      //static静态局部变量    //unsigned无符号变量   //extern引入外部符号    {}代码块            
//register寄存器变量     //sqrt开根号       //#include<math.h>函数    //#define定义量     //strcpy（字符串拷贝）  //#include<string.h>字符串处理函数的头文件
//sizeof度量大小        //const定义常量      // switch多分支语句	 //getchar()接收键盘输入一个字符     //putchar输出一个字符串    \\ ||或者
//strlen计算字符串长度   //Sleep(1000)暂停1000毫秒    //include<windows.h>Sleep暂停函数库    //strcmp判断字符串是否相等
//#include<stdlib.h>引用库函数system      //system("cls")执行系统命令的一个函数    //cls清空屏幕   //#include<stdlib.h>引用system函数  
//continue结束本次循环     //default默认switch常用		//goto跳转      //NULL 就是0；可以浏览定义
 
 
 
 
 
 //<<移位操作符>>：把该属的二进制数左移或者右移：a<<3a左移3位或者k>>2右移2位【本身的值并没有改变，就好像是k=i+1;i的值并没有改变；















																//【累乘】
//for (i = 1; i <= 100; i++) {
//v *= i;
//v += i;
//}




																//【"abc"与{'a','b','c'}的区别】

//char p[] = { 'a', 'b', 'c' };
//char q[] = "abc";
//char p[] = { 'a','b','c' }; 它就不分配‘\O’吗？
//char p[] = ('a''b'c'与q[]="abc";的定义就只有‘\O’这一个区别吗？

//q可以当成是字符串，但p不是字符串作为字符串，q的长度是已知的，p的长度是未知的
//作为数组，q包含7个字符，p包含6个字符可以用sizeof得到两个数组的大小
//计算字符串长度不把'\0'计算在内
//所以q，p的长度一样.









																//【数组空间】
//int main() {
//	int array[] = { 1 ,2,3,4,5,6,7,8,9,10 };//array里面放9，就是所开辟9个空间，int类型每个空间4个字节【9个不够，要10个，40字节】
//	printf("%d\n%d\n", sizeof(array), sizeof(array[0]));//array[0]大小是4个字节【相除等于10】
//
//	int array2[] = { 1 };
//	printf("%d\n%d\n", sizeof(array2), sizeof(array2[0]));



//shutdown-s -t60其中-s是关机，-t60是执行时间，-a是取消关机






//strlen只能计算字符串长度；【库函数】
//sizeof计算变量，数组，类型大小；单位是字节；【操作符】






//if(strcmp(array,"12345678"==0))
//strcmp判断字符串相等否，相等则返回0;同时引用"#include<string或stdlib.h>"
//这个strcmp函数规定左边大于右边返回正数，左边等于右边返回0，左边小于右边返回负数









//0为假


//ch=getchar()【接收】键盘输入一个字符，放在ch里
//putchar(ch)【输出】即打印出ch



//char
//a
//表示
//定义了一个变量，名叫a，
//它是字符类型（占用内存的一个字节）
//char
//a[1]
//表示
//定义了一个数组，名叫a，
//它是一个包含一个字符类型数据的数组，这个数组只能存放1个字符类型的数据。
//两者在不接触指针做函数参数的程序的时候功能是一样的。






                                               //【break和continue】
//continue【终止本次循环中后面的代码】
//break是结束整个循环，continue是结束本次循环
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
//
//	}















//default，break只能用于while 、for 、foreach 之内 或 switch的case、default 语句之后。//每个switch语句只能出现一个default，default可以放在整个语句任意位置

//一个要求不同的【写法即做法】就是不同的算法，一个好的算法尤其重要

//只用if是可以的，但else却一定要和if相搭配，没有if就不会有else

 //【typedef类型重定义】
/*typedef unsigned int u_int;
				unsigned int a = -10;
				u_int a=-10*/


//【 function函数








				//int sum(int a)定义一个返回值是整型的函数sum，它接受一个整型参数变量a
				//注:else是怎么匹配if的？其实else是与离他最近的未匹配的if进行匹配的












				//int m(int x, int y)
				//{ 
				//
				//	int v = x + y;
				//
				//	return v;
				//
				//
				//
				//}
