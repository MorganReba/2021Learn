#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//练习

//1.计算n的阶乘
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int i = 0;
//	int ret = 1;
//	for (i = 1; i <= n; i++)
//	{
//		ret *= i;
//	}
//	printf("%d\n", ret);
//	//n不要太大
//
//	return 0;
//}


//2. 计算 1!+2!+3!+……+10!
//int main()
//{
//	int n = 0;
//	int ret = 1;
//	int sum = 0;
//	for (n = 1; n <= 10; n++)
//	{
//		ret *= n;
//		sum += ret;
//	}
//	printf("%d\n", sum);//4037913
//
//	return 0;
//}

//效率低
//int main()
//{
//	int n = 0;
//	int i = 0;
//	int ret = 1;
//	int sum = 0;
//	//1!+2!+3!
//	//9
//	for (n = 1; n <= 3; n++)
//	{
//		ret = 1;//每次求阶乘都是从1开始乘
//		for (i = 1; i <= n; i++)
//		{
//			ret *= i;
//		}
//		sum += ret;
//	}
//	printf("%d\n", sum);
//
//	return 0;
//}


//3.在一个有序数组中查找具体的某个数字n
//一个一个遍历
//效率低
//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	//在有序数组中查找元素7
//	int k = 7;
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);//(4*10)/4=10
//	for (i = 0; i < sz; i++)
//	{
//		if (arr[i] == k)
//		{
//			printf("找到了，下标是：%d\n", i);
//			break;//找到了就直接跳出循环
//		}
//	}
//	if (i == sz)
//	{
//		printf("找不到\n");
//	}
//
//	return 0;
//}

//前提：有序数组
//折半查找-二分查找
//n个元素-查找次数：log以2为底n
//步骤：1.找出数组的中间元素
//2.中间元素和k比较，确定新的查找范围
//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int k = 0;
//	scanf("%d", &k);
//
//	int i = 0;
//	//sizeof(arr)-计算的是数组的总大小，单位是字节-40
//	//sizeof(arr[0])-计算的是数组第一个元素的大小-4
//	int sz = sizeof(arr) / sizeof(arr[0]);
//
//	int left = 0;
//	int right = sz - 1;
//
//	while (left <= right)
//	{
//		//int mid = (left + right) / 2;//有缺陷
//		int mid = left + (right - left) / 2;
//
//		if (arr[mid] > k)
//		{
//			right = mid - 1;
//		}
//		else if (arr[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else
//		{
//			printf("找到了，下标是：%d\n", mid);
//			break;
//		}
//	}
//	if (left > right)
//	{
//		printf("找不到\n");
//	}
//
//	return 0;
//}

//int mid = (left + right) / 2;
//有缺陷
//数值过大超过整形的范围就会有部分丢失

//#include <limits.h>
//
//int main()
//{
//	//int a = INT_MAX;//2147483647
//	int a = 2147483646;
//	int b = 2147483646;
//	int c = (a + b) / 2;
//	printf("%d\n", c);//-2
//
//	return 0;
//}


//4.编写代码，演示多个字符从两端移动，向中间汇聚

//要打印：welcome to bit!!!!!!
//####################
//w##################!
//we################!!
//wel##############!!!
//...
//welcome to bit!!!!!!

//#include <string.h>
//#include <windows.h>
//#include <stdlib.h>
//
//int main()
//{
//	char arr1[] = "welcome to bit!!!!!!";
//	char arr2[] = "####################";
//
//	//char buf[] = "bit";
//	//[b i t \0]
//	// 0 1 2 3
//	//计算数组长度：
//	//法一：sizeof(buf)/sizeof(buf[0])-2
//	//法二：strlen(buf)-1
//
//	int left = 0;
//	int right = strlen(arr1) - 1;
//
//	while (left <= right)
//	{
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		printf("%s\n", arr2);
//		Sleep(1000);//ms-慢慢打印
//		system("cls");//system函数是执行系统命令的-清空屏幕的
//		left++;
//		right--;
//	}
//	printf("%s\n", arr2);//system清空后再打印一次最后结果
//
//	return 0;
//}


//5.编写代码实现，模拟用户登录情景，并且只能登录三次

//#include <string.h>
//
//int main()
//{
//	int i = 0;
//	//用来存放密码
//	//假设正确密码是字符串："123456"
//	char password[20] = { 0 };
//
//	for (i = 0; i < 3; i++)
//	{
//		printf("请输入密码:>");
//		scanf("%s", password);
//		//两个字符串判断是否相等不能用==,应该使用strcmp函数
//		//两个字符串相等时，strcmp函数返回值为0
//		if (strcmp(password, "123456") == 0)
//		{
//			printf("密码正确，登陆成功\n");
//			break;
//		}
//		else
//		{
//			printf("密码错误\n");
//		}
//	}
//	if (i == 3)
//	{
//		printf("三次密码都输入错误，退出程序\n");
//	}
//
//	return 0;
//}

//work

//1.写代码将三个整数数按从大到小输出。
//例如：
//输入：2 3 1
//输出：3 2 1
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	scanf("%d%d%d", &a, &b, &c);
//
//	if (a < b)
//	{
//		int tmp = a;
//		a = b;
//		b = tmp;
//	}
//	if (a < c)
//	{
//		int tmp = a;
//		a = c;
//		c = tmp;
//	}
//	if (b < c)
//	{
//		int tmp = b;
//		b = c;
//		c = tmp;
//	}
//
//	//从大到小输出
//	printf("%d %d %d\n", a, b, c);
//
//	return 0;
//}


