#include<stdio.h>
//�ֲ�����

void test() {
	//autoд��д��һ����
	//autoֻ�ܳ�����{}�ڲ�

	auto int b = 10;
}

int main01(void) {
	//b = 100; //err�� ��main��������û��b
	if (1) {
		//�ڸ�������ж��壬ֻ�ڸ����������Ч
		int a = 10;
		printf("a = %d\n ", a);
	}
	//a = 10; //err�뿪if()�ĸ�����䣬a�Ѿ�������
	return 0;
}