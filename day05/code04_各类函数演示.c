#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
#include<time.h>

//无参函数
int fun01() {
	return rand() % 10;
}

//无参无返函数
void fun02(void) {
	printf("hello guys");
	return;
}


//冒泡排序
void BubbleSort(int arr[], int len) {
	for (int i = 0; i < len - 1; i++) {
		for (int j = 0; j < len - 1 - i; j++) {
			if (arr[j] > arr[j + 1]) {
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
	return;
}




//void  空类型
//void类型 不可以直接定义数据  
//void类型可以作为函数的返回值类型 表示没有返回值
//void c = 30;
int main04(void) {
	int arr[] = { 9,1,7,4,2,10,3,8,6,5 };
	int len = sizeof(arr) / sizeof(arr[0]);
	BubbleSort(arr, len);
	for (int i = 0; i < 10; i++) {
		printf("%d\t", arr[i]);
	}
	printf("\n");

}




