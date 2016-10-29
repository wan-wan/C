#define  _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;
int main()
{
	int currVal=0,val=0;
	if(cin>>currVal)
	{
		int cnt=1;
		while(cin>>val)
		{
			if(val==currVal)
				++cnt;
			else
			{
				cout<<currVal<<" occurs "<<cnt<<" times"<<endl;
				currVal==val;
				cnt=1;
			}
		}
				cout<<currVal<<" occurs "<<cnt<<" times"<<endl;
	}
	system("pause");
	return 0;
}

//
////1.16
//int main ()
//{
//	int sum=0;
//	int a=0;
//	cout<<"please enter some number,ctrl z is the end"<<endl;
//	for(;cin>>a;)
//	{
//		sum+=a;
//	}
//	cout<<"the sum is "<<sum<<endl;
//	system("pause");
//	return 0;
//}