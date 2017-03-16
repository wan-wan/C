#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>

void  multiply(int a)
{
	int  i = 0;
	for(i=1;i<=a;++i)
	{
		int j = 0;
		for(j=1;j<=i;++j)
		{
			printf("%d * %d = %d ",j,i,j*i);
		}
		printf("\n");
	}
}


int main()
{
	int a = 0;
	printf("enter a number\n");
	scanf("%d",&a);
	multiply(a);
	system("pause");
	return 0;
}