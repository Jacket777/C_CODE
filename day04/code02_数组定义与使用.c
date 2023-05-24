#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
#include<time.h>

int main02() {
	//1.数组的定义
	//变量定义
	//数据类型 变量  = 值
	//数组定义
	//数据类型 数组名[元素个数]={值1，值2，值3}
	int arr[10] = { 9,4,2,1,8,5,3,6,10,7 };
	//数组下标  数组名[下标]
    //数组下标是从0开始的到数组元素个数-1
    //printf("%d\n", arr[0]);
	for (int i = 0; i < 10; i++)
	{
		printf("%d\t", arr[i]);
	}
	printf("\n");
	printf("==============================\n");
	arr[3] = arr[5];
	arr[2] = arr[3] * 2;

	for (int i = 0; i < 10; i++)
	{
		printf("%d\t", arr[i]);
	}
	printf("\n");
	printf("==============================\n");
	printf("==========地址====================\n");
	printf("arr[0]地址： %p\n", &arr[0]);
	printf("arr[2]地址： %p\n", &arr[1]);
	printf("arr[2]地址： %p\n", &arr[2]);
	printf("arr[3]地址： %p\n", &arr[3]);
	printf("arr[4]地址： %p\n", &arr[4]);

	printf("数组在内存中占的大小：%d\n", sizeof(arr));
	printf("数组元素大小：       %d\n", sizeof(arr[0]));
	printf("数组元素个数：       %d\n", sizeof(arr) / sizeof(arr[0]));

	for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
	{
		printf("%d\t", arr[i]);
	}





}