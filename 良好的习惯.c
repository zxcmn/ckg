//【良好的习惯】           ctrl+D加一行一样的           




//命名：【MyStrlen  或者   my_strlen】     不能My_strlen

//任何量尽量去初始化它int i=0;


//不能确定运算路径以及顺序的代码是垃圾代码，以后要避免写出这总问题代码；（我们写的代码如果不能通过操作符属性确定运算的路径，那这个表达就是有问题的表达式；）	


//char 或 int i[10] = { 0 }; 最好赋值0；否则都是随机数；打印要规定数组下标printf("%d\n", i[0]);

//一个字节是8个比特位，int 4个字节是32个比特位；


																		//【%s和%c】
//1 char a; 
	//2 char b[20];
	//3 scanf（"%c"， & a)；//只能输入一个字餐
	//4 scanf（"%s"，b)；//可以输入一串不超20字符的字符串

//int main(){
//	
//	char arr[] = "123456";
//	printf("%s\n", arr);





//char arr[] = "123456";
//printf("%s\n", arr[1])这里用% s是不行的, % s是打印字符串（arr就是地址），arr[1]是具体的（一个）字符数，应该用% c;






//int count = 10;
//
//char N[count];
//int N[count];
//数组里应用常量表达式





//四年一润，百年不润，四百年再一润










//scanf("%d", a);其中%d不建议加\n

//在scanf中\n不表示接受一个回车符, 而是表示忽略所有的空白字符, 包括回车, 空格, tab
//所以你得输入两次数值


//在switch语句中都放一条default子句是个好习惯，甚至可以加个break

















//【if()里面常量放第一位，变量放在第二位】
/*int main()
{
	int num = 4;
	if (5 = num)           // 我们把常量反在第一，这样如果少写了一个=，就变成了把num赋值给5，程序就会报错
	{
		printf("hehe\n2















																	//【if和else内容用代码块括起来】

/*int main()
{
	int a = 5;
	if (a == 5)
	{
		printf("hello,world\n"),
			a++;
	}
	return 0;
}*/