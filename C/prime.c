#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
void prime(int min,int max)
{
	for(min;min<=max;++min)
	{
		int j=0;
		for(j=2;j<min;++j)
		{
			if((min%j)==0)
			{
				break;
			}
			else if(j==min-1)
			{
				printf("%d  ",min);
			}
		}
	}
}
int main()
{
	int a=0;
	int b=0;
	printf("enter the interval\n");
	scanf("%d %d",&a,&b);
	prime(a,b);
	system("pause");
	return 0;
}