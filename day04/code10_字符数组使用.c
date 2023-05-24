#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
#include<time.h>

int main10() {
	//char arr[100] = { 110,111,112,101,123,98,99 };
	//printf("%s\n", arr); //输出的全部是对应ASII码对应的值

	//char arr[] = { "hello" };
	//printf("%s\n", arr);

	//char arr[6] = { 'h','e','l','l','o' };
	//printf("%s\n", arr);

	//char * arr = "hello";
	//char arr[] = "hello";
	//char arr[] = { 'h','e','l','l','o','\0' };
	//char arr[] = { 'h','e','l','l','o',0 };
	//printf("%s\n", arr);
	//printf("%d\n", sizeof(arr)); //sizeof(数据类型)

	//for (int i = 0; i < sizeof(arr); i++) {
	//	printf("%c\t", arr[i]);
	//}

	//char ch[11];
	//scanf("%10s", ch);
	//printf("%s", ch);

	char ch1[] = "hello";
	char ch2[] = "world";
	char ch3[20];
	int i = 0;
	int j = 0;
	while (ch1[i] != '\0') {
		ch3[i] = ch1[i];
		i++;
	}

	while (ch2[j] != '\0') {
		ch3[i + j] = ch2[j];
		j++;
	}

	ch3[i + j] = '\0';
	printf("%s", ch3);

	return EXIT_SUCCESS;
}