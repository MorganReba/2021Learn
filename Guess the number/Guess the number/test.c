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

//rand��������һ������0��RAND_MAX֮����������
//RAND_MAX 0x7fff
//0-32767
//�ڵ���rand֮ǰ����ʹ��srand����������������������
//srand()�����б���дһ���仯��ֵ
//ʱ�������ǰʱ��ͼ��������ʼʱ��֮��Ĳ�ֵ����λ����
//��һ�����ֿ���ת����ʱ��
//���������ʼʱ���ǣ�1970-01-01 08:00:00��ʱ�����0

//srand-void srand( unsigned int seed );
//time-time_t time( time_t *timer );//time_t:���� 

void game()
{
	//1.�����������1-100��
	//�����ϵ�ʱ�����ڷ����仯��
	//time()�������صľ���ʱ���
	//srand((unsigned int)time(NULL));//ʱ������Ļ����ɵ�����һ���ģ�ֻ��Ҫ����һ�ξͺ�

	//RAND_MAX 0x7fff
	//0-32767
	//%100
	//0-99+1
	//1-100

	int ret = rand() % 100 + 1;//���������������
	//printf("%d\n", ret);

	//2.������
	int guess = 0;
	while (1)
	{
		printf("�������:>");
		scanf("%d", &guess);
		if (guess > ret)
		{
			printf("�´���\n");
		}
		else if (guess < ret)
		{
			printf("��С��\n");
		}
		else
		{
			printf("��ϲ�㣬�¶���\n");
			break;
		}
	}
}

int main()
{
	int input = 0;

	//������������һ�ξ���
	srand((unsigned int)time(NULL));

	do
	{
		menu();
		printf("��ѡ��(1/0):>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("ѡ�����\n");
			break;
		}
	} while (input);

	return 0;
}