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

	printf("��ά����Ĵ�С:     %d\n", sizeof(arr));         //��*��*sizeof(��������)
	printf("��ά����һ�д�С:   %d\n", sizeof(arr[0]));      //��*sizeof(��������)
	printf("��ά����Ԫ�صĴ�С�� %d\n", sizeof(arr[0][0]));   //sizeof(��������)

	printf("��ά��������:  %d\n", sizeof(arr) / sizeof(arr[0])); 
	printf("��ά��������:  %d\n",  sizeof(arr[0]) / sizeof(arr[0][0]));

	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 3; j++) {
			printf("%p\n", &arr[i][j]);
		}
	}
	printf("==============================\n");

	//��ά�����׵�ַ
	printf("%p\n", arr);     //�׵�ַ
	printf("%p\n", arr[0]);  //�׵�ַ
	printf("%p\n", arr[1]);  //�׵�ַ
    //��ַ������
	printf("%p\n", arr[0][0]);
	printf("%p\n", arr[0][1]);

	//��ά�����ʼ��
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