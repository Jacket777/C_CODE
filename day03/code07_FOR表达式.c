//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include<string.h>
//#include<stdlib.h>
//#include<math.h>
//#include<time.h>
//
//int main() {
//	//int j = -5,
//	//for (int i = 0; i < 10, j <10; i++, j += 5)
//	//{
//	//	printf("%d\n", i);
//
//	//}
//
//	///int j = 5;
//	// for (int i = 0; i < 10, j < 10; i++, j += 5)
//	// {
//	//	printf("%d\n", i);
//	//}
//	//printf("=================\n");
//
//	int k = 5;
//	for (int i = 0; i < 10,k <10; i++,k+=1) {
//		printf("i = %d\n", i);
//	}
//
//	printf("=================\n");
//	int i = 0;
//	for (;;) {
//		if (i > 10) {
//			break;
//		}
//		printf("%d\n", i);
//		i++;
//	}
//
//	printf("=================\n");
//	//���������
//	//1������ͷ�ļ�  time.h stdlib.h
//	//2��������������
//	//3����ȡ�����
//	srand((unsigned int)time(NULL));//ÿ���������һ��
//	for (int i = 0; i < 10; i++) {
//		int value = rand() % 10;
//		printf("%d\n", value);
//	}
//
//	//�������һ������0-99֮�䣬Ȼ�����
//	int value = rand() % 100;
//	int num;
//	while (1) {
//		printf("����������: \n");
//		scanf("%d", &num);
//		if (value > num) {
//			printf("���������̫С��\n");
//		}
//		else if (value < num) {
//			printf("���������̫����\n");
//		}
//		else {
//			printf("��ϲ�㣬�¶���\n");
//			break;
//		}
//	}
//	return 0;
//}