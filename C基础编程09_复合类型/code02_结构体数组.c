#include<stdio.h>

struct student {
	int num;         //学号
	char name[20];   //姓名
	char sex;        //性别
	float score;     //分数
};

int main02() {
	struct student boy[5] = {
		//定义一个含有5个元素的结构体数组并将其初始化
		{101,"Li ping",'F',85},
		{102,"Zhang ping",'M',62.5},
		{103,"He fang",'M',95},
		{104,"Cheng ling",'F',87},
		{105,"Wang ming",'M',95}
	};

	int i = 0;
	int c = 0;
	float ave, s = 0;
	for (i = 0; i < 5; i++) {
		s += boy[i].score;
		if (boy[i].score < 60) {
			c += 1;
		}
	}

	printf("s = %f\n", s);
	ave = s / 5;
	printf("average = %f\ncount = %d\n\n", ave, c);

	for (i = 0; i < 5; i++) {
		printf("name = %s, score = %f\n", boy[i].name, boy[i].score);
	}

	return 0;




}