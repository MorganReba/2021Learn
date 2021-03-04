#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//int g_val = 2021;

//全局变量
//全局变量是具有外部链接属性的
//其他源文件通过声明可以使用
//static修饰全局变量后
//把外部链接属性，改成了内部链接属性
//static 2.
//只能在自己所在的源文件内部使用
//出了源文件就无法链接到
//static int g_val = 2021;

//static 3.
//static修饰函数
//依然改变了函数的链接属性
//函数的外部链接属性变成了内部链接属性
//被修饰的函数只能在自己的源文件内部使用
//static int Add(int x, int y)
//{
//	return x + y;
//}


//work

//1.输入一个整数表示一个人的智商，如果大于等于140，则表明他是一个天才，输出“Genius”。
//示例1:输入:160;输出:Genius
//int main()
//{
//	int n = 0;
//	printf("请输入一个人的智商:\n");
//	scanf("%d", &n);
//	if (n >= 140)
//	{
//		printf("Genius\n");
//	}
//
//	return 0;
//}

//多组输入
//int main()
//{
//	int n = 0;
//	//scanf读取失败返回EOF
//	while (scanf("%d", &n) != EOF)
//	{
//		if (n >= 140)
//			printf("Genius\n");
//	}
//
//	return 0;
//}

//2.给定两个整数a和b(－10, 000 < a, b < 10, 000)，计算a除以b的整数商和余数。
//输入：15 2；输出：7 1
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//
//	printf("%d %d\n", a / b, a % b);
//
//	return 0;
//}

//3.写一个函数求两个整数的较大值
//输入：10 20; 输出：20
//int get_max(int x, int y)
//{
//	int ret = x > y ? x : y;
//	return ret;
//}
//
//int main()
//{
//	int num1 = 0;
//	int num2 = 0;
//	scanf("%d %d", &num1, &num2);
//
//	int max = get_max(num1, num2);
//	printf("%d\n", max);
//
//	return 0;
//}

//4.根据给出的三角形3条边a, b, c（0 < a, b, c < 100,000），计算三角形的周长(circumference)和面积(area)。
//已知三角形的三条边求面积：海伦公式：s=sqrt(p(p-a)(p-b)(p-c)),p=a+b+c
//输出保留两位小数
//#include <math.h>
//
//int main()
//{
//	float a, b, c;
//	scanf("%f %f %f", &a, &b, &c);
//	
//	float p = (a + b + c) / 2.0f;
//	float circumference = (a + b + c);
//	float area = sqrt(p*(p - a)*(p - b)*(p - c));
//	printf("circumference=%.2f area=%.2f\n", circumference, area);
//
//	return 0;
//}

//5.已经给出的三条边a，b，c能否构成三角形，如果能构成三角形，判断三角形的类型（等边三角形、等腰三角形或普通三角形）。
//输入描述:(0<a, b, c<1000)，作为三角形的三个边，用空格分隔。
//输出描述 :
//针对每组输入数据，输出占一行，
//如果能构成三角形，等边三角形则输出“Equilateral triangle!”，等腰三角形则输出“Isosceles triangle!”，其余的三角形则输出“Ordinary triangle!”，反之输出“Not a triangle!”。
//int main()
//{
//	int a, b, c;
//	/*while (scanf("%d %d %d", &a, &b, &c) != EOF)*/
//	//~表示输入取反，控制while循环,即没有输入的时候退出循环
//	while (~scanf("%d %d %d", &a, &b, &c))
//	{
//		//是三角形
//		if ((a + b) > c && (a + c) > b && (b + c) > a)
//		{
//			//等边三角形
//			if ((a == b) && (b == c))
//			{
//				printf("Equilateral triangle!\n");
//			}
//			//等腰三角形
//			else if ((a == b) && (a != c) || (a == c) && (a != b) || (b == c) && (b != a))
//			{
//				printf("Isosceles triangle!\n");
//			}
//			else
//			{
//				printf("Ordinary triangle!\n");
//			}
//		}
//		else
//		{
//			printf("Not a triangle!\n");
//		}
//	}
//
//	return 0;
//}

//6.任意输入一个正整数N，统计1~N之间奇数的个数和偶数的个数，并输出。
//一个整数除以2，商即是偶数个数
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//
//	//m表示偶数个数
//	int m = 0;
//	//if (n % 2 == 0)
//	//{
//	//	m = n / 2;
//	//}
//	//else
//	//{
//	//	m = n / 2;
//	//}
//	//printf("偶数个数=%d 奇数个数=%d\n", m, n - m);
//
//	//m表示奇数个数
//	if (n % 2 == 0)
//	{
//		m = n / 2;
//	}
//	else
//	{
//		m = (n / 2) + 1;
//	}
//	printf("奇数个数=%d 偶数个数=%d\n", m, n - m);
//
//	return 0;
//}