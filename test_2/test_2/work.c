#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//��ϰ

//1.����n�Ľ׳�
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
//	//n��Ҫ̫��
//
//	return 0;
//}


//2. ���� 1!+2!+3!+����+10!
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

//Ч�ʵ�
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
//		ret = 1;//ÿ����׳˶��Ǵ�1��ʼ��
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


//3.��һ�����������в��Ҿ����ĳ������n
//һ��һ������
//Ч�ʵ�
//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	//�����������в���Ԫ��7
//	int k = 7;
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);//(4*10)/4=10
//	for (i = 0; i < sz; i++)
//	{
//		if (arr[i] == k)
//		{
//			printf("�ҵ��ˣ��±��ǣ�%d\n", i);
//			break;//�ҵ��˾�ֱ������ѭ��
//		}
//	}
//	if (i == sz)
//	{
//		printf("�Ҳ���\n");
//	}
//
//	return 0;
//}

//ǰ�᣺��������
//�۰����-���ֲ���
//n��Ԫ��-���Ҵ�����log��2Ϊ��n
//���裺1.�ҳ�������м�Ԫ��
//2.�м�Ԫ�غ�k�Ƚϣ�ȷ���µĲ��ҷ�Χ
//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int k = 0;
//	scanf("%d", &k);
//
//	int i = 0;
//	//sizeof(arr)-�������������ܴ�С����λ���ֽ�-40
//	//sizeof(arr[0])-������������һ��Ԫ�صĴ�С-4
//	int sz = sizeof(arr) / sizeof(arr[0]);
//
//	int left = 0;
//	int right = sz - 1;
//
//	while (left <= right)
//	{
//		//int mid = (left + right) / 2;//��ȱ��
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
//			printf("�ҵ��ˣ��±��ǣ�%d\n", mid);
//			break;
//		}
//	}
//	if (left > right)
//	{
//		printf("�Ҳ���\n");
//	}
//
//	return 0;
//}

//int mid = (left + right) / 2;
//��ȱ��
//��ֵ���󳬹����εķ�Χ�ͻ��в��ֶ�ʧ

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


//4.��д���룬��ʾ����ַ��������ƶ������м���

//Ҫ��ӡ��welcome to bit!!!!!!
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
//	//�������鳤�ȣ�
//	//��һ��sizeof(buf)/sizeof(buf[0])-2
//	//������strlen(buf)-1
//
//	int left = 0;
//	int right = strlen(arr1) - 1;
//
//	while (left <= right)
//	{
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		printf("%s\n", arr2);
//		Sleep(1000);//ms-������ӡ
//		system("cls");//system������ִ��ϵͳ�����-�����Ļ��
//		left++;
//		right--;
//	}
//	printf("%s\n", arr2);//system��պ��ٴ�ӡһ�������
//
//	return 0;
//}


//5.��д����ʵ�֣�ģ���û���¼�龰������ֻ�ܵ�¼����

//#include <string.h>
//
//int main()
//{
//	int i = 0;
//	//�����������
//	//������ȷ�������ַ�����"123456"
//	char password[20] = { 0 };
//
//	for (i = 0; i < 3; i++)
//	{
//		printf("����������:>");
//		scanf("%s", password);
//		//�����ַ����ж��Ƿ���Ȳ�����==,Ӧ��ʹ��strcmp����
//		//�����ַ������ʱ��strcmp��������ֵΪ0
//		if (strcmp(password, "123456") == 0)
//		{
//			printf("������ȷ����½�ɹ�\n");
//			break;
//		}
//		else
//		{
//			printf("�������\n");
//		}
//	}
//	if (i == 3)
//	{
//		printf("�������붼��������˳�����\n");
//	}
//
//	return 0;
//}

//work

//1.д���뽫�������������Ӵ�С�����
//���磺
//���룺2 3 1
//�����3 2 1
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
//	//�Ӵ�С���
//	printf("%d %d %d\n", a, b, c);
//
//	return 0;
//}


//2.дһ�������ӡ1-100֮������3�ı���������
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


//3.���������������������������Լ��
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d%d", &a, &b);
//
//	//�ҳ���������С����һ��
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

//Ч�ʸ���
//շת�����
//����
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
//	//��С��������a*b/���Լ��
//	return 0;
//}


//4.��ӡ1000�굽2000��֮�������
//�ж��Ƿ�������
//1.��4���������ܱ�100����������
//2.��400����Ҳ������
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


//5.дһ�����룺��ӡ100~200֮�������
//����ֻ�ܱ�1������������
//�ж�i�Ƿ�Ϊ��������2->i-1֮������֣��Գ�i
//int main()
//{
//	int i = 0;
//
//	for (i = 100; i <= 200; i++)
//	{
//		int flag = 1;//����1������
//		int j = 0;
//		for (j = 2; j < i; j++)//j������i-1
//		{
//			if (i%j == 0)
//			{
//				flag = 0;//��ʶ��������
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

//�Ż�����i��������ʱ,i=a*b
//a��b��һ����һ��������<=������i

//#include <math.h>
//
//int main()
//{
//	int i = 0;
//	int count = 0;//����һ���ж��ٸ�����
//
//	for (i = 100; i <= 200; i+=2)//�ų�ż��
//	{
//		int flag = 1;//����1������
//		int j = 0;
//		for (j = 2; j <= sqrt(i); j++)
//		{
//			if (i%j == 0)
//			{
//				flag = 0;//��ʶ��������
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

//��������n�־���

//6.��д������һ�� 1�� 100 �����������г��ֶ��ٸ�����9
//int main()
//{
//	int i = 0;
//	int count = 0;
//	
//	for (i = 1; i <= 100; i++)
//	{
//		if (i / 10 == 9)//ʮλΪ9
//		{
//			count++;
//		}
//		if (i % 10 == 9)//��λΪ9
//		{
//			count++;
//		}
//	}
//	printf("%d\n", count);
//
//	return 0;
//}


//7.����1/1-1/2+1/3-1/4+1/5 ���� + 1/99 - 1/100 ��ֵ����ӡ�����
//ȫ��
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

//�Ӽ�����
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


//8.�� 10 �����������ֵ
//int main()
//{
//	int arr[10] = { 0 };
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	//�ҳ����ֵ
//	//int max = 0;//���ܸ�ֵ0�������������Ϊ����ʱ���������
//	int max = arr[0];//�������Ϊ����ĵ�һ��Ԫ��
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


//9.����Ļ�����9*9�˷��ھ���
//1*1=1
//2*1=2 2*2=4
//3*1=3 3*2=6 3*3=9
//......
//�м��о��м���
//int main()
//{
//	int i = 0;//��
//	for (i = 1; i <= 9; i++)
//	{
//		int j = 0;//��
//		for (j = 1; j <= i; j++)
//		{
//			printf("%d*%d=%-2d ", i, j, i*j);
//		}
//		printf("\n");
//	}
//
//	return 0;
//}