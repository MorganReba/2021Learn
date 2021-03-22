#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//函数一般会有输入参数并有返回值
//int Add(int x, int y)
//{
//	return (x + y);
//}
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int ret = Add(a, b);
//	printf("%d\n", ret);
//
//	return 0;
//}

//strcpy
//char *strcpy( char *strDestination, const char *strSource );

//#include <string.h>
//
//int main()
//{
//	char arr1[] = "bit";//数据源'b' 'i' 't' '\0'
//	char arr2[20] = "xxxxxxxx";//目的地
//
//	strcpy(arr2, arr1);
//	printf("%s\n", arr2);
//
//	return 0;
//}

//memset
//void * memset ( void * ptr, int value, size_t num )
//

//#include <string.h>
//
//int main()
//{
//	char arr[] = "hello bit";
//	memset(arr, 'x', 5);
//	printf("%s\n", arr);//xxxxx bit
//
//	return 0;
//}

//自定义函数
//1.写一个函数可以找出两个整数中的最大值
//int get_max(int x, int y)
//{
//	return (x > y ? x : y);
//}
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int max = get_max(a, b);//找出两个整数的较大值
//	printf("%d\n", max);
//
//	return 0;
//}

//2.写一个函数可以交换两个整形变量的内容
//传值调用
//void Swap(int x, int y)
//{
//	int tmp = 0;
//	tmp = x;
//	x = y;
//	y = tmp;
//}//只交换了x,y;并没有交换a,b
////x,y和a,b是独立的空间
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	printf("交换前：a=%d b=%d\n", a, b);
//	Swap(a, b);
//	printf("交换后：a=%d b=%d\n", a, b);
//
//	return 0;
//}

//函数传参的时候
//实参传递给形参，形参是实参的一份临时拷贝
//对形参的修改不会影响实参

//传址调用
//void Swap(int* px, int* py)
//{
//	int tmp = *px;
//	*px = *py;
//	*py = tmp;
//}
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	printf("交换前：a=%d b=%d\n", a, b);
//	Swap(&a, &b);
//	printf("交换后：a=%d b=%d\n", a, b);
//
//	return 0;
//}


//函数的嵌套调用
//void newline()
//{
//	printf("hehe\n");
//}
//
//void threeline()
//{
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		newline();
//	}
//}
//
//int main()
//{
//	threeline();
//	return 0;
//}

//函数不能嵌套定义

//函数的链式访问
//
//#include <string.h>
//
//int main()
//{
//	/*
//	int len = strlen("abcdef");
//	printf("%d\n", len);
//	*/
//	//链式访问
//	printf("%d\n", strlen("abcdef"));
//
//	return 0;
//}

//int main()
//{
//	//printf返回值是打印字符的个数
//	printf("%d", printf("%d", printf("%d", 43)));//4321
//
//	return 0;
//}


//函数的声明和定义
//先声明后使用

//#include "add.h"
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int sum = Add(a, b);
//	printf("sum = %d\n", sum);
//
//	return 0;
//}


//函数递归
//函数自己调用自己的逻辑

//1.Stack overflow-栈溢出
//每一次函数调用都要在栈区上开辟一块空间
//int main()
//{
//	printf("hehe\n");
//	main();
//	return 0;
//}

//2.接受一个整型值(无符号)，照顺序打印它的每一位
//例如： 输入：1234，输出 1 2 3 4.
//void print(int n)
//{
//	if (n > 9)
//	{
//		print(n / 10);
//	}
//	printf("%d ", n % 10);
//}
//
//int main()
//{
//	int num = 0;
//	scanf("%d", &num);//1234
//	//1 2 3 4
//	//1234%10 = 4
//	//1234/10 = 123  123%10 = 3
//	//123/10 = 12    12%10 = 2
//	//12/10 = 1      1%10 = 1
//	print(num);//print函数就可以把num的每一位打印在屏幕上
//	//print(1234)
//	//print(123) 4
//	//print(12) 3 4
//	//print(1) 2 3 4
//	//1 2 3 4
//
//	return 0;
//}

//3.编写函数不允许创建临时变量，求字符串的长度

//循环
//创建了临时变量count
//int my_strlen(char* str)
//{
//	int count = 0;
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}

//递归
//int my_strlen(char* str)
//{
//	if (*str != '\0')
//		return 1 + my_strlen(str + 1);
//	else
//		return 0;
//}
////my_strlen("abcdef")
////1+my_strlen("bcdef")
////1+1+my_strlen("cdef")
////1+1+1+my_strlen("def")
////1+1+1+1+my_strlen("ef")
////1+1+1+1+1+my_strlen("f")
////1+1+1+1+1+1+my_strlen("")
////1+1+1+1+1+1+0
////6
//
//int main()
//{
//	char arr[] = "abcdef";
//
//	//abcdef\0
//	//数组名是首元素的地址 - char*
//	int len = my_strlen(arr);
//	printf("%d\n", len);
//
//	return 0;
//}

//4.求n的阶乘（不考虑溢出）
//按照递推公式写
//int Fac(int n)
//{
//	if (n <= 1)
//		return 1;
//	else
//		return n*Fac(n - 1);
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = Fac(n);
//	printf("%d\n", ret);
//
//	return 0;
//}

//5.求第n个斐波那契数（不考虑溢出）
//1 1 2 3 5 8 13 21 34 55...
//规律：后一个数等于前两个数之和
//Fib(n)
//n<=2 1
//n>2 Fib(n-1)+Fib(n-2)

//递归
//效率低
//int count = 0;
//int Fib(int n)
//{
//	if (n == 3)
//		count++;
//	if (n <= 2)
//		return 1;
//	else
//		return Fib(n - 1) + Fib(n - 2); 
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = Fib(n);
//	printf("%d\n", ret);
//	printf("count=%d\n", count);//重复计算太多
//
//	return 0;
//}

//循环
int Fib(int n)
{
	int a = 1;
	int b = 1;
	int c = 1;
	while (n>2)
	{
		c = a + b;
		a = b;
		b = c;
		n--;
	}
	return c;
}

int main()
{
	int n = 0;
	scanf("%d", &n);
	int ret = Fib(n);
	printf("%d\n", ret);

	return 0;
}