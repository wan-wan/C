#define  _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
//�麯��&��̬

class Base
{
public:
	Base()
		:_b(1)
	{}
	virtual void Show()//�麯�������  2  1
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
//�����һ��ָ��
void Print(Base *pb)//һ��״̬ʵ�ֲ�ͬ������----��̬
{
	pb->Show();//ʵ�ֶ�̬�ĺ���һ��Ҫ���麯��
  // pb.Show();         //��������Ҫ�Ը�����麯��������fuдgai
	           //����һ���Ǹ����ָ�루�����ַ���ǵ��˸����ַ��
}
int main ()
{
	Driver d;//2
	Base b;//1
	//d.Show();//2
	//b.Show();//1
	Print(&d);//1�����ָ����ʵ�Ȩ��ֻ�и���
	Print(&b);//1�����b�ĵ�ַ����ָ�룬�����ܸı�ָ������ͣ����Ե��ø��������
	system("pause");
	return 0;
}
