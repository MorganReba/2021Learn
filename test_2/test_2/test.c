#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//if语句

//if实现多分支
//int main()
//{
//	int age = 0;
//	if (age < 18)
//		printf("未成年\n");
//	else if (age >= 18 && age < 30)
//		printf("青年\n");
//	else if (age >= 30 && age < 50)
//		printf("中年\n");
//	else if (age >= 50 && age <= 100)
//		printf("老年\n");
//	else
//		printf("老寿星\n");
//	return 0;
//}

//悬空else
//判断下面代码输出什么？
//int main()
//{
//	int a = 0;
//	int b = 2;
//	if (a == 1)
//	     if (b == 2)
//		      printf("hehe\n");
//	else
//		printf("haha\n");
//
//	return 0;
//}//什么也没输出

//原因：else和离它最近的未匹配的if匹配
//实际上
//int main()
//{
//	int a = 0;
//	int b = 2;
//	if (a == 1)
//	     if (b == 2)
//		      printf("hehe\n");
//	     else
//		      printf("haha\n");
//
//	return 0;
//}
//养成良好的代码风格

//int main()
//{
//	int num = 1;
//	//把5放在等号左边，避免把比较写成赋值
//	//避免写成：if(num = 5)
//	if (5 == num)
//		printf("hehe\n");
//
//	return 0;
//}

//练习：
//1.判断一个数是否为奇数
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//
//	if (a % 2 == 1)
//	{
//		printf("Yes\n");
//	}
//	else
//	{
//		printf("No\n");
//	}
//
//	return 0;
//}

//2.输出1-100之间的奇数
//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		if (i % 2 == 1)
//		{
//			printf("%d ", i);
//		}
//	}
//
//	return 0;
//}

//更简洁
//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 100; i+=2)
//	{
//		printf("%d ", i);
//	}
//
//	return 0;
//}


//switch语句
//int main()
//{
//	int day = 0;
//	scanf("%d", &day);
//	switch (day)
//	{
//	case 1:
//		printf("星期一\n");
//		break;
//	case 2:
//		printf("星期二\n");
//		break;
//	case 3:
//		printf("星期三\n");
//		break;
//	case 4:
//		printf("星期四\n");
//		break;
//	case 5:
//		printf("星期五\n");
//		break;
//	case 6:
//		printf("星期六\n");
//		break;
//	case 7:
//		printf("星期日\n");
//		break;
//	}
//
//	return 0;
//}

//break的用法
//default
//根据需求：
//1. 输入1-5输出的是“weekday”;
//2. 输入6 - 7输出“weekend”
//int main()
//{
//	int day = 0;
//	scanf("%d", &day);
//	switch (day)
//	{
//	case 1:
//	case 2:
//	case 3:
//	case 4:
//	case 5:
//		printf("weekday\n");
//		break;
//	case 6:
//	case 7:
//		printf("weekend\n");
//		break;
//	default:
//		printf("选择错误\n");
//		break;
//	}
//
//	return 0;
//}

//练习：输出什么？
//int main()
//{
//	int n = 1;
//	int m = 2;
//	switch (n)
//	{
//	case 1:
//		m++;//m=3,n=1
//	case 2:
//		n++;//m=3,n=2
//	case 3:
//		switch (n)//n=2
//		{//switch允许嵌套使用
//		case 1:
//			n++;
//		case 2:
//			m++;
//			n++;
//			break;//m=4,n=3
//		}
//	case 4:
//		m++;
//		break;//m=5,n=3
//	default:
//		break;
//	}
//	printf("m = %d, n = %d\n", m, n);//5,3
//	return 0;
//}


//循环语句

//while
//在屏幕上打印1-10
//int main()
//{
//	int i = 1;
//	while (i <= 10)
//	{
//		printf("%d ", i);
//		i++;
//	}
//
//	return 0;
//}

//break
//int main()
//{
//	int i = 1;
//	while (i <= 10)
//	{
//		if (i == 5)
//			break;//永久终止循环
//		printf("%d ", i);//1 2 3 4
//		i++;
//	}
//
//	return 0;
//}

//continue：跳过本次循环，continue后边的代码，直接到循环的判断部分，进行下一次循环的入口判断
//int main()
//{
//	int i = 1;
//	while (i <= 10)
//	{
//		if (i == 5)
//			continue;
//		printf("%d ", i);//1 2 3 4死循环
//		i++;
//	}
//
//	return 0;
//}

//int main()
//{
//	int ch = 0;
//	//getchar-从标准输入（键盘）读取一个字符
//	ch = getchar();
//	//打印一个字符到标准输出（屏幕）
//	putchar(ch);
//
//	return 0;
//}

//int main()
//{
//	int ch = 0;
//	//读取失败的时候，getchar返回EOF
//	//EOF-end of file -1
//	while ((ch = getchar()) != EOF)
//	{
//		putchar(ch);
//	}
//
//	return 0;
//}

//缓冲区：（假设输入123456）：123456\n
//scanf读取：123456
//getchar读取：\n
//导致直接输出：确认失败
//int main()
//{
//	char password[10] = { 0 };
//	printf("请输入密码:>");
//	scanf("%s", password);
//	printf("请确认(Y/N):>");
//	int ch = getchar();
//	if (ch == 'Y')
//	{
//		printf("确认成功\n");
//	}
//	else
//	{
//		printf("确认失败\n");
//	}
//
//	return 0;
//}

//修改
//问题：
//如果输入：123456 abcdef
//缓冲区：123456 abcdef\n
//scanf读取：123456
//第一个getchar读取：空格
//第二个getchar读取：a
//int main()
//{
//	char password[10] = { 0 };
//	printf("请输入密码:>");
//	scanf("%s", password);
//	//清理缓冲区
//	getchar();
//	printf("请确认(Y/N):>");
//	int ch = getchar();
//	if (ch == 'Y')
//	{
//		printf("确认成功\n");
//	}
//	else
//	{
//		printf("确认失败\n");
//	}
//
//	return 0;
//}

