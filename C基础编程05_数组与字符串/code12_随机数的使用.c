define _CRT_SECURE_NO_WARNINGS
#include<stdlib.h>
#include<time.h>
#include<stdio.h>

int main01() {
	//time_t timer = time(NULL); //��ȡϵͳ��ǰʱ��
	//srand((size_t)timer);
	//������������
	//srand((size_t)time(NULL));
	//for (int i = 0; i < 100; i++) {
		//printf("%d\n", rand() % 100); //0-99
	//	printf("%d\n", rand() % 51 +50); //50-100
	//}
	//rand()

	//˫ɫ��  6������1-32 1������ 1-16
	srand((unsigned int)time(NULL));
	int value = 0;
	int flag = 0;
	int j = 0;
	int arr[6] = { 0 };
	for (int i = 0; i < 6; i++) {
		value = rand() % 32 + 1;
		//ȥ��
		for (j = 0; j < flag; j++) {
			if (value == arr[j]) {
				i--;
				break;
			}
		}
		if (j == flag) {
			arr[flag] = value;
			flag++;
		}
	}

	for (int i = 0; i < 6; i++) {
		printf("%d\t", arr[i]);
	}

	printf("%d\n", rand() % 16 + 1);


}