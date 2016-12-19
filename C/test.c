#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
//int count_bit_1(int n)
//{
//	int count=0;
//	while(n)
//	{
//		if(n%2==1)
//		{
//			count++;
//		}
//		n=n/2;
//	}
//	return count;
//}

//int count_bit_1(int n)
//{
//	int count = 0;
//	int i = 0;
//	for(i=0;i<32;i++)
//	{
//		if((n>>i)&1==1)
//		{
//			count++;
//		}
//	}
//	return count;
//}
int count_bit_1(int n)
{
	int count=0;
	while(n)
	{
		count++;
		n=n&(n-1);
	}
	return count;
}
int main()
{
	int num=0;
	int ret=0;
	scanf("%d",&num);
	ret =count_bit_1(num);
	printf("%d",ret);
	system("pause");
	return 0;
}