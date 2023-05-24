#include<stdio.h>

//1.返回栈区地址
int* fun_mem01() {
	int a = 10;
	return &a; //函数调用完毕，a释放
}


//2.返回data区地址
int* fun_mem02() {
	static int a = 10;
	return &a;//函数调用完毕，a不释放
}



//3.值传递1
fun_mem03(int* temp) {
	*temp = 150;
}



//4.值传递2
fun_mem04(int *temp) {
	temp = (int*)malloc(sizeof(int));
	*temp = 260;
}


//5.返回堆区地址
int* fun_mem05() {
	int* temp = NULL;
	temp = (int*)malloc(sizeof(int));
	*temp = 100;
	return temp; //返回堆区地址，函数调用完毕，不释放
}


int main(int argc, char* argv[]) {
	int* p = NULL;
	p = fun_mem01();
	printf("p = %p\n", p);
	//*p = 100;  //操作野指针指向的内存,err
	printf("=================\n");

	int* p02 = NULL;
	p02 = fun_mem02();
	*p02 = 100;//ok
	printf("*p = %d\n", *p02);
	printf("=================\n");

	int* p03 = NULL;
	p03 = (int*)malloc(sizeof(int));
	fun_mem03(p03);
	printf("*p03 = %d\n", *p03);
	printf("=================\n");
	int* p04 = NULL;
	fun_mem04(p04);//值传递，形参修改不会影响实参
	//printf("*p04 = %d\n", *p04);//err，操作空指针指向的内存

	printf("=========5.返回堆区地址========\n");
	int* p05 = NULL;
	p05 = fun_mem05();
	printf("*p05 = %d\n", *p05);
	//堆区空间，使用完毕，手动释放
	if (p05 != NULL) {
		free(p05);
		p05 = NULL;
	}

	return 0;
}