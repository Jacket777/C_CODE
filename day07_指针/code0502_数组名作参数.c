//#include<stdio.h>
////7.5.2.数组名做函数参数，函数的形参会退化为指针：
//void printArray(int* a, int n) {
//	int i = 0;
//	for (i = 0; i < n; i++) {
//		printf("%d, ", a[i]);
//	}
//	printf("\n");
//}
//
//int main() {
//	int a[] = { 1,2,3,4,5,6,7};
//	int size = sizeof(a) / sizeof(a[0]);
//	printArray(a, size);
//	return 0;
//}