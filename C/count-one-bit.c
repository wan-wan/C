#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
int count_one_bit_1(int a)//只能用于整数
{
	int count=0;
	int i=0;
	for( i=0;i<32;i++)
	{
		if(a%2==1)
		{ 
			count++;
		}
		a=a/2;
	}
	return count;
}
int count_one_bit_2(int a)
{
	int count=0;
	int i = 0;
	for(i=1;i<32;i++)
	{
		if((a&1)==1)
		{
			count++;
		}
		a=a>>i;
	}
	return count;
}

int main()
{
	int a = 0;
	int ret=0;
	scanf("%d",&a);
	ret=count_one_bit_2(a);
	printf("%d\n",ret);
	system ("pause");
	return 0;
}
 