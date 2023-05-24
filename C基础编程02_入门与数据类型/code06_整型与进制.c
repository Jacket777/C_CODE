//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//void test01();
//
//int main() {
//		//数据类型 标识符 = 值
//		//无符号  unsigned 有符号 signed(可以省略)
//		signed int a = -10;
//		unsigned int b = 20;
//		printf("无符号数： b = %u\n", b);
//		printf("a = %d\n", a);
//		printf("========二进制=================\n");
//		//进制
//		//二进制0-1 八进制0-7 十六进制0-9 10-15（a-f A-F）
//		int c = 10;
//		printf("16进制：c = %x\n", c);
//		printf(" 8进制：c = %o\n", c);
//	
//		printf("========八进制转其他进制=================\n");
//		//定义八进制数据 以0开头
//		int d = 0123;
//		int e = 0x123;
//		
//		printf("10进制：d = %d\n", d);
//		printf(" 8进制：d = %o\n", d);
//		printf("16进制：d = %x\n", d);
//	
//		printf("e = %d\n", e);
//		printf("e = %o\n", e);
//		printf("e = %x\n", e);
//		printf("------------>>>>>>>>-------------------\n");
//		test01();
//
//		return 0;
//	}
//
//void test01() {
//	int a = 123;	//定义变量a，以10进制方式赋值为123
//	int b = 0567;	//定义变量b，以8进制方式赋值为0567
//	int c = 0xabc;	//定义变量c，以16进制方式赋值为0xabc
//	printf("a = %d\n", a);
//	printf("8进制：b = %o\n", b);
//	printf("10进制：b = %d\n", b);
//	printf("16进制：c = %x\n", c);
//	printf("16进制：c = %X\n", c);
//	printf("10进制：c = %d\n", c);
//	unsigned int d = 0xffffffff; //定义无符号int变量d，以16进制方式赋值
//	printf("有符号方式打印：d = %d\n", d);
//	printf("无符号方式打印：d = %u\n", d);
//   }