#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//����һ���������������з���ֵ
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
//	char arr1[] = "bit";//����Դ'b' 'i' 't' '\0'
//	char arr2[20] = "xxxxxxxx";//Ŀ�ĵ�
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

//�Զ��庯��
//1.дһ�����������ҳ����������е����ֵ
//int get_max(int x, int y)
//{
//	return (x > y ? x : y);
//}
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int max = get_max(a, b);//�ҳ����������Ľϴ�ֵ
//	printf("%d\n", max);
//
//	return 0;
//}

//2.дһ���������Խ����������α���������
//��ֵ����
//void Swap(int x, int y)
//{
//	int tmp = 0;
//	tmp = x;
//	x = y;
//	y = tmp;
//}//ֻ������x,y;��û�н���a,b
////x,y��a,b�Ƕ����Ŀռ�
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	printf("����ǰ��a=%d b=%d\n", a, b);
//	Swap(a, b);
//	printf("������a=%d b=%d\n", a, b);
//
//	return 0;
//}

//�������ε�ʱ��
//ʵ�δ��ݸ��βΣ��β���ʵ�ε�һ����ʱ����
//���βε��޸Ĳ���Ӱ��ʵ��

//��ַ����
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
//	printf("����ǰ��a=%d b=%d\n", a, b);
//	Swap(&a, &b);
//	printf("������a=%d b=%d\n", a, b);
//
//	return 0;
//}


//������Ƕ�׵���
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

//��������Ƕ�׶���

//��������ʽ����
//
//#include <string.h>
//
//int main()
//{
//	/*
//	int len = strlen("abcdef");
//	printf("%d\n", len);
//	*/
//	//��ʽ����
//	printf("%d\n", strlen("abcdef"));
//
//	return 0;
//}

//int main()
//{
//	//printf����ֵ�Ǵ�ӡ�ַ��ĸ���
//	printf("%d", printf("%d", printf("%d", 43)));//4321
//
//	return 0;
//}


//�����������Ͷ���
//��������ʹ��

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


//�����ݹ�
//�����Լ������Լ����߼�

//1.Stack overflow-ջ���
//ÿһ�κ������ö�Ҫ��ջ���Ͽ���һ��ռ�
//int main()
//{
//	printf("hehe\n");
//	main();
//	return 0;
//}

//2.����һ������ֵ(�޷���)����˳���ӡ����ÿһλ
//���磺 ���룺1234����� 1 2 3 4.
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
//	print(num);//print�����Ϳ��԰�num��ÿһλ��ӡ����Ļ��
//	//print(1234)
//	//print(123) 4
//	//print(12) 3 4
//	//print(1) 2 3 4
//	//1 2 3 4
//
//	return 0;
//}

//3.��д��������������ʱ���������ַ����ĳ���

//ѭ��
//��������ʱ����count
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

//�ݹ�
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
//	//����������Ԫ�صĵ�ַ - char*
//	int len = my_strlen(arr);
//	printf("%d\n", len);
//
//	return 0;
//}

//4.��n�Ľ׳ˣ������������
//���յ��ƹ�ʽд
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

//5.���n��쳲��������������������
//1 1 2 3 5 8 13 21 34 55...
//���ɣ���һ��������ǰ������֮��
//Fib(n)
//n<=2 1
//n>2 Fib(n-1)+Fib(n-2)

//�ݹ�
//Ч�ʵ�
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
//	printf("count=%d\n", count);//�ظ�����̫��
//
//	return 0;
//}

//ѭ��
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