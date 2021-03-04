#define _CRT_SECURE_NO_WARNINGS 1
/*
内容：初识C语言
*/

//stdio-std 标准 i input o output（标准输入输出）
//.h-头文件
#include <stdio.h>
//
//int main()
//{
//	//printf-打印函数
//	//库函数的使用要引入头文件（#include <stdio.h>）
//	printf("hello world\n");
//	return 0;//传统：返回0是正确返回
//}

//用system就不用设置属性改为控制台，直接就可以运行出来
//比较麻烦
#include <stdlib.h>
//
//int main()
//{
//	printf("hello world\n");
//	system("pause");//system是一个执行系统命令的函数，需要引入头文件（#include <stdlib.h>）
//	return 0;
//}


//main-主函数
//代码是从main函数的第一行开始执行
//main函数是程序的入口-有且仅有一个

//main函数的写法

//以下两种写法一样
//int main(void)//void是明确表明main函数不需要参数
//{
//	return 0;
//}
//
//int main()
//{
//	return 0;
//}
//
//int main(int argc, char*argv[])//参数要用
//{
//	return 0;
//}


//比较旧的写法
//void main(void)
//{
//	printf("hehehe\n");
//}

//#pragma warning(disable:4996)
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	//要用scanf函数必须有（#define _CRT_SECURE_NO_WARNINGS 1），否则会报错
//	//1.在开头定义：可直接在VS-VC-vcprojectitems-newc++file.cpp-用Notepad++打开保存（优）
//	//2.在属性-C/C++-预处理器加上_CRT_SECURE_NO_WARNINGS
//	//3.#pragma warning(disable:4996)
//	printf("%d\n", a);
//	return 0;
//}

//int main()
//{
//	int a = 0;
//	scanf_s("%d\n", &a);//只能在VS中使用（局限性）
//	printf("%d", a);
//	return 0;
//}

//数据类型
//1 byte = 8 bit
//int main()
//{
//	//%d-打印整形
//	//sizeof-是C语言的一个操作符
//	//sizeof-计算的是对应类型的变量所占内存的大小
//	printf("%d\n", sizeof(char));
//	printf("%d\n", sizeof(short));
//	printf("%d\n", sizeof(int));
//	printf("%d\n", sizeof(long));
//	printf("%d\n", sizeof(long long));
//	printf("%d\n", sizeof(float));
//	printf("%d\n", sizeof(double));
//
//	return 0;
//}


//类型的使用
//int main()
//{
//	short age = 20;
//	float weight = 55.6;//直接写出浮点数默认是double类型
//	float weight = 55.6f;
//	char ch = 'a';
//
//	return 0;
//}


//变量的分类
//当局部变量和全局变量同名的时候，局部变量优先使用
//全局变量：放在大括号外部的
//int a = 100;
//int main()
//{
//	int a = 10;//局部变量：放在大括号内部的
//	printf("%d\n", a);
//
//	return 0;
//}


//变量的使用
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d%d", &a, &b);
//	int c = a + b;
//	printf("%d\n", c);
//
//	return 0;
//}


//局部变量的作用域：就是自己所在的局部范围
//int main()
//{
//	int a = 100;
//	{}-代码块
//	{
//		int b = 10;
//		printf("b=%d\n", b);
//		printf("a=%d\n", a);
//
//	}
//	printf("a=%d\n", a);
//
//	return 0;
//}

//全局变量的作用域：整个工程
//要想使一个文件中的变量在另一个文件中使用
//则要声明
//extern-声明外部符号
//extern int g_val;
//
//int main()
//{
//	printf("%d\n", g_val);
//	return 0;
//}



//局部变量的生命周期是：进入作用域生命周期开始，出作用域生命周期结束。
//全局变量的生命周期是：整个程序的生命周期。
//int main()
//{
//	{
//		//创建a
//		int a = 10;
//		printf("%d\n", a);
//		//销毁a
//	}
//
//	return 0;
//}


//常量（4）
//int main()
//{
//	//100;//1.字面常量
//
//	//2.const修饰的常变量
//	const int a = 10;//不允许改，具有常属性，但是还是变量
//	printf("a=%d\n", a);
//	a = 20;
//	printf("a=%d\n", a);
//
//	return 0;
//}
//3.#define 定义的标识符常量
//#define MAX 100
//
//int main()
//{
//	int a = MAX;
//	//MAX = 200;//常量，不能修改
//	printf("a=%d\n", a);
//	int arr[MAX] = { 0 };
//
//	return 0;
//}
//4.枚举常量:不能改
//枚举-可一一列举
//创建一个枚举类型
//enum-枚举关键字
//enum Sex
//{
//	MALE,
//	FEMALE,
//	SECRET
//};
//
//int main()
//{
//	enum Sex sex = FEMALE;
//	return 0;
//}