//2.写一个代码打印1-100之间所有3的倍数的数字
//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		if (i % 3 == 0)
//			printf("%d ", i);
//	}
//
//	return 0;
//}


//3.给定两个数，求这两个数的最大公约数
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d%d", &a, &b);
//
//	//找出两个数中小的那一个
//	int i = (a > b) ? b : a;
//	for (; i >= 1; i--)
//	{
//		if ((a%i == 0) && (b%i == 0))
//		{
//			printf("%d\n", i);
//			break;
//		}
//	}
//
//	return 0;
//}

//效率更高
//辗转相除法
//假设
//24%18=6
//a  b  c
//18%6=0
//a  b c
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d%d", &a, &b);
//
//	int c = 0;
//	while (c = a%b)
//	{
//		a = b;
//		b = c;
//	}
//	printf("%d\n", b);
//
//	//最小公倍数：a*b/最大公约数
//	return 0;
//}


//4.打印1000年到2000年之间的闰年
//判断是否是闰年
//1.被4整除，不能被100整除是闰年
//2.被400整除也是闰年
//int main()
//{
//	int year = 0;
//
//	for (year = 1000; year <= 2000; year++)
//	{
//		//if ((year % 4 == 0) && (year % 100 != 0))
//		//{
//		//	printf("%d ", year);
//		//}
//		//if (year % 400 == 0)
//		//{
//		//	printf("%d ", year);
//		//}
//
//		if (((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0))
//		{
//			printf("%d ", year);
//		}
//	}
//
//	return 0;
//}


//5.写一个代码：打印100~200之间的素数
//素数只能被1和它本身整除
//判断i是否为素数，拿2->i-1之间的数字，试除i
//int main()
//{
//	int i = 0;
//
//	for (i = 100; i <= 200; i++)
//	{
//		int flag = 1;//假设1是素数
//		int j = 0;
//		for (j = 2; j < i; j++)//j最大就是i-1
//		{
//			if (i%j == 0)
//			{
//				flag = 0;//标识不是素数
//				break;
//			}
//		}
//		if (flag == 1)
//		{
//			printf("%d ", i);
//		}
//	}
//
//	return 0;
//}

//优化：当i不是素数时,i=a*b
//a和b中一定有一个数字是<=根号下i

//#include <math.h>
//
//int main()
//{
//	int i = 0;
//	int count = 0;//计算一共有多少个素数
//
//	for (i = 100; i <= 200; i+=2)//排除偶数
//	{
//		int flag = 1;//假设1是素数
//		int j = 0;
//		for (j = 2; j <= sqrt(i); j++)
//		{
//			if (i%j == 0)
//			{
//				flag = 0;//标识不是素数
//				break;
//			}
//		}
//		if (flag == 1)
//		{
//			count++;
//			printf("%d ", i);
//		}
//	}
//	printf("\ncount = %d\n", count);
//
//	return 0;
//}

//素数求解的n种境界

//6.编写程序数一下 1到 100 的所有整数中出现多少个数字9
//int main()
//{
//	int i = 0;
//	int count = 0;
//	
//	for (i = 1; i <= 100; i++)
//	{
//		if (i / 10 == 9)//十位为9
//		{
//			count++;
//		}
//		if (i % 10 == 9)//个位为9
//		{
//			count++;
//		}
//	}
//	printf("%d\n", count);
//
//	return 0;
//}


//7.计算1/1-1/2+1/3-1/4+1/5 …… + 1/99 - 1/100 的值，打印出结果
//全加
//int main()
//{
//	int i = 0;
//	double sum = 0;
//
//	for (i = 1; i <= 100; i++)
//	{
//		sum += (1.0 / i);
//	}
//	printf("%lf\n", sum);
//
//	return 0;
//}

//加减交错
//int main()
//{
//	int i = 0;
//	double sum = 0;
//	int flag = 1;
//
//	for (i = 1; i <= 100; i++)
//	{
//		sum += flag*(1.0 / i);
//		flag = -flag;
//	}
//	printf("%lf\n", sum);
//
//	return 0;
//}


//8.求 10 个整数中最大值
//int main()
//{
//	int arr[10] = { 0 };
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	//找出最大值
//	//int max = 0;//不能赋值0，否则当输入的数为负数时，结果错误
//	int max = arr[0];//假设最大为数组的第一个元素
//	for (i = 1; i < 10; i++)
//	{
//		if (arr[i]>max)
//		{
//			max = arr[i];
//		}
//	}
//	printf("%d\n", max);
//
//	return 0;
//}


//9.在屏幕上输出9*9乘法口诀表
//1*1=1
//2*1=2 2*2=4
//3*1=3 3*2=6 3*3=9
//......
//有几行就有几列
//int main()
//{
//	int i = 0;//行
//	for (i = 1; i <= 9; i++)
//	{
//		int j = 0;//列
//		for (j = 1; j <= i; j++)
//		{
//			printf("%d*%d=%-2d ", i, j, i*j);
//		}
//		printf("\n");
//	}
//
//	return 0;
//}