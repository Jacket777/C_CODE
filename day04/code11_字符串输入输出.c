#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
#include<time.h>

int main11() {
	//char ch[10];

	//1. 字符串输入
	//通过键盘获取一个字符串
   //gets接收字符串可以带空格
	//gets(ch);

	//scanf("%s", ch);//如果字符串中有空格，只能获取空格前的字符串
	//scanf("%s[^\n]", ch); //通过正则表达式  获取带空格字符串----?

	//"hello\n\0"
	//fgets可以接收空格
	//fgets获取字符串少于元素个数会有\n  大于等于 没有\n
	//fgets(ch, sizeof(ch), stdin);
	//printf("%s\n", ch);

	//2.字符串输出
	 char ch[] = "hello world";
	//puts自带换行
	//puts(ch);
	//puts("hello\0 world"); //后面的world不输出
	//puts("");//换行
	 fputs(ch, stdout);
	 return EXIT_SUCCESS;
}