//字符串
//int main()
//{
//	char arr1[] = "abc";//字符串的末尾有'\0',是字符串的结束标志。
//	char arr2[] = { 'a', 'b', 'c', '\0' };
//
//	//%s-字符串
//	printf("%s\n", arr1); 
//	printf("%s\n", arr2);
//  
//  //%c-字符
//  printf("%c\n",'a');
//
//	return 0;
//}


//字符串长度
//'\0'不算作字符串内容（长度）
#include <string.h>

//int main()
//{
//	char arr1[] = "abc";
//	char arr2[] = { 'a', 'b', 'c' };
//	//strlen-string length-字符串长度
//	printf("%d\n", strlen(arr1));//strlen()库函数要引用头文件#include <string.h>
//	printf("%d\n", strlen(arr2));
//
//
//	return 0;
//}


//转义字符
//int main()
//{
//	// \t-tab-水平制表符
//	printf("c:\test\test.c\n");
//
//	return 0;
//}

//int main()
//{
//	// \' 用于表示字符常量'
//	printf("%c\n", '\'');//'
//
//	// \“ 用于表示一个字符串内部的双引号
//	printf("%s\n", "\"");//"
//
//	return 0;
//}

//int main()
//{
//	// \\ 用于表示一个反斜杠，防止它被解释为一个转义序列符。
//	printf("c:\\test\\test.c\n");//c:\test\test.c\n
//	return 0;
//}

//int main()
//{
//	// \ddd ddd表示1~3个八进制的数字:用8进制换算，在ASCII表中找对应字符
//	printf("%c\n", '\123');//83-S
//	return 0;
//}

//int main()
//{
//	// \xdd dd表示2个十六进制数字:用16进制换算，在ASCII表中找对应字符
//	printf("%c\n", '\x41');//65-A
//	return 0;
//}

//题目
//int main()
//{
//	printf("%d\n", strlen("abcdef"));//6
//	// \32-转义字符-26-——>
//	printf("%d\n", strlen("c:\test\328\test.c"));//14
//
//	return 0;
//}


//注释
//int main()
//{
//	/*C语言的注释风格
//	缺陷：不能嵌套注释
//	int a = 0;
//	int b = 0;
//	*/
//
//	//C++的注释风格
//
//	return 0;
//}


//选择语句
//int main()
//{
//	int input = 0;
//	printf("要好好学习吗（1/0）？\n");
//	scanf("%d", &input);
//	
//	if (input == 1)
//	{
//		printf("拿到好offer\n");
//	}
//	else
//	{
//		printf("失业\n");
//	}
//
//	return 0;
//}


//循环语句
//int main()
//{
//	int line = 0;
//	while (line < 20000)
//	{
//		printf("写代码：%d\n", line);
//		line++;
//	}
//	if (line == 20000)
//	{
//		printf("好offer\n");
//	}
//
//	return 0;
//}


//函数
//int Add(int x, int y)
//{
//	return x + y;
//}
//
//int main()
//{
//	int num1 = 0;
//	int num2 = 0;
//	scanf("%d %d", &num1, &num2);
//	int sum = Add(num1, num2);
//	printf("sum=%d\n", sum);
//
//	return 0;
//}


//数组
//int main()
//{
//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int i = 0;
//	while (i < 10)
//	{
//		printf("%d ", arr[i]);//arr[i]是在访问下标是i的元素
//		i++;
//	}
//
//	return 0;
//}


//操作符

//算术操作符
//int main()
//{
//	printf("%d\n", 7 / 2);//7/2 商3，
//	printf("%d\n", 7 % 2);//余1
//	//要想得到小数，/两端必须至少有一个为浮点型
//	printf("%f\n", 7.0 / 2);
//
//	return 0;
//}

//移位操作符
//int main()
//{
//	int a = 12;//整型-4byte-32bit
//	//把a的二进制位向右移动一位
//	int b = a >> 1;
//	//00000000000000000000000000001100-12
//   //00000000000000000000000000000110-6
//
//	//把a的二进制位向左移动一位
//	int c = a << 1;
//	//00000000000000000000000000011000-24
//	printf("%d\n", b);
//	printf("%d\n", c);
//
//	return 0;
//}

//位操作符
//int main()
//{
//	int a = 5;//0101
//	int b = 3;//0011
//
//	//&-按（2进制）位与：有0则为0，其余为1
//	int c = a&b;
//	
//	//|-按（2进制）位或：有1则为1，其余为0
//	int d = a | b;
//
//	//^-按（2进制）位异或：相同为0，其余为1
//	int m = a^b;
//
//	printf("%d\n", c);//0001-1
//	printf("%d\n", d);//0111-7
//	printf("%d\n", m);//0110-6
//
//
//
//	return 0;
//}

//单目操作符
//int main()
//{
//	//2 + 3;-双目操作符
//	//0表示假，非0表示真
//	int a = !3;//!-逻辑反操作
//	printf("%d\n", a);
//
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	int b = a++;//后置++，先使用，后++
//	printf("%d\n", a);//11
//	printf("%d\n", b);//10
//
//	int n = 10;
//	int m = ++n;//前置++，先++，后使用
//	printf("%d\n", n);//11
//	printf("%d\n", m);//11
//
//	return 0;
//}

