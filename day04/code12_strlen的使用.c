#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
#include<time.h>

int main12() {
	char ch[] = "hello world";
	printf("数组的大小为: %d\n", sizeof(ch));
	printf("字符串长度:   %d\n", strlen(ch));
	int len = 0;
	while (ch[len] != '\0') {
		printf("字符为: %c\n", ch[len]);
		len++;	
	}
	printf("字符串长度为:%d", len);
	return 0;
}