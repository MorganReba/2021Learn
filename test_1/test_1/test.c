#define _CRT_SECURE_NO_WARNINGS 1
/*
���ݣ���ʶC����
*/

//stdio-std ��׼ i input o output����׼���������
//.h-ͷ�ļ�
#include <stdio.h>
//
//int main()
//{
//	//printf-��ӡ����
//	//�⺯����ʹ��Ҫ����ͷ�ļ���#include <stdio.h>��
//	printf("hello world\n");
//	return 0;//��ͳ������0����ȷ����
//}

//��system�Ͳ����������Ը�Ϊ����̨��ֱ�ӾͿ������г���
//�Ƚ��鷳
#include <stdlib.h>
//
//int main()
//{
//	printf("hello world\n");
//	system("pause");//system��һ��ִ��ϵͳ����ĺ�������Ҫ����ͷ�ļ���#include <stdlib.h>��
//	return 0;
//}


//main-������
//�����Ǵ�main�����ĵ�һ�п�ʼִ��
//main�����ǳ�������-���ҽ���һ��

//main������д��

//��������д��һ��
//int main(void)//void����ȷ����main��������Ҫ����
//{
//	return 0;
//}
//
//int main()
//{
//	return 0;
//}
//
//int main(int argc, char*argv[])//����Ҫ��
//{
//	return 0;
//}


//�ȽϾɵ�д��
//void main(void)
//{
//	printf("hehehe\n");
//}

//#pragma warning(disable:4996)
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	//Ҫ��scanf���������У�#define _CRT_SECURE_NO_WARNINGS 1��������ᱨ��
//	//1.�ڿ�ͷ���壺��ֱ����VS-VC-vcprojectitems-newc++file.cpp-��Notepad++�򿪱��棨�ţ�
//	//2.������-C/C++-Ԥ����������_CRT_SECURE_NO_WARNINGS
//	//3.#pragma warning(disable:4996)
//	printf("%d\n", a);
//	return 0;
//}

//int main()
//{
//	int a = 0;
//	scanf_s("%d\n", &a);//ֻ����VS��ʹ�ã������ԣ�
//	printf("%d", a);
//	return 0;
//}

//��������
//1 byte = 8 bit
//int main()
//{
//	//%d-��ӡ����
//	//sizeof-��C���Ե�һ��������
//	//sizeof-������Ƕ�Ӧ���͵ı�����ռ�ڴ�Ĵ�С
//	printf("%d\n", sizeof(char));
//	printf("%d\n", sizeof(short));
//	printf("%d\n", sizeof(int));
//	printf("%d\n", sizeof(long));
//	printf("%d\n", sizeof(long long));
//	printf("%d\n", sizeof(float));
//	printf("%d\n", sizeof(double));
//
//	return 0;
//}


//���͵�ʹ��
//int main()
//{
//	short age = 20;
//	float weight = 55.6;//ֱ��д��������Ĭ����double����
//	float weight = 55.6f;
//	char ch = 'a';
//
//	return 0;
//}


//�����ķ���
//���ֲ�������ȫ�ֱ���ͬ����ʱ�򣬾ֲ���������ʹ��
//ȫ�ֱ��������ڴ������ⲿ��
//int a = 100;
//int main()
//{
//	int a = 10;//�ֲ����������ڴ������ڲ���
//	printf("%d\n", a);
//
//	return 0;
//}


//������ʹ��
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d%d", &a, &b);
//	int c = a + b;
//	printf("%d\n", c);
//
//	return 0;
//}


//�ֲ������������򣺾����Լ����ڵľֲ���Χ
//int main()
//{
//	int a = 100;
//	{}-�����
//	{
//		int b = 10;
//		printf("b=%d\n", b);
//		printf("a=%d\n", a);
//
//	}
//	printf("a=%d\n", a);
//
//	return 0;
//}

//ȫ�ֱ�������������������
//Ҫ��ʹһ���ļ��еı�������һ���ļ���ʹ��
//��Ҫ����
//extern-�����ⲿ����
//extern int g_val;
//
//int main()
//{
//	printf("%d\n", g_val);
//	return 0;
//}



