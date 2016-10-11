#include "test1.h"
//函数重载：（静态多态）用同一个东西表示不同的形态
#include<iostream>
using namespace std;
                  //用同一个名字（函数体）来实现不同的功能
int Add (int x,int y)//整形
{
	return x+y;
}

float Add (float x,float y)//浮点
{
	return x+y; 
}

int main()
{
	Add(10,20);
	Add(10.0f,20.0f)
	return 0;
}


//c++输入和输出
//
//#include<iostream>
//using namespace std;
//
//int main()
//{
//	//int a=10;
//	//cin>>a;
//	char name[20]={0};
//	cin>>name;
//	cout<</*a*/name<<endl;
//	return 0;
//}