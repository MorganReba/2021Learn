#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//练习

//1.写一个函数可以判断一个数是不是素数

//is_prime()
//返回1-是素数
//返回0-不是素数

//#include <math.h>

//int is_prime(int i)
//{
//	//判断i是否为素数
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


//2.写一个函数判断一年是不是闰年
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
//		if (is_leap_year(year) == 1)//是闰年返回1，不是闰年返回0
//		{
//			printf("%d ", year);
//		}
//	}
//
//	return 0;
//}

//3.写一个函数，实现一个整形有序数组的二分查找
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
//	//二分查找
//	//找到了，返回下标
//	//找不到，返回-1
//	//arr作为数组，传参的时候，传递的是数组首元素的地址
//	int ret = binary_search(arr,k,sz);
//	if (ret == -1)
//	{
//		printf("找不到\n");
//	}
//	else
//	{
//		printf("找到了，下标是:%d\n", ret);
//	}
//
//	return 0;
//}

//4.写一个函数，每调用一次这个函数，就会将num的值增加1
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