//�ֲ����������������ǣ������������������ڿ�ʼ�����������������ڽ�����
//ȫ�ֱ��������������ǣ�����������������ڡ�
//int main()
//{
//	{
//		//����a
//		int a = 10;
//		printf("%d\n", a);
//		//����a
//	}
//
//	return 0;
//}


//������4��
//int main()
//{
//	//100;//1.���泣��
//
//	//2.const���εĳ�����
//	const int a = 10;//������ģ����г����ԣ����ǻ��Ǳ���
//	printf("a=%d\n", a);
//	a = 20;
//	printf("a=%d\n", a);
//
//	return 0;
//}
//3.#define ����ı�ʶ������
//#define MAX 100
//
//int main()
//{
//	int a = MAX;
//	//MAX = 200;//�����������޸�
//	printf("a=%d\n", a);
//	int arr[MAX] = { 0 };
//
//	return 0;
//}
//4.ö�ٳ���:���ܸ�
//ö��-��һһ�о�
//����һ��ö������
//enum-ö�ٹؼ���
//enum Sex
//{
//	MALE,
//	FEMALE,
//	SECRET
//};
//
//int main()
//{
//	enum Sex sex = FEMALE;
//	return 0;
//}


//�ַ���
//int main()
//{
//	char arr1[] = "abc";//�ַ�����ĩβ��'\0',���ַ����Ľ�����־��
//	char arr2[] = { 'a', 'b', 'c', '\0' };
//
//	//%s-�ַ���
//	printf("%s\n", arr1); 
//	printf("%s\n", arr2);
//  
//  //%c-�ַ�
//  printf("%c\n",'a');
//
//	return 0;
//}


//�ַ�������
//'\0'�������ַ������ݣ����ȣ�
#include <string.h>

//int main()
//{
//	char arr1[] = "abc";
//	char arr2[] = { 'a', 'b', 'c' };
//	//strlen-string length-�ַ�������
//	printf("%d\n", strlen(arr1));//strlen()�⺯��Ҫ����ͷ�ļ�#include <string.h>
//	printf("%d\n", strlen(arr2));
//
//
//	return 0;
//}


//ת���ַ�
//int main()
//{
//	// \t-tab-ˮƽ�Ʊ��
//	printf("c:\test\test.c\n");
//
//	return 0;
//}

//int main()
//{
//	// \' ���ڱ�ʾ�ַ�����'
//	printf("%c\n", '\'');//'
//
//	// \�� ���ڱ�ʾһ���ַ����ڲ���˫����
//	printf("%s\n", "\"");//"
//
//	return 0;
//}

//int main()
//{
//	// \\ ���ڱ�ʾһ����б�ܣ���ֹ��������Ϊһ��ת�����з���
//	printf("c:\\test\\test.c\n");//c:\test\test.c\n
//	return 0;
//}

//int main()
//{
//	// \ddd ddd��ʾ1~3���˽��Ƶ�����:��8���ƻ��㣬��ASCII�����Ҷ�Ӧ�ַ�
//	printf("%c\n", '\123');//83-S
//	return 0;
//}

//int main()
//{
//	// \xdd dd��ʾ2��ʮ����������:��16���ƻ��㣬��ASCII�����Ҷ�Ӧ�ַ�
//	printf("%c\n", '\x41');//65-A
//	return 0;
//}

//��Ŀ
//int main()
//{
//	printf("%d\n", strlen("abcdef"));//6
//	// \32-ת���ַ�-26-����>
//	printf("%d\n", strlen("c:\test\328\test.c"));//14
//
//	return 0;
//}


//ע��
//int main()
//{
//	/*C���Ե�ע�ͷ��
//	ȱ�ݣ�����Ƕ��ע��
//	int a = 0;
//	int b = 0;
//	*/
//
//	//C++��ע�ͷ��
//
//	return 0;
//}


