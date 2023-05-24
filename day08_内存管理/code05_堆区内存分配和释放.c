#include<stdio.h>
#include<stdlib.h>
#include<string.h>

/*
* void *malloc(size_t size);
功能：在内存的动态存储区(堆区)中分配一块长度为size字节的连续区域，用来存放类型说明符指定的类型。分配的内存空间内容不确定，一般使用memset初始化。
参数：
	size：需要分配内存大小(单位：字节)
返回值：
成功：分配空间的起始地址
失败：NULL
 
*/


/*
* 
* void free(void *ptr);
功能：释放ptr所指向的一块内存空间，ptr是一个任意类型的指针变量，指向被释放区域的首地址。对同一内存空间多次释放会出错。
参数：
ptr：需要释放空间的首地址，被释放区应是由malloc函数所分配的区域。
返回值：无
* 
*/

int main05() {
	int count, * array, n;
	printf("请输入要申请数组的个数\n");
	scanf_s("%d", &n);
	array = (int*)malloc(n * sizeof(int));
	if (array == NULL) {
		printf("申请空间失败\n");
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