#define  _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;

int main()
{
	//不同类型的转换，double类型的e来创建一个int类型的变量
	//，中间产生一个无名的临时对象，refe引用的是这个临时对象。
	double e=1.2;
	const int &refe=e;//refe不是e的引用，取地址refe和e不是同一块空间。
	//权限可以缩小，但不能放大
	/*const int a=10;
	int &refa=a;*/
	/*int b=20;
	const int &refb=b;
	const int &refc=5;*///right
	//int & refc=5;//error:5不可以改变，refc可以改变，权限变大
	system("pause");
	return 0;
}