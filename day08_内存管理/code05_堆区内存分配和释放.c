#include<stdio.h>
#include<stdlib.h>
#include<string.h>

/*
* void *malloc(size_t size);
���ܣ����ڴ�Ķ�̬�洢��(����)�з���һ�鳤��Ϊsize�ֽڵ��������������������˵����ָ�������͡�������ڴ�ռ����ݲ�ȷ����һ��ʹ��memset��ʼ����
������
	size����Ҫ�����ڴ��С(��λ���ֽ�)
����ֵ��
�ɹ�������ռ����ʼ��ַ
ʧ�ܣ�NULL
 
*/


/*
* 
* void free(void *ptr);
���ܣ��ͷ�ptr��ָ���һ���ڴ�ռ䣬ptr��һ���������͵�ָ�������ָ���ͷ�������׵�ַ����ͬһ�ڴ�ռ����ͷŻ����
������
ptr����Ҫ�ͷſռ���׵�ַ�����ͷ���Ӧ����malloc���������������
����ֵ����
* 
*/

int main05() {
	int count, * array, n;
	printf("������Ҫ��������ĸ���\n");
	scanf_s("%d", &n);
	array = (int*)malloc(n * sizeof(int));
	if (array == NULL) {
		printf("����ռ�ʧ��\n");
		return -1;
	}

	memset(array, 0, sizeof(int) * n);
	for (count = 0; count < n; count++) {
		array[count] = count;
	}
	printf("=================\n");

	for (count = 0; count < n; count++) {
		printf("%2d, ", array[count]);
	}
	free(array);
	return 0;
}