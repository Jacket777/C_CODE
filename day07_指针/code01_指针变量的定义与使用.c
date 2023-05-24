//#include<stdio.h>
//void test101();
//int main() {
//	//int a = 0;
//	//char b = 100;
//	//printf(" a = %d  a 的地址 = %p\n", a, &a);
//	//printf(" b = %c  b 的地址 = %p\n", b, &b);
//
//	////指针定义
//	////定义了一个指针类型的变量，可以指向一个int类型变量的地址
//	//int* p; //int *代表是一种数据类型，int*指针类型，p才是变量名
//	//p = &a;//将a的地址赋值给变量p，p也是一个变量，值是一个内存地址编号
//	//printf("*p = %d\n", *p); //p指向了a的地址，*p就是a的值,此时的*是操作符，将p所存储的地址的变量的取出
//	///*
//	//注意：&可以取得一个变量在内存中的地址。但是，不能取寄存器变量，
//	//因为寄存器变量不在内存里，而在CPU里面，所以是没有地址的。
//	//*/
//	//char* p1 = &b;
//	//printf("*p1 = %c\n", *p1);
//	test104();
//
//	return 0;
//}
//
//
////指针大小
///*
//使用sizeof()测量指针的大小，得到的总是：4或8
//64位上面是8位， 32位上面是4位
//*/
////void test101() {
////	int* p1;
////	int** p2;
////	char* p3;
////	char** p4;
////	printf("sizeof(p1) =%d\n", sizeof(p1));
////	printf("sizeof(p2) =%d\n", sizeof(p2));
////	printf("sizeof(p3) =%d\n", sizeof(p3));
////	printf("sizeof(p4) =%d\n", sizeof(p4));
////	printf("sizeof(double *) =%d\n", sizeof(double*));
////}
//
///*
//*野指针和空指针 
//*/
////void test102() {
////	int a = 100;
////	int*p1;
////	int* p2;
////	int* p3 = NULL; //空指针
////	p1 = &a;  // 正常赋值，p1为正常指针
////	p2 = a;   //p2为野指针，赋值没问题，但没有任何意义
////	//*p2 = 1000; //操作野指针指向未知区域，内存出问题，err
////}
//
//
///*
//万能指针void *
//void *指针可以指向任意变量的内存空间
//*/
////int test103() {
////	void* p = NULL;
////	int a = 10;
////	p =(void*)&a;
////	*((int*)p) = 12;
////	printf("a = %d\n", a);
////	return 0;
////}
//
//
///*
//指针常量： 指针指向不能修改
//常量指针：指针指向的内存区域不能修改
//*/
//int test104() {
//	int a = 100;
//	int b = 200;
//	const int* p1 = &a;
//	a = 300;  //可以修改变量a的值
//	printf("a = %d\n", a);
//	//但是不能通过如下方式修改a的值
//	//*p1 = 1000;
//	p1 = &b; //改变指针指向
//	printf("*p1 = %d\n", *p1);
//
//	//指针指向不能变，指针指向的内存可以修改
//	int * const p2 = &a;
//	*p2 = 222;
//	printf("修改后的a 值");
//	printf("a = %d\n", a);
//	//p2 = &b; 错误，不能修改地址
//}