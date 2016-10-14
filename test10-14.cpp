#define  _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <windows.h>
using namespace std;
//引用和指针的区别
//一样

int main()
{
	/*int i=0;
	int &refa=i;
	int *p=&i;*/
	system("pause");
	return 0;
}


//
////测试值传递和引用传递的效率
////值1750  引用 434   指针 差不多
//struct bigData
//{
//	int arr[1000];
//};
//int getData(bigData *bd)//bd  &bd *bd
//{
//	return bd->arr[0];  // .    .   ->
//}
//int main ()
//{
//	bigData bd={0};//c++类型前不加struct
//	int i=0;
//	int start = 0;
//	int end = 0;
//	start=GetTickCount();
//	for(i=0;i<10000000;i++)
//	{
//		getData(&bd);//  bd  bd  &bd 
//	}
//	end=GetTickCount();
//	cout<<end-start<<endl;
//	system("pause");
//	return 0;
//}