//#include<stdio.h>
//#include<string.h>
//extern void arrName();
//extern void pointerArr();
//extern void pointerAdd();
//extern void pointerAdd01();
//extern void pointerSub01();
//extern void pointerSub02();
//extern void pointerArray();
//
////讲义代码---测试通过
//
//int main() {
//	//arrName();
//	//pointerArr();
//	/*pointerAdd01();*/
//	//pointerSub02();
//	pointerArray();
//}
//
////7.3.1
////数组名字是数组的首元素地址，但它是一个常量：
//void arrName() {
//	int a[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
//	printf("a = %p\n", a);
//	printf("&a[0] = %p\n", &a[0]);
//	//a = 10 数组名只是常量，不能修改
//}
//
////7.3.2
////指针操作数组
//void pointerArr() {
//	int a[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
//	int i = 0;
//	int n = sizeof(a) / sizeof(a[0]);
//	for (int i = 0; i < n; i++) {
//		//printf("%d, ", a[i]);
//		printf("%d\t", *(a + i));
//	}
//	printf("\n");
//	int* p = a; //定义一个指针保存a的地址
//	for (i = 0; i < n; i++) {
//		p[i] = 2 * i;
//	}
//
//	for (i = 0; i < n; i++) {
//		printf("%d\t", *(p + i));
//	}
//	printf("\n");
//}
//
////7.3.3.1
////指针相加--1
//void pointerAdd01() {
//	int a=2;
//	int* p = &a;
//	printf("p的值: %d\t p的地址: %p\n", *p, p);
//	p += 2; //地址往后移动两位  移动了2个int 值是随机的
//	printf("p的值: %d\t p的地址: %p\n", *p, p);
//
//	printf("=======================================\n");
//	char b = 'a';
//	char* p1 = &b;
//	printf("p1的值： %c\t p1的地址： %p\n", *p1, p1);
//	p1 += 2;//移动了2个char
//	printf("p1的值： %c\t p1的地址： %p\n", *p1, p1);
//	/*printf("%d\n", *p1);*/
//	return 0;
//}
//
//
////7.3.3.2
////指针相加--2
//void pointerAdd() {
//	//通过改变指针指向操作数组元素
//	int a[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
//	int n = sizeof(a) / sizeof(a[0]);
//	int* p = a;
//	for (int i = 0; i < n; i++) {
//		printf("%d, ", *p);
//		p++;//指针++相当于指针后移动一个地址
//	}
//	printf("\n");
//}
//
//
//
//
//
//
////7.3.3.3
////指针相减
//void pointerSub01() {
//	int a[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
//	int i = 0;
//	int n = sizeof(a) / sizeof(a[0]);
//	int* p = a + n -1;
//	for (i = 0; i < n; i++) {
//		printf("值：%d\t,地址：%p\n", *p, p);
//		p--;
//	}
//}
//
//
//
////7.3.3.4
////指针相减的意义
//void pointerSub02() {
//	int a[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
//	int n = sizeof(a) / sizeof(a[0]);
//	printf("==========重点=================\n");
//	int* p1 = &a[1];//第1个元素地址
//	int* p2 = &a[2];//第2个元素地址
//	printf("p1 = %p, p2 = %p\n", p1, p2);
//	int n1 = p2 - p1; //相差1个地址  n1 = 1
//	int n2 = (int)p2 - (int)p1;//相差1个4  int为4个字节  n2 = 4
//	printf("n1 = %d, n2 = %d\n", n1, n2);
//
//}
//
////7.3.4 指针数组
////指针数组，它是数组，数组的每个元素都是指针类型。
//void pointerArray() {
//	int* p[3];
//	int a = 1, b = 2, c = 3, i = 0;
//	p[0] = &a, p[1] = &b, p[2] = &c;
//	for (i = 0; i < sizeof(p) / sizeof(p[0]); i++) {
//		printf("%d. ", *(p[i]));
//	}
//	printf("\n");
//}