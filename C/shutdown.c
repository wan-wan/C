#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void shutdown()
{
	char write[100];
	system("shutdown -s -t 60");
gt:
	printf("Say you are a pig !if not!shutdown \n");
	scanf("%s",write);
	if(strcmp(write,"iamapig")==0)
	{
		printf("yep!you are a pig!!\n");
		system("shutdown -a");
	}
	if(strcmp(write,"iamapig")!=0)
	{
		printf("give you a chance  once again!!");
		goto gt;
	}
}
int main()
{
	shutdown();
	system("pause");
	return 0;
}

// int  main()
//{         
//	char write[100];
//	system( "shutdown -s -t 60"); //关机命令,这个60是秒数,可以⾃⼰设定.
//gt: 
//	printf( "快说你是猪!不然就关机!\n" ); 
//	scanf( "%s", write); 
//	if (strcmp(write, "我是猪" ) == 0)
//	{ 
//		printf( "哈哈,你是猪~\n" );  
//		system( "shutdown -a"); 
//	} 
//	if (strcmp(write, "我是猪" ) != 0)
//	{ 
//		printf( "还不说是吧?不说就等关机!\n" );      
//		goto gt;    
//	}
//	system("pause");
//	return 0;
//} 