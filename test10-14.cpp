#define  _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <windows.h>
using namespace std;
//���ú�ָ�������
//һ��

int main()
{
	/*int i=0;
	int &refa=i;
	int *p=&i;*/
	system("pause");
	return 0;
}


//
////����ֵ���ݺ����ô��ݵ�Ч��
////ֵ1750  ���� 434   ָ�� ���
//struct bigData
//{
//	int arr[1000];
//};
//int getData(bigData *bd)//bd  &bd *bd
//{
//	return bd->arr[0];  // .    .   ->
//}
//int main ()
//{
//	bigData bd={0};//c++����ǰ����struct
//	int i=0;
//	int start = 0;
//	int end = 0;
//	start=GetTickCount();
//	for(i=0;i<10000000;i++)
//	{
//		getData(&bd);//  bd  bd  &bd 
//	}
//	end=GetTickCount();
//	cout<<end-start<<endl;
//	system("pause");
//	return 0;
//}