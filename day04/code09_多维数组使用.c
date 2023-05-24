#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
#include<time.h>

int main09() {
	//一维数组定义
	//数据类型 数组名[元素个数]
	//二维数组定义
	//数据类型 数组名[行][列]

	//三维数组
	//数据类型 数组名[层][行][列]

	int arr[][3][4] =
	{
		{
			{1,2,3,4},
			{2,3,4,5},
			{3,4,5,6}
		},
		{
			{4,5,6,7},
			{5,6,7,8},
			{6,7,8,9}
		}
	};


	for (size_t i = 0; i < 2; i++) {
		for (size_t j = 0; j < 3; j++) {
			for (size_t k = 0; k < 4; k++) {
				printf("%d\t", arr[i][j][k]);
			}
			printf("\n");
		}
	}

	printf("三维数组大小：%d\n", sizeof(arr));//2*3*4*4  层*行*列*sizeof(数据类型)
	printf("三维数组一层大小：%d\n", sizeof(arr[0]));
	printf("三维数组一行大小：%d\n", sizeof(arr[0][0]));
	printf("三维数组元素大小：%d\n", sizeof(arr[0][0][0]));

	printf("层：%d\n", sizeof(arr) / sizeof(arr[0]));
	printf("行：%d\n", sizeof(arr[0]) / sizeof(arr[0][0]));
	printf("列：%d\n", sizeof(arr[0][0]) / sizeof(arr[0][0][0]));





}