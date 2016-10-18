#define  _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;

//struct Array 
//{
//	int arr[10];
//	void init()
//	{
//		int i =0;
//		int sz=sizeof(arr)/sizeof(arr[0]);
//		for(i=0;i<sz;i++)
//		{
//			arr[i]=i;
//		}
//	}
//
//	void print()
//	{
//		int i=0;
//		int sz=sizeof(arr)/sizeof(arr[0]);
//		for(i=0;i<sz;i++)
//		{
//			printf("%d\n",arr[i]);
//		}
//	}
//};
//
//int main()
//{
//	Array array;
//	array.arr[0]=10;
//	cout<<array.arr[0]<<endl;
//	array.init();
//	array.print();
//	system("pause");
//	return 0;
//}




//Structure-Oriented

//struct Stu
//{
//	char name[20];//成员变量
//	int age;
//	void setData()//成员方法（函数）
//	{
//		strcpy(name,"bit");
//		age=20;
//	}
//	void printData()
//	{
//		cout<<"name:"<<name<<endl;
//		cout<<"age:"<<age<<endl;
//	}
//};
//
//int main()
//{
//	Stu stu;
//	stu.setData();
//	stu.printData();
//	system("pause");
//	return 0;
//}




//Structure-Oriented
//void init(int arr[],int sz)
//{
//	int i=0;
//	for (i=0;i<sz,i++)
//	{
//		arr[i]=i;
//	}
//}
// int main()
// {
//	 int arr[10];
//	 init(arr,10);
//	 system("pause");
//	 return 0;
// }