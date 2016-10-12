#include "test10-12.h"

#include <iostream>
using namespace std;


//引用
void set_a(int *a)
{
	*a=99;
}
 void print_a(const int&refa)
 {
	 cout<<refa<<endl;
 }
//int print_a(const int * a)//const 在*前后意义不同
//{
//cout<<*a<<endl;
//} 
int main ()
{
	/*int a=10;
	set_a(&a);
	print_a(a);*/
	int a=10;
	const int &refa=a;//const不存在放在&之前之后之说，只放在&前
	cin>>a;
	print_a(a);
	system("pause");
	return 0;
}
//利用引用交换
//int Swap(int *pa,int *pb )  //指针容易出错，繁琐
//{
//	int tmp = *pa;
//	*pa = *pb;
//	*pb = tmp;
//}
//void Swap(int &refa,int&refb)
//{
//	int tmp=refa;
//	refa=refb;
//	refb=tmp;
//}
//int main()
//{
//	int a=10;
//	int b=20;
//	//Swap(&a,&b);
//	Swap(a,b);
//	cout<<a<<" "<<b<<endl;
//	system("pause");
//	return 0;
//}



//
//int main()
//{
//	//类型后跟一个引用符号（取地址符&）后面跟一个名字，这个名字是=后的参数的一个别名
//	int a=10;
//	int &ra=a;      //ra和a是同一个变量，使用同一个空间。ra是一个引用变量。
//	int &refa=a;    //一个变量可取多个别名
//	cout<<a<<endl;
//	cout<<ra<<endl;
//	cout<<&a<<endl;
//	cout<<&ra<<endl;
//	cout<<&refa<<endl;
//	system("pause");
//	return 0;
//}
// 


//缺省参数
//全缺省：都给默认值
//半缺省：参数多的话，可以一部分给默认值（默认参数只能给在右边）
//int Add(int x,int y=0)//半缺省
//{
//	return x+y;
//}
//int Add(int x=0,int y=0)//全缺省  默认值
//{
//	return x+y;
//}
//
//int main()
//{
//	int a=10;
//	int b=20;
//	int ret = Add();
//	//Add();
//	cout<<ret<<endl;
//	system("pause");
//	return 0;
//}


//格式控制
//namespace w1
//{
//	void Add(int x,int y)
//	{
//		return x+y;
//	}
//}
//int main()
//{
//	int a = 0;
//	char c = ' ';
//	float f =0.0;
//	cin>>a>>c>>f;
//	cout<<a<<" "<<c<<" "<<f;//控制格式
//	system("pause");
//	return 0;
//}
//