//ѡ�����
//int main()
//{
//	int input = 0;
//	printf("Ҫ�ú�ѧϰ��1/0����\n");
//	scanf("%d", &input);
//	
//	if (input == 1)
//	{
//		printf("�õ���offer\n");
//	}
//	else
//	{
//		printf("ʧҵ\n");
//	}
//
//	return 0;
//}


//ѭ�����
//int main()
//{
//	int line = 0;
//	while (line < 20000)
//	{
//		printf("д���룺%d\n", line);
//		line++;
//	}
//	if (line == 20000)
//	{
//		printf("��offer\n");
//	}
//
//	return 0;
//}


//����
//int Add(int x, int y)
//{
//	return x + y;
//}
//
//int main()
//{
//	int num1 = 0;
//	int num2 = 0;
//	scanf("%d %d", &num1, &num2);
//	int sum = Add(num1, num2);
//	printf("sum=%d\n", sum);
//
//	return 0;
//}


//����
//int main()
//{
//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int i = 0;
//	while (i < 10)
//	{
//		printf("%d ", arr[i]);//arr[i]���ڷ����±���i��Ԫ��
//		i++;
//	}
//
//	return 0;
//}


//������

//����������
//int main()
//{
//	printf("%d\n", 7 / 2);//7/2 ��3��
//	printf("%d\n", 7 % 2);//��1
//	//Ҫ��õ�С����/���˱���������һ��Ϊ������
//	printf("%f\n", 7.0 / 2);
//
//	return 0;
//}

//��λ������
//int main()
//{
//	int a = 12;//����-4byte-32bit
//	//��a�Ķ�����λ�����ƶ�һλ
//	int b = a >> 1;
//	//00000000000000000000000000001100-12
//   //00000000000000000000000000000110-6
//
//	//��a�Ķ�����λ�����ƶ�һλ
//	int c = a << 1;
//	//00000000000000000000000000011000-24
//	printf("%d\n", b);
//	printf("%d\n", c);
//
//	return 0;
//}

//λ������
//int main()
//{
//	int a = 5;//0101
//	int b = 3;//0011
//
//	//&-����2���ƣ�λ�룺��0��Ϊ0������Ϊ1
//	int c = a&b;
//	
//	//|-����2���ƣ�λ����1��Ϊ1������Ϊ0
//	int d = a | b;
//
//	//^-����2���ƣ�λ�����ͬΪ0������Ϊ1
//	int m = a^b;
//
//	printf("%d\n", c);//0001-1
//	printf("%d\n", d);//0111-7
//	printf("%d\n", m);//0110-6
//
//
//
//	return 0;
//}

//��Ŀ������
//int main()
//{
//	//2 + 3;-˫Ŀ������
//	//0��ʾ�٣���0��ʾ��
//	int a = !3;//!-�߼�������
//	printf("%d\n", a);
//
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	int b = a++;//����++����ʹ�ã���++
//	printf("%d\n", a);//11
//	printf("%d\n", b);//10
//
//	int n = 10;
//	int m = ++n;//ǰ��++����++����ʹ��
//	printf("%d\n", n);//11
//	printf("%d\n", m);//11
//
//	return 0;
//}

//����������/��Ŀ������
//int main()
//{
//	int a = 3;
//	int b = 0;
//
//	//if (a > 5)
//	//{
//	//	b = 10;
//	//}
//	//else
//	//{
//	//	b = 20;
//	//}
//
//	b = ((a > 5) ? 10 : 20);
//
//	printf("%d\n", b);
//	return 0;
//}

//���ű��ʽ�������������μ��㣬�����ȡ�������һ��
//int main()
//{
//	int a = (2, 3, 4, 5, 6);
//	printf("%d\n", a);//6
//
//	return 0;
//}


//�±����ò�������[]
//int main()
//{
//	int arr[10] = { 0 };
//	arr[4] = 5;//[]�����±����ò�����
//
//	return 0;
//}


//�ؼ���
//int main()
//{
//	//�Զ�����������
//	auto int a = 10;//�ֲ�����
//
//	return 0;
//}

//typedef:����������
//typedef unsigned int unit;
//
//int main()
//{
//	unsigned int num1 = 0;
//	unit num = 1;
//
//	return 0;
//}