//修改
//int main()
//{
//	char password[10] = { 0 };
//	printf("请输入密码:>");
//	scanf("%s", password);//数组名本来就是地址，不用取地址
//	//清理缓冲区
//	int ch = 0;
//	while ((ch = getchar()) != '\n')//遇到\n就停下
//	{
//		;
//	}
//	printf("请确认(Y/N):>");
//	int ch = getchar();
//	if (ch == 'Y')
//	{
//		printf("确认成功\n");
//	}
//	else
//	{
//		printf("确认失败\n");
//	}
//
//	return 0;
//}

//只输出0-9
//int main()
//{
//	int ch = 0;
//	while ((ch = getchar()) != EOF)
//	{
//		if (ch < '0' || ch > '9')
//			continue;
//		putchar(ch);
//	}
//
//	return 0;
//}


//for
//for循环的优势
//while循环如果这三部分写的太分散容易构成错误
//int main()
//{
//	int i = 0;//初始化-1
//
//	while (i < 100)//判断部分-2
//	{
//		i += 2;//调整-3
//	}
//
//	return 0;
//}

//int main()
//{
//	int i = 0;
//
//	//for循环把 初始化；判断；调整 都写在一个括号里，更容易把握代码
//	for (i = 1; i <= 10; i++)
//	{
//		printf("%d ", i);
//	}
//
//	return 0;
//}

//break用法同while中
//int main()
//{
//	int i = 0;
//
//	for (i = 1; i <= 10; i++)
//	{
//		if (i == 5)
//			break;
//
//		printf("%d ", i);//1 2 3 4
//	}
//
//	return 0;
//}

//continue
//int main()
//{
//	int i = 0;
//
//	for (i = 1; i <= 10; i++)
//	{
//		if (i == 5)
//			continue;
//
//		printf("%d ", i);//1 2 3 4 6 7 8 9 10
//	}
//
//	return 0;
//}

//不可在 for 循环体内修改循环变量，防止 for 循环失去控制。
//#include <windows.h>
//
//int main()
//{
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", i);
//		Sleep(1000);//单位：ms
//		i = 5;
//	}
//
//	return 0;
//}

// 建议for语句的循环控制变量的取值采用“前闭后开区间”写法
//int main()
//{
//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int i = 0;
//	//[0,10)
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//
//	return 0;
//}

//for的变种
//1.
//int main()
//{
//	//for循环的三个部分都可以省略
//	//判断部分如果省略了-表示恒为真
//
//	for (;;)
//	{
//		printf("hehe\n");//死循环
//	}
//
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < 10; i++)
//	{
//		for (j = 0; j < 10; j++)
//		{
//			printf("hehe\n");
//		}
//	}
//	//打印100个
//
//	return 0;
//}
//
////不要随便省略
//int main()
//{
//	int i = 0;
//	int j = 0;
//	for (; i < 10; i++)
//	{
//		for (; j < 10; j++)
//		{
//			printf("hehe\n");
//		}
//	}
//	//打印10个
//	//只是i=0的时候打印了10个hehe
//
//	return 0;
//}

//题目：请问要循环多少次？
//答案：0
//int main()
//{
//	int i = 0;
//	int k = 0;
//	for (i = 0, k = 0; k = 0; i++, k++)//判断部分 k=0 是赋值
//		k++;
//
//	return 0;
//}


//do while

//打印1-10
//int main()
//{
//	int i = 1;
//	do
//	{
//		printf("%d ", i);
//		i++;
//	} while (i <= 10);
//
//	return 0;
//}

//break:永久终止循环
//int main()
//{
//	int i = 1;
//	do
//	{
//		if (i == 5)
//			break;
//
//		printf("%d ", i);
//		i++;
//	} while (i <= 10);
//
//	return 0;
//}//1 2 3 4

//continue:跳过后面的代码，直接到判断部分
//int main()
//{
//	int i = 1;
//	do
//	{
//		if (i == 5)
//			continue;
//
//		printf("%d ", i);
//		i++;
//	} while (i <= 10);
//
//	return 0;
//}//1 2 3 4死循环


//goto语句

//跳转可能会使代码逻辑变混乱
//不能跨函数跳转
//int main()
//{
//flag:
//	printf("hehe\n");
//	printf("hehe\n");
//	printf("hehe\n");
//	printf("hehe\n");
//	goto flag;
//
//	return 0;
//}

//写一个关机程序
//1分钟内关机
//1分钟内输入：我是仙女，取消关机

//#include <string.h>
//#include <stdlib.h>

//int main()
//{
//	char input[20] = "";
//
//	//shutdown 
//	//-s:设置关机
//	//-t:倒计时关机 60s
//	//-a:取消关机
//
//	system("shutdown -s -t 60");
//
//again:
//	printf("请注意，你的电脑在1分钟内关机，如果输入：我是仙女，就取消关机\n");
//	scanf("%s", input);
//	if (strcmp(input, "我是仙女") == 0)
//	{
//		system("shutdown -a");
//	}
//	else
//	{
//		goto again;
//	}
//
//	return 0;
//}

//不使用goto语句
//int main()
//{
//	char input[20] = "";
//
//	system("shutdown -s -t 60");
//	while (1)
//	{
//		printf("请注意，你的电脑在1分钟内关机，如果输入：我是仙女，就取消关机\n");
//		scanf("%s", input);
//		if (strcmp(input, "我是仙女") == 0)
//		{
//			system("shutdown -a");
//			break;
//		}
//	}
//
//	return 0;
//}