#define  _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;

//1.11
int main()
{
	int a=0;
	int b=0;
	int i=0;
	cout<<"enter two number"<<endl;
	cin>>a>>b;
	while(a<b-1)
	{
		cout<<++a<<endl;
	}
	while(b<a-1)
	{
		cout<<++b<<endl;
	}
	system("pause");
	return 0;
}



//1.10
//int main()
//{
//	int sum=10;
//	while(sum>=0)
//	{
//		cout<<sum<<endl;
//		--sum;
//	}
//	system("pause");
//	return 0;
//}


//1.9
//int main()
//{
//	int sum=0;
//	int a=50;
//	while(a<=100)
//	{
//		sum+=a;
//		++a;
//	}
//	cout<<"the sum is "<<sum<<endl;
//	system("pause");
//  return 0;
//}