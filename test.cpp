 
#include <iostream>    
//using namespace  std;           //ʹ��std�����ռ�
namespace w1              //w1 �����ռ��� ���ȫ��������ͻ
{
	int a=10;
	int b=20;
}                         //֧���ڲ�ͬ�ĵط���ͬһ�������ռ�
namespace w1
{
	int c=30;
}
namespace w2
{
	int a=100;
}
using namespace w1;              //����w1�����ռ�(ȫ��)
int main()
{
	//std::cout<<"hello world"<<std::endl;
	std::cout<<w1::a<<std::endl;     
	
	return 0;
}