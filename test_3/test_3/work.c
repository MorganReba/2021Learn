#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//��ϰ

//1.дһ�����������ж�һ�����ǲ�������

//is_prime()
//����1-������
//����0-��������

//#include <math.h>

//int is_prime(int i)
//{
//	//�ж�i�Ƿ�Ϊ����
//	int j = 0;
//	for (j = 2; j <= sqrt(i); j++)
//	{
//		if (i%j == 0)
//			return 0;
//	}
//
//	return 1;
//}
//
//int main()
//{
//	int i = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		if (is_prime(i) == 1)
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}


//2.дһ�������ж�һ���ǲ�������
//int is_leap_year(int x)
//{
//	//if (((x % 4 == 0) && (x % 100 != 0)) || (x % 400 == 0))
//	//{
//	//	return 1;
//	//}
//	//else
//	//{
//	//	return 0;
//	//}
//
//	return (((x % 4 == 0) && (x % 100 != 0)) || (x % 400 == 0));
//}
//
//int main()
//{
//	int year = 0;
//	for (year = 1000; year <= 2000; year++)
//	{
//		if (is_leap_year(year) == 1)//�����귵��1���������귵��0
//		{
//			printf("%d ", year);
//		}
//	}
//
//	return 0;
//}

//3.дһ��������ʵ��һ��������������Ķ��ֲ���
//int binary_search(int arr[], int k,int sz)
//{
//	int left = 0;
//	int right = sz - 1;
//
//	while (left <= right)
//	{
//		int mid = left + (right - left) / 2;
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
//			return mid;
//		}
//	}
//	return -1;
//}
//
//int main()
//{
//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int k = 7;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//���ֲ���
//	//�ҵ��ˣ������±�
//	//�Ҳ���������-1
//	//arr��Ϊ���飬���ε�ʱ�򣬴��ݵ���������Ԫ�صĵ�ַ
//	int ret = binary_search(arr,k,sz);
//	if (ret == -1)
//	{
//		printf("�Ҳ���\n");
//	}
//	else
//	{
//		printf("�ҵ��ˣ��±���:%d\n", ret);
//	}
//
//	return 0;
//}

//4.дһ��������ÿ����һ������������ͻὫnum��ֵ����1
//void Add(int *p)
//{
//	(*p)++;
//}
//
//int main()
//{
//	int num = 0;
//	Add(&num);
//	printf("%d\n", num);//1
//	Add(&num);
//	printf("%d\n", num);//2
//
//	return 0;
//}