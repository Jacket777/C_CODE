#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>


int main() {
	char a = 'Z';
	printf("%c\n", a);
	char b[3] = "HA";
	printf("%s\n", b);
	char d[12] = "hello world";
	//ռλ�� ��ʾ���һ���ַ���  ����\0ֹͣ  //??
	//�ַ�����Ĵ�СҪ����ʵ��һ��
	printf("%s\n", d);
	return 0;
}