//static
//1.���ξֲ�����
//2.����ȫ�ֱ���
//3.���κ���

//1.
//void test()
//{
//	int a = 1;
//	a++;
//	printf("%d", a);//10��2
//}
//
//int main()
//{
//	int i = 0;
//	while (i < 10)
//	{
//		test();
//		i++;
//	}
//	return 0;
//}

//static�ı��˾ֲ��������������ڣ������������-������û�з����仯
//void test()
//{
//	static int a = 1;//static���ξֲ�����
//	a++;
//	printf("%d ", a);//2 3 4 5 6 7 8 9 10 11
//}
//
//int main()
//{
//	int i = 0;
//	while (i < 10)
//	{
//		test();
//		i++;
//	}
//	return 0;
//}

//2.add.c
//extern:�����ⲿ����
//extern int g_val;
//
//int main()
//{
//	printf("%d\n", g_val);
//
//	return 0;
//}

//3.add.c
//extern int Add(int x, int y);
//int main()
//{
//	int a = 10;
//	int b = 20;
//	
//	int sum = Add(a, b);
//	printf("%d\n", sum);
//
//	return 0;
//}

//register
//int main()
//{
//	//register�ǽ�����Լ������ı����洢���Ĵ�����
//	//�������δ��������ʹ�ã�����ǰ��register�������Ч��
//	register int a = 10;
//
//	//�Ĵ����洢�ı������ܶ���ȡ��ַ
//	//ȡ��ַ�Ǵ����ڴ����
//	//&a;//erro
//
//	return 0;
//}


//define���峣���ͺ�

//define���峣��
//#define STR "hello bit"
//
//int main()
//{
//	printf("%s\n", STR);
//	return 0;
//}

//define�����
//#define ADD(X,Y) (X+Y)
//#define MAX(X,Y) ((X)>(Y)?(X):(Y))
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int ret = ADD(a, b);
//	printf("%d\n", ret);//30
//
//	printf("%d\n", MAX(a, b));//20
//
//	return 0;
//}


//ָ��
//�ڴ�
//int main()
//{
//	int a = 10;
//	////%p ���յ�ַ�ĸ�ʽ��ӡ
//	//printf("%p\n", &a);//&ȡ��ַ������
//
//	//int˵��paָ�����һ������
//	//*˵��pa��ָ�����
//	int* pa = &a;//pa��ר��������ŵ�ַ��-��pa�ͽ���ָ�����
//	*pa = 20;//*�����ò���������
//
//	printf("%d\n", a);
//
//	return 0;
//}

//ָ��Ĵ�С
//int main()
//{
//	printf("%d\n", sizeof(char*));//4
//	printf("%d\n", sizeof(short*));//4
//	printf("%d\n", sizeof(int*));//4
//	printf("%d\n", sizeof(float*));//4
//	printf("%d\n", sizeof(double*));//4
//
//	return 0;
//}


//�ṹ��
//struct Stu
//{
//	//����ѧ��������
//	char name[20];//����-�ַ���-�ַ�����
//	short age;
//	char sex[8];
//};

//int main()
//{
//	//�ṹ��Ĵ����ͳ�ʼ��
//	struct Stu s1 = { "����", 20, "��" };
//	printf("%s-%d-%s\n", s1.name, s1.age, s1.sex);//�ṹ���Ա���ʲ��������ṹ�����.�ṹ���Ա
//	return 0;
//}

//int main()
//{
//	struct Stu s1 = { "����", 20, "��" };
//	struct Stu* pa = &s1;
//	printf("%s %d %s\n", (*pa).name, (*pa).age, (*pa).sex);
//	//pa->name:ͨ��pa�ҵ���ָ��Ķ���ĳ�Աname�����ţ�
//	printf("%s %d %s\n", pa->name, pa->age, pa->sex);
//
//	return 0;
//}

//0-����0
//'0'-ASCIIֵ��48
//'\0'-ֵ��0
//'\0' 0 ��������ͬ��
//NULL-��ָ��

//EOF-end of file �ļ�������־