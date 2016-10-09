 
#include <iostream>    
//using namespace  std;           //使用std命名空间
namespace w1              //w1 命名空间域 解决全局命名冲突
{
	int a=10;
	int b=20;
}                         //支持在不同的地方用同一个命名空间
namespace w1
{
	int c=30;
}
namespace w2
{
	int a=100;
}
using namespace w1;              //引用w1命名空间(全局)
int main()
{
	//std::cout<<"hello world"<<std::endl;
	std::cout<<w1::a<<std::endl;     
	
	return 0;
}