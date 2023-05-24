//#include<stdio.h>
//
//extern void pointerSize();
//extern void nullPointer();
//extern void voidPointer();
//extern void constPointer();
//extern void changeValue();
//
//int main() {
//
//	//printf("指针的大小\n");
//	//pointerSize();
//	//nullPointer();
//	//voidPointer();
//
//	constPointer();
//}
//
//
////通过指针变量改变量值
//void changeValue() {
//	int a = 3;
//	int b = 11;
//	int* p = &a;
//	*p = 100;
//	printf(" a = %d, *p = %d\n", a, *p);
//
//	p = &b;
//	*p = 22;
//	printf(" b = %d, *p = %d\n", b, *p);
//
//}
//
//
//
//
////指针大小
//void pointerSize() {
//	int* p1;
//	int** p2;
//	char* p3;
//	char** p4;
//	printf("(sizeof(p1) = %d\n", sizeof(p1));
//	printf("(sizeof(p2) = %d\n", sizeof(p2));
//	printf("(sizeof(p3) = %d\n", sizeof(p3));
//	printf("(sizeof(p4) = %d\n", sizeof(p4));
//	printf("(sizeof(double *) = %d\n", sizeof(double *));
//}
//
//
////空指针与野指针
//void nullPointer() {
//	int a = 100;
//	int* p;
//	//p = a; //把a的值赋值给指针变量p，p为野指针， ok，不会有问题，但没有意义,会报错
//	//p = 0x12345678; //给指针变量p赋值，p为野指针， ok，不会有问题，但没有意义,会报错
//	//*p = 100; 报错，未初始化
//	int* p1 = NULL;
//}
//
//
////万能指针void *  
//void voidPointer() {
//	//void* 指针可以指向任意变量的内存空间
//	void* p = NULL; 
//	int a = 10;
//	p = (void*)&a; //指向变量时，最好转换为void *
//	*((int*)p) = 11;  //使用指针变量指向的内存时，转换为int *
//	printf("a = %d\n", a);
//}
//
//
////const修饰的指针变量
//void constPointer() {
//	int a = 100;
//	int b = 200;
//
//	printf(" a = %d, b = %d\n", a, b);
//	printf(" a address = %p, b address = %p\n", &a, &b);
//
//	//指向常量的指针
//	//修饰*，指针指向内存区域不能修改，指针指向可以变   ???
//	const int* p1 = &a;
//	a = 200;
//	//*p = 111; 报错，//不能通过该形式修改
//	p1 = &b;
//
//
//	//指针常量
//	//修饰p2，指针指向不能变，指针指向的内存可以修改
//	int* const p2 = &a;
//	//p2 = &b; 报错
//	*p2 = 222;
//
//	printf(" a = %d, b = %d\n", a, b);
//	printf(" *p1 = %d, *p2 = %d\n", *p1, *p2);
//	printf(" *p1 = %p, *p2 = %p\n", p1, p2);
//
//
//}
//
