#define  _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<windows.h>
#include<cstdio>
using namespace std;



//  //指针和引用 的不同
//int main ()
//{
//	int *p;
//	int a=0;
//	int b=0;
//	p=&a;
//	p=&b;
//	int &refa=a;
//	printf("%d\n",sizeof(p));
//	printf("%d\n",sizeof(refa));
//	p++;
//	refa++;
//	system("pause");
//	return 0;
//}

    //引用返回
	//struct bigData
	//{
	//int arr[1000];
	//};
	//bigData fun()
	//{
	//bigData num={0};
	//return num;
	//}
	//int main ()
	//{
	//int i=0;
	//int start=0;
	//start=GetTickCount();
	//for(i=0;i<1000000;i++)
	//{
	//	bigData bd=fun();
	//}
	//int end=GetTickCount();
	//cout<<end-start<<endl;
	//system("pause");
	//return 0;
	//}