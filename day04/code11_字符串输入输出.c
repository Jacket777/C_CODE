#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
#include<time.h>

int main11() {
	//char ch[10];

	//1. �ַ�������
	//ͨ�����̻�ȡһ���ַ���
   //gets�����ַ������Դ��ո�
	//gets(ch);

	//scanf("%s", ch);//����ַ������пո�ֻ�ܻ�ȡ�ո�ǰ���ַ���
	//scanf("%s[^\n]", ch); //ͨ��������ʽ  ��ȡ���ո��ַ���----?

	//"hello\n\0"
	//fgets���Խ��տո�
	//fgets��ȡ�ַ�������Ԫ�ظ�������\n  ���ڵ��� û��\n
	//fgets(ch, sizeof(ch), stdin);
	//printf("%s\n", ch);

	//2.�ַ������
	 char ch[] = "hello world";
	//puts�Դ�����
	//puts(ch);
	//puts("hello\0 world"); //�����world�����
	//puts("");//����
	 fputs(ch, stdout);
	 return EXIT_SUCCESS;
}