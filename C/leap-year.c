#define  _CRT_SECURE_NO_WARNINGS
#include<stdlib.h>
#include<stdio.h>
void leap(int a,int b)
{
	for(a;a<=b;++a)
	{
		if(((a%4==0)&&(a%100)!=0)||(a%400==0))
		{
			printf("%d  ",a);
		}
	}
}
int main()
{
	int a =0;
	int b =0;
	printf("enter the interval\n");
	scanf("%d %d",&a,&b);
	leap(a,b);
	system("pause");
	return 0;
}