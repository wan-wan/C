#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
void swap(int* x,int*  y)//开辟一块空间
{
	int tmp=*x;
	*x=*y;
	*y=tmp;
}
void swap1(int* x,int *y)//加减法
{
	*x=*x+*y;
	*y=*x-*y;
	*x=*x-*y;
}
void swap2(int *x ,int *y)//乘除法
{
	*x=*x * *y;
	*y=*x / *y;
	*x=*x/ *y;
}
void swap3(int *x ,int *y)//异或(同为0异为1)
{
	*x=*x ^ *y;  //0010 ^ 0101= 0111
	*y=*x ^*y;  //0111 ^ 0101 = 0010
	*x=*x^ *y;  //0111 ^ 0010 = 0101
}

int main ()
{
	int a=2;
	int b=5;
	swap3(&a,&b);
 	printf("a=%d b=%d \n",a,b);
	system("pause");
	return 0;
}
