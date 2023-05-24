#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
#include<time.h>

int main07() {
	int arr[2][3] = { {1,2,3},{4,5,6} };
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 3; j++) {
			printf("%d", arr[i][j]);
		}
		printf("\n");
	}

	printf("二维数组的大小:     %d\n", sizeof(arr));         //行*列*sizeof(数据类型)
	printf("二维数组一行大小:   %d\n", sizeof(arr[0]));      //列*sizeof(数据类型)
	printf("二维数组元素的大小： %d\n", sizeof(arr[0][0]));   //sizeof(数据类型)

	printf("二维数组行数:  %d\n", sizeof(arr) / sizeof(arr[0])); 
	printf("二维数组列数:  %d\n",  sizeof(arr[0]) / sizeof(arr[0][0]));

	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 3; j++) {
			printf("%p\n", &arr[i][j]);
		}
	}
	printf("==============================\n");

	//二维数组首地址
	printf("%p\n", arr);     //首地址
	printf("%p\n", arr[0]);  //首地址
	printf("%p\n", arr[1]);  //首地址
    //地址？？？
	printf("%p\n", arr[0][0]);
	printf("%p\n", arr[0][1]);

	//二维数组初始化
	int arr1[2][3] = { {1,2,3},{4,5,6} };
	int arr2[2][3] = { 1,2,3,4,5,6 };
	int arr3[][3] = { 1,2,3,4,5,6,7 };

	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 3; j++) {
			printf("%d\t", arr1[i][j]);
		}
		printf("\n");
	}



	

	return EXIT_SUCCESS;


}