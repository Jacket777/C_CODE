#include<stdio.h>

//1.����ջ����ַ
int* fun_mem01() {
	int a = 10;
	return &a; //����������ϣ�a�ͷ�
}


//2.����data����ַ
int* fun_mem02() {
	static int a = 10;
	return &a;//����������ϣ�a���ͷ�
}



//3.ֵ����1
fun_mem03(int* temp) {
	*temp = 150;
}



//4.ֵ����2
fun_mem04(int *temp) {
	temp = (int*)malloc(sizeof(int));
	*temp = 260;
}


//5.���ض�����ַ
int* fun_mem05() {
	int* temp = NULL;
	temp = (int*)malloc(sizeof(int));
	*temp = 100;
	return temp; //���ض�����ַ������������ϣ����ͷ�
}


int main(int argc, char* argv[]) {
	int* p = NULL;
	p = fun_mem01();
	printf("p = %p\n", p);
	//*p = 100;  //����Ұָ��ָ����ڴ�,err
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
	fun_mem04(p04);//ֵ���ݣ��β��޸Ĳ���Ӱ��ʵ��
	//printf("*p04 = %d\n", *p04);//err��������ָ��ָ����ڴ�

	printf("=========5.���ض�����ַ========\n");
	int* p05 = NULL;
	p05 = fun_mem05();
	printf("*p05 = %d\n", *p05);
	//�����ռ䣬ʹ����ϣ��ֶ��ͷ�
	if (p05 != NULL) {
		free(p05);
		p05 = NULL;
	}

	return 0;
}