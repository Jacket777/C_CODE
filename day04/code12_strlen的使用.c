#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
#include<time.h>

int main12() {
	char ch[] = "hello world";
	printf("����Ĵ�СΪ: %d\n", sizeof(ch));
	printf("�ַ�������:   %d\n", strlen(ch));
	int len = 0;
	while (ch[len] != '\0') {
		printf("�ַ�Ϊ: %c\n", ch[len]);
		len++;	
	}
	printf("�ַ�������Ϊ:%d", len);
	return 0;
}