#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
#include<time.h>


int main01() {
	extern int a;
	int b = 10;
	char c = 'c';
	char d[11] = "hello world";
	//ռλ�� ��ʾ���һ���ַ���  ����\0ֹͣ
	printf("%s\n", d);
	return EXIT_SUCCESS;
}