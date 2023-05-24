#define _CRT_SECURE_NO_WARNINGS
#include<string.h>
#include<stdio.h>

void fun01() {
	char ch[] = "hello world";
	char str[100];
	strcpy(str, ch);
	printf("%s\n", str);

}

void my_strcpy(char* dest, char* src) {
	while (*dest++ = *src++);
}

void my_strncpy(char* dest, char* src, size_t n) {
	while ((*dest++ = *src++ )&&(--n));
}

int main() {
	fun01();
	return 0;
}