#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void menu()
{
	printf("**************************\n");
	printf("******   1.play  *********\n");
	printf("******   0.exit  *********\n");
	printf("**************************\n");
}

//rand函数返回一个介于0到RAND_MAX之间的随机整数
//RAND_MAX 0x7fff
//0-32767
//在调用rand之前，请使用srand函数设置随机生成数的起点
//srand()括号中必须写一个变化的值
//时间戳：当前时间和计算机的起始时间之间的差值，单位是秒
//是一个数字可以转化成时间
//计算机的起始时间是：1970-01-01 08:00:00；时间戳是0

//srand-void srand( unsigned int seed );
//time-time_t time( time_t *timer );//time_t:整型 

void game()
{
	//1.生成随机数（1-100）
	//电脑上的时间是在发生变化的
	//time()函数返回的就是时间戳
	//srand((unsigned int)time(NULL));//时间相近的话生成的数是一样的，只需要生成一次就好

	//RAND_MAX 0x7fff
	//0-32767
	//%100
	//0-99+1
	//1-100

	int ret = rand() % 100 + 1;//用来生成随机数的
	//printf("%d\n", ret);

	//2.猜数字
	int guess = 0;
	while (1)
	{
		printf("请猜数字:>");
		scanf("%d", &guess);
		if (guess > ret)
		{
			printf("猜大了\n");
		}
		else if (guess < ret)
		{
			printf("猜小了\n");
		}
		else
		{
			printf("恭喜你，猜对了\n");
			break;
		}
	}
}

int main()
{
	int input = 0;

	//整个过程设置一次就行
	srand((unsigned int)time(NULL));

	do
	{
		menu();
		printf("请选择(1/0):>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("选择错误\n");
			break;
		}
	} while (input);

	return 0;
}