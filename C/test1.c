#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
//Print the primer number between 100-200.
//打印100-200之间的素数
//void prime(int a,int b)
//{
//	int i=0;
//	for(i=a;i<=b;i++)
//	{
//		int n=2;
//		int count=0;
//		for(n=2;n<i;n++)
//		{
//			
//			if(i%n==0)
//				count++;
//		}
//		if(count==0)
//		{
//			printf("%d ",i);
//		}
//	}
//}
//int main()
//{
//	int a=100,b=200;
//	prime(a,b);
//	system("pause");
//	return 0;
//}

//Leap year judgment between 1000-2000.
//判断1000-2000年之间的闰年
//
//void leap(int a,int b)
//{
//	int i=0;
//	 for(i=a;i<=b;i++)
//	{
//		if(((i%100!=0)&&(i%4==0))||(i%400==0))
//		{
//			printf("%d  ",i);
//		}
//	}
//
//}
//int main()
//{
//	int a=0,b=0;
//	scanf("%d %d",&a,&b);
//	if(a>b)
//	{
//		int tmp=0;
//		tmp=a;
//		a=b;
//		b=tmp;
//	}
//	leap(a,b);
//	system("pause");
//	return 0;
//}



//Multiplication table
//乘法口决表
//void multiply(int a)
//{
//	int i=1;
//	for(i=1;i<=a;i++)
//	{
//		int n=1;
//		for(n=1;n<=i;n++)
//		{
//			printf("%d*%d=%3d ",n,i,(i*n));
//		}
//		printf("\n");
//	}
//}
//int main()
//{
//	int a;
//	scanf("%d",&a);
//	multiply(a);
//	system("pause");
//	return 0;
//}