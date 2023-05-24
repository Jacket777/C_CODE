include<stdio.h>

int main10() {
	int a = 25;
	char b = 100;
	printf("%p  %p\n", &a, &b);

	int* p;
	p = &a;
	printf("%d\n", *p);

	char* p1 = &b;
	printf("%c\n", *p1);

	//通过指针间接修改变量的值
	int a1 = 10;
	int b1 = 11;
	int* p2 = &a1;
	printf("a1 = %d, b1 = %d, *p = %d\n", a1, b1, *p2);
	p2 = &b1;
	*p2 = 22;
	printf("a1 = %d, b1 = %d, *p = %d\n", a1, b1, *p2);

	//指针大小
	int* testp1;
	int** testp2;
	char* testp3;
	char** testp4;
	printf("sizeof(testp1) = %d\n", sizeof(testp1));
	printf("sizeof(testp2) = %d\n", sizeof(testp2));
	printf("sizeof(testp3) = %d\n", sizeof(testp4));
	printf("sizeof(testp4) = %d\n", sizeof(testp4));



	return 0;
}