#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//int g_val = 2021;

//ȫ�ֱ���
//ȫ�ֱ����Ǿ����ⲿ�������Ե�
//����Դ�ļ�ͨ����������ʹ��
//static����ȫ�ֱ�����
//���ⲿ�������ԣ��ĳ����ڲ���������
//static 2.
//ֻ�����Լ����ڵ�Դ�ļ��ڲ�ʹ��
//����Դ�ļ����޷����ӵ�
//static int g_val = 2021;

//static 3.
//static���κ���
//��Ȼ�ı��˺�������������
//�������ⲿ�������Ա�����ڲ���������
//�����εĺ���ֻ�����Լ���Դ�ļ��ڲ�ʹ��
//static int Add(int x, int y)
//{
//	return x + y;
//}


//work

//1.����һ��������ʾһ���˵����̣�������ڵ���140�����������һ����ţ������Genius����
//ʾ��1:����:160;���:Genius
//int main()
//{
//	int n = 0;
//	printf("������һ���˵�����:\n");
//	scanf("%d", &n);
//	if (n >= 140)
//	{
//		printf("Genius\n");
//	}
//
//	return 0;
//}

//��������
//int main()
//{
//	int n = 0;
//	//scanf��ȡʧ�ܷ���EOF
//	while (scanf("%d", &n) != EOF)
//	{
//		if (n >= 140)
//			printf("Genius\n");
//	}
//
//	return 0;
//}

//2.������������a��b(��10, 000 < a, b < 10, 000)������a����b�������̺�������
//���룺15 2�������7 1
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

//3.дһ�����������������Ľϴ�ֵ
//���룺10 20; �����20
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

//4.���ݸ�����������3����a, b, c��0 < a, b, c < 100,000�������������ε��ܳ�(circumference)�����(area)��
//��֪�����ε�����������������׹�ʽ��s=sqrt(p(p-a)(p-b)(p-c)),p=a+b+c
//���������λС��
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

//5.�Ѿ�������������a��b��c�ܷ񹹳������Σ�����ܹ��������Σ��ж������ε����ͣ��ȱ������Ρ����������λ���ͨ�����Σ���
//��������:(0<a, b, c<1000)����Ϊ�����ε������ߣ��ÿո�ָ���
//������� :
//���ÿ���������ݣ����ռһ�У�
//����ܹ��������Σ��ȱ��������������Equilateral triangle!���������������������Isosceles triangle!����������������������Ordinary triangle!������֮�����Not a triangle!����
//int main()
//{
//	int a, b, c;
//	/*while (scanf("%d %d %d", &a, &b, &c) != EOF)*/
//	//~��ʾ����ȡ��������whileѭ��,��û�������ʱ���˳�ѭ��
//	while (~scanf("%d %d %d", &a, &b, &c))
//	{
//		//��������
//		if ((a + b) > c && (a + c) > b && (b + c) > a)
//		{
//			//�ȱ�������
//			if ((a == b) && (b == c))
//			{
//				printf("Equilateral triangle!\n");
//			}
//			//����������
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

//6.��������һ��������N��ͳ��1~N֮�������ĸ�����ż���ĸ������������
//һ����������2���̼���ż������
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//
//	//m��ʾż������
//	int m = 0;
//	//if (n % 2 == 0)
//	//{
//	//	m = n / 2;
//	//}
//	//else
//	//{
//	//	m = n / 2;
//	//}
//	//printf("ż������=%d ��������=%d\n", m, n - m);
//
//	//m��ʾ��������
//	if (n % 2 == 0)
//	{
//		m = n / 2;
//	}
//	else
//	{
//		m = (n / 2) + 1;
//	}
//	printf("��������=%d ż������=%d\n", m, n - m);
//
//	return 0;
//}