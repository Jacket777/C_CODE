#include<stdio.h>

enum weekday {
	sun = 2, mon, tue, wed, thu, fri,sta
};

enum bool{
	false,true
};


int main08() {
	enum weekday a, b, c;
	a = sun;
	b = mon;
	c = tue;

	printf("%d, %d, %d\n", a, b, c);
	enum bool flag;
	flag = true;

	if (flag == 1) {
		printf("flagÎªÕæ\n");
	}
	return 0;
}