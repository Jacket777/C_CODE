#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
#include<time.h>

int my_strcmp(char ch1[], char ch2[]) {
	int i = 0;
	while (ch1[i] == ch2[i]) {
		if (ch1[i] == '\0') {
			return 0;
		}
		i++;
	}
	return ch1[i] > ch2[i] ? 1 : -1;
}

int main03() {
	char ch1[] = "hbllo";
	char ch2[] = "hello";
	int value = my_strcmp(ch1, ch2);
	if (value == 0) {
		printf("两个字符串相同");
	}
	else {
		printf("两个字符串不相同");
	}

}