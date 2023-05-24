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
//	//产生随机数
//	//1、导入头文件  time.h stdlib.h
//	//2、添加随机数种子
//	//3、获取随机数
//	srand((unsigned int)time(NULL));//每次随机数不一样
//	for (int i = 0; i < 10; i++) {
//		int value = rand() % 10;
//		printf("%d\n", value);
//	}
//
//	//随机产生一个数，0-99之间，然后猜数
//	int value = rand() % 100;
//	int num;
//	while (1) {
//		printf("请输入数字: \n");
//		scanf("%d", &num);
//		if (value > num) {
//			printf("输入的数字太小了\n");
//		}
//		else if (value < num) {
//			printf("输入的数字太大了\n");
//		}
//		else {
//			printf("恭喜你，猜对了\n");
//			break;
//		}
//	}
//	return 0;
//}