//条件操作符/三目操作符
//int main()
//{
//	int a = 3;
//	int b = 0;
//
//	//if (a > 5)
//	//{
//	//	b = 10;
//	//}
//	//else
//	//{
//	//	b = 20;
//	//}
//
//	b = ((a > 5) ? 10 : 20);
//
//	printf("%d\n", b);
//	return 0;
//}

//逗号表达式：从左向右依次计算，但结果取决于最后一个
//int main()
//{
//	int a = (2, 3, 4, 5, 6);
//	printf("%d\n", a);//6
//
//	return 0;
//}


//下标引用操作符：[]
//int main()
//{
//	int arr[10] = { 0 };
//	arr[4] = 5;//[]就是下标引用操作符
//
//	return 0;
//}


//关键字
//int main()
//{
//	//自动创建、销毁
//	auto int a = 10;//局部变量
//
//	return 0;
//}

//typedef:类型重命名
//typedef unsigned int unit;
//
//int main()
//{
//	unsigned int num1 = 0;
//	unit num = 1;
//
//	return 0;
//}

//static
//1.修饰局部变量
//2.修饰全局变量
//3.修饰函数

//1.
//void test()
//{
//	int a = 1;
//	a++;
//	printf("%d", a);//10个2
//}
//
//int main()
//{
//	int i = 0;
//	while (i < 10)
//	{
//		test();
//		i++;
//	}
//	return 0;
//}

//static改变了局部变量的生命周期（到程序结束）-作用域没有发生变化
//void test()
//{
//	static int a = 1;//static修饰局部变量
//	a++;
//	printf("%d ", a);//2 3 4 5 6 7 8 9 10 11
//}
//
//int main()
//{
//	int i = 0;
//	while (i < 10)
//	{
//		test();
//		i++;
//	}
//	return 0;
//}

//2.add.c
//extern:声明外部符号
//extern int g_val;
//
//int main()
//{
//	printf("%d\n", g_val);
//
//	return 0;
//}

//3.add.c
//extern int Add(int x, int y);
//int main()
//{
//	int a = 10;
//	int b = 20;
//	
//	int sum = Add(a, b);
//	printf("%d\n", sum);
//
//	return 0;
//}

//register
//int main()
//{
//	//register是建议把自己创建的变量存储到寄存器中
//	//如果变量未来被大量使用，在其前加register可以提高效率
//	register int a = 10;
//
//	//寄存器存储的变量不能对其取地址
//	//取地址是存在内存里的
//	//&a;//erro
//
//	return 0;
//}


//define定义常量和宏

//define定义常量
//#define STR "hello bit"
//
//int main()
//{
//	printf("%s\n", STR);
//	return 0;
//}

//define定义宏
//#define ADD(X,Y) (X+Y)
//#define MAX(X,Y) ((X)>(Y)?(X):(Y))
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int ret = ADD(a, b);
//	printf("%d\n", ret);//30
//
//	printf("%d\n", MAX(a, b));//20
//
//	return 0;
//}


//指针
//内存
//int main()
//{
//	int a = 10;
//	////%p 按照地址的格式打印
//	//printf("%p\n", &a);//&取地址操作符
//
//	//int说明pa指向的是一个整型
//	//*说明pa是指针变量
//	int* pa = &a;//pa是专门用来存放地址的-把pa就叫做指针变量
//	*pa = 20;//*解引用操作操作符
//
//	printf("%d\n", a);
//
//	return 0;
//}

//指针的大小
//int main()
//{
//	printf("%d\n", sizeof(char*));//4
//	printf("%d\n", sizeof(short*));//4
//	printf("%d\n", sizeof(int*));//4
//	printf("%d\n", sizeof(float*));//4
//	printf("%d\n", sizeof(double*));//4
//
//	return 0;
//}


//结构体
//struct Stu
//{
//	//描述学生的属性
//	char name[20];//名字-字符串-字符数组
//	short age;
//	char sex[8];
//};

//int main()
//{
//	//结构体的创建和初始化
//	struct Stu s1 = { "张三", 20, "男" };
//	printf("%s-%d-%s\n", s1.name, s1.age, s1.sex);//结构体成员访问操作符：结构体变量.结构体成员
//	return 0;
//}

//int main()
//{
//	struct Stu s1 = { "张三", 20, "男" };
//	struct Stu* pa = &s1;
//	printf("%s %d %s\n", (*pa).name, (*pa).age, (*pa).sex);
//	//pa->name:通过pa找到所指向的对象的成员name（更优）
//	printf("%s %d %s\n", pa->name, pa->age, pa->sex);
//
//	return 0;
//}

//0-数字0
//'0'-ASCII值是48
//'\0'-值是0
//'\0' 0 本质是相同的
//NULL-空指针

//EOF-end of file 文件结束标志