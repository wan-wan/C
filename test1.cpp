#include "test1.h"
//�������أ�����̬��̬����ͬһ��������ʾ��ͬ����̬
#include<iostream>
using namespace std;
                  //��ͬһ�����֣������壩��ʵ�ֲ�ͬ�Ĺ���
int Add (int x,int y)//����
{
	return x+y;
}

float Add (float x,float y)//����
{
	return x+y; 
}

int main()
{
	Add(10,20);
	Add(10.0f,20.0f)
	return 0;
}


//c++��������
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