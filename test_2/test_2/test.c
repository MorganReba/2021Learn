#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//if���

//ifʵ�ֶ��֧
//int main()
//{
//	int age = 0;
//	if (age < 18)
//		printf("δ����\n");
//	else if (age >= 18 && age < 30)
//		printf("����\n");
//	else if (age >= 30 && age < 50)
//		printf("����\n");
//	else if (age >= 50 && age <= 100)
//		printf("����\n");
//	else
//		printf("������\n");
//	return 0;
//}

//����else
//�ж�����������ʲô��
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
//}//ʲôҲû���

//ԭ��else�����������δƥ���ifƥ��
//ʵ����
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
//�������õĴ�����

//int main()
//{
//	int num = 1;
//	//��5���ڵȺ���ߣ�����ѱȽ�д�ɸ�ֵ
//	//����д�ɣ�if(num = 5)
//	if (5 == num)
//		printf("hehe\n");
//
//	return 0;
//}

//��ϰ��
//1.�ж�һ�����Ƿ�Ϊ����
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

//2.���1-100֮�������
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

//�����
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


//switch���
//int main()
//{
//	int day = 0;
//	scanf("%d", &day);
//	switch (day)
//	{
//	case 1:
//		printf("����һ\n");
//		break;
//	case 2:
//		printf("���ڶ�\n");
//		break;
//	case 3:
//		printf("������\n");
//		break;
//	case 4:
//		printf("������\n");
//		break;
//	case 5:
//		printf("������\n");
//		break;
//	case 6:
//		printf("������\n");
//		break;
//	case 7:
//		printf("������\n");
//		break;
//	}
//
//	return 0;
//}

//break���÷�
//default
//��������
//1. ����1-5������ǡ�weekday��;
//2. ����6 - 7�����weekend��
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
//		printf("ѡ�����\n");
//		break;
//	}
//
//	return 0;
//}

//��ϰ�����ʲô��
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
//		{//switch����Ƕ��ʹ��
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


//ѭ�����

//while
//����Ļ�ϴ�ӡ1-10
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
//			break;//������ֹѭ��
//		printf("%d ", i);//1 2 3 4
//		i++;
//	}
//
//	return 0;
//}

//continue����������ѭ����continue��ߵĴ��룬ֱ�ӵ�ѭ�����жϲ��֣�������һ��ѭ��������ж�
//int main()
//{
//	int i = 1;
//	while (i <= 10)
//	{
//		if (i == 5)
//			continue;
//		printf("%d ", i);//1 2 3 4��ѭ��
//		i++;
//	}
//
//	return 0;
//}

//int main()
//{
//	int ch = 0;
//	//getchar-�ӱ�׼���루���̣���ȡһ���ַ�
//	ch = getchar();
//	//��ӡһ���ַ�����׼�������Ļ��
//	putchar(ch);
//
//	return 0;
//}

//int main()
//{
//	int ch = 0;
//	//��ȡʧ�ܵ�ʱ��getchar����EOF
//	//EOF-end of file -1
//	while ((ch = getchar()) != EOF)
//	{
//		putchar(ch);
//	}
//
//	return 0;
//}

//������������������123456����123456\n
//scanf��ȡ��123456
//getchar��ȡ��\n
//����ֱ�������ȷ��ʧ��
//int main()
//{
//	char password[10] = { 0 };
//	printf("����������:>");
//	scanf("%s", password);
//	printf("��ȷ��(Y/N):>");
//	int ch = getchar();
//	if (ch == 'Y')
//	{
//		printf("ȷ�ϳɹ�\n");
//	}
//	else
//	{
//		printf("ȷ��ʧ��\n");
//	}
//
//	return 0;
//}

//�޸�
//���⣺
//������룺123456 abcdef
//��������123456 abcdef\n
//scanf��ȡ��123456
//��һ��getchar��ȡ���ո�
//�ڶ���getchar��ȡ��a
//int main()
//{
//	char password[10] = { 0 };
//	printf("����������:>");
//	scanf("%s", password);
//	//��������
//	getchar();
//	printf("��ȷ��(Y/N):>");
//	int ch = getchar();
//	if (ch == 'Y')
//	{
//		printf("ȷ�ϳɹ�\n");
//	}
//	else
//	{
//		printf("ȷ��ʧ��\n");
//	}
//
//	return 0;
//}

//�޸�
//int main()
//{
//	char password[10] = { 0 };
//	printf("����������:>");
//	scanf("%s", password);//�������������ǵ�ַ������ȡ��ַ
//	//��������
//	int ch = 0;
//	while ((ch = getchar()) != '\n')//����\n��ͣ��
//	{
//		;
//	}
//	printf("��ȷ��(Y/N):>");
//	int ch = getchar();
//	if (ch == 'Y')
//	{
//		printf("ȷ�ϳɹ�\n");
//	}
//	else
//	{
//		printf("ȷ��ʧ��\n");
//	}
//
//	return 0;
//}

//ֻ���0-9
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
//forѭ��������
//whileѭ�������������д��̫��ɢ���׹��ɴ���
//int main()
//{
//	int i = 0;//��ʼ��-1
//
//	while (i < 100)//�жϲ���-2
//	{
//		i += 2;//����-3
//	}
//
//	return 0;
//}

//int main()
//{
//	int i = 0;
//
//	//forѭ���� ��ʼ�����жϣ����� ��д��һ������������װ��մ���
//	for (i = 1; i <= 10; i++)
//	{
//		printf("%d ", i);
//	}
//
//	return 0;
//}

//break�÷�ͬwhile��
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

//������ for ѭ�������޸�ѭ����������ֹ for ѭ��ʧȥ���ơ�
//#include <windows.h>
//
//int main()
//{
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", i);
//		Sleep(1000);//��λ��ms
//		i = 5;
//	}
//
//	return 0;
//}

// ����for����ѭ�����Ʊ�����ȡֵ���á�ǰ�պ����䡱д��
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

//for�ı���
//1.
//int main()
//{
//	//forѭ�����������ֶ�����ʡ��
//	//�жϲ������ʡ����-��ʾ��Ϊ��
//
//	for (;;)
//	{
//		printf("hehe\n");//��ѭ��
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
//	//��ӡ100��
//
//	return 0;
//}
//
////��Ҫ���ʡ��
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
//	//��ӡ10��
//	//ֻ��i=0��ʱ���ӡ��10��hehe
//
//	return 0;
//}

//��Ŀ������Ҫѭ�����ٴΣ�
//�𰸣�0
//int main()
//{
//	int i = 0;
//	int k = 0;
//	for (i = 0, k = 0; k = 0; i++, k++)//�жϲ��� k=0 �Ǹ�ֵ
//		k++;
//
//	return 0;
//}


//do while

//��ӡ1-10
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

//break:������ֹѭ��
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

//continue:��������Ĵ��룬ֱ�ӵ��жϲ���
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
//}//1 2 3 4��ѭ��


//goto���

//��ת���ܻ�ʹ�����߼������
//���ܿ纯����ת
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

//дһ���ػ�����
//1�����ڹػ�
//1���������룺������Ů��ȡ���ػ�

//#include <string.h>
//#include <stdlib.h>

//int main()
//{
//	char input[20] = "";
//
//	//shutdown 
//	//-s:���ùػ�
//	//-t:����ʱ�ػ� 60s
//	//-a:ȡ���ػ�
//
//	system("shutdown -s -t 60");
//
//again:
//	printf("��ע�⣬��ĵ�����1�����ڹػ���������룺������Ů����ȡ���ػ�\n");
//	scanf("%s", input);
//	if (strcmp(input, "������Ů") == 0)
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

//��ʹ��goto���
//int main()
//{
//	char input[20] = "";
//
//	system("shutdown -s -t 60");
//	while (1)
//	{
//		printf("��ע�⣬��ĵ�����1�����ڹػ���������룺������Ů����ȡ���ػ�\n");
//		scanf("%s", input);
//		if (strcmp(input, "������Ů") == 0)
//		{
//			system("shutdown -a");
//			break;
//		}
//	}
//
//	return 0;
//}