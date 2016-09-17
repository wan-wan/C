#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int i,j;
	//scanf("%d",&n);
	for(i=1;i<=9;i++)
		for(j=1;j<=i;j++){
		     printf("%d*%d=%d",j,i,j*i);
			 if(i!=j){
			printf("\t");
			 }
		else
			if(i=j){
				printf("\n");
			}
		}
		getchar();
	return 0;
}