#define  _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
//虚函数&多态

class Base
{
public:
	Base()
		:_b(1)
	{}
	virtual void Show()//虚函数，结果  2  1
	{
		cout<<_b<<endl;
	}
private:
	int _b;
};
class Driver :public Base
{
public:
	Driver()
		:_d(2)
	{}
	void Show()
	{
		cout<<_d<<endl;
	}
private:
	int _d;
};
//基类的一个指针
void Print(Base *pb)//一种状态实现不同的事情----多态
{
	pb->Show();//实现多态的函数一定要是虚函数
  // pb.Show();         //而且子类要对父类的虚函数进行重fu写gai
	           //传的一定是父类的指针（子类地址覆盖掉了父类地址）
}
int main ()
{
	Driver d;//2
	Base b;//1
	//d.Show();//2
	//b.Show();//1
	Print(&d);//1父类的指针访问的权限只有父类
	Print(&b);//1子类把b的地址传给指针，但不能改变指针的类型，所以调用父类的内容
	system("pause");
	return 0;
}
