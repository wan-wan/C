#include "test10-12.h"

#include <iostream>
using namespace std;


//����
void set_a(int *a)
{
	*a=99;
}
 void print_a(const int&refa)
 {
	 cout<<refa<<endl;
 }
//int print_a(const int * a)//const ��*ǰ�����岻ͬ
//{
//cout<<*a<<endl;
//} 
int main ()
{
	/*int a=10;
	set_a(&a);
	print_a(a);*/
	int a=10;
	const int &refa=a;//const�����ڷ���&֮ǰ֮��֮˵��ֻ����&ǰ
	cin>>a;
	print_a(a);
	system("pause");
	return 0;
}
//�������ý���
//int Swap(int *pa,int *pb )  //ָ�����׳�������
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
//	//���ͺ��һ�����÷��ţ�ȡ��ַ��&�������һ�����֣����������=��Ĳ�����һ������
//	int a=10;
//	int &ra=a;      //ra��a��ͬһ��������ʹ��ͬһ���ռ䡣ra��һ�����ñ�����
//	int &refa=a;    //һ��������ȡ�������
//	cout<<a<<endl;
//	cout<<ra<<endl;
//	cout<<&a<<endl;
//	cout<<&ra<<endl;
//	cout<<&refa<<endl;
//	system("pause");
//	return 0;
//}
// 


//ȱʡ����
//ȫȱʡ������Ĭ��ֵ
//��ȱʡ��������Ļ�������һ���ָ�Ĭ��ֵ��Ĭ�ϲ���ֻ�ܸ����ұߣ�
//int Add(int x,int y=0)//��ȱʡ
//{
//	return x+y;
//}
//int Add(int x=0,int y=0)//ȫȱʡ  Ĭ��ֵ
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


//��ʽ����
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
//	cout<<a<<" "<<c<<" "<<f;//���Ƹ�ʽ
//	system("pause");
//	return 0;
//}
//
