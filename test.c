//操作符相关知识
#include<stdio.h>
int main()
{
	//int a = 3;
	//int b = 4;
	//printf("a=%d,b=%d\n", a, b);
	//a = a^b;
	//b = a^b;
	//a = a^b;
	//printf("a=%d,b=%d\n", a, b);
	int a = 10;
	int * p = &a;
	*p = 20;
	printf("%d", a);
	return 0;
}