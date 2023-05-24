//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include<stdlib.h>
//
//void test01();
//
//int main() {
//	char ch = 127;
//	ch = ch + 1;
//	printf("数据溢出测试\n");
//	printf("%d\n", ch);
//	return EXIT_SUCCESS;
//}
//
//void test01() {
//	char ch;
//
//	//符号位溢出会导致数的正负发生改变
//	ch = 0x7f + 2; //127+2
//	printf("%d\n", ch);
//	//	0111 1111
//	//+2后 1000 0001，这是负数补码，其原码为 1111 1111，结果为-127
//
//	//最高位的溢出会导致最高位丢失
//	unsigned char ch2;
//	ch2 = 0xff + 1; //255+1
//	printf("%u\n", ch2);
//	//	  1111 1111
//	//+1后 10000 0000， char只有8位最高位的溢出，结果为0000 0000，十进制为0
//
//	ch2 = 0xff + 2; //255+1
//	printf("%u\n", ch2);
//	//	  1111 1111
//	//+1后 10000 0001， char只有8位最高位的溢出，结果为0000 0001，十进制为1
//
//
//}
//
//
