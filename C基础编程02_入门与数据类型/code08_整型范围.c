//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include<string.h>
//#include<stdlib.h>
//#include<math.h>
//#include<time.h>
//
//void test01();
//
//int main() {
//	int a = 10;
//	short b = 20;
//	long c = 301;
//	long long d = 3011;
//	//short<=int<=long< longlong
//
//	printf("%d\n",   a);
//	//占位符 表示输出一个短整型数据
//	printf("%hd\n",  b);
//	//占位符 表示输出一个长整型数据
//	printf("%ld\n",  c);
//	//占位符 表示输出一个长长整型数据
//	printf("%lld\n", d);
//
//
//	//sizeof 计算数据类型在内存中占的字节（BYTE）大小
//    //1B=8bit
//    //sizeof(数据类型) sizeof(变量名) sizeof 变量名
//	unsigned int len = sizeof(short);
//
//	printf("%d\n", len);
//	printf("整型: %d\n",     sizeof(a));
//	printf("短整型: %d\n",   sizeof(b));
//	printf("长整型: %d\n",   sizeof(c));
//	printf("长长整型: %d\n", sizeof(d));
//
//	printf("------------------------------\n");
//	test01();
//	return 0;
//
//}
//
//void test01() {
//	short a = 10;
//	int b = 10;
//	long c = 10l; //或者10L
//	long long d = 10ll; //或者10LL
//
//	printf("sizeof(a) = %u\n", sizeof(a));
//	printf("sizeof(b) = %u\n", sizeof(b));
//	printf("sizeof(c) = %u\n", sizeof(c));
//	printf("sizeof(d) = %u\n", sizeof(d));
//
//	printf("short a = %hd\n", a);
//	printf("int b = %d\n", b);
//	printf("long c = %ld\n", c);
//	printf("long long d = %lld\n", d);
//
//	unsigned short a2 = 20u;
//	unsigned int b2 = 20u;
//	unsigned long c2 = 20ul;
//	unsigned long long d2 = 20ull;
//
//	printf("unsigned short a = %hu\n", a2);
//	printf("unsigned int b = %u\n", b2);
//	printf("unsigned long c = %lu\n", c2);
//	printf("unsigned long long d = %llu\n", d2);
//}