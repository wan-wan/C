#define  _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstdlib>
using namespace std;


//
//���������
//class Int
//{
//public:
//	Int(int d=0)
//	{
//		_Data=d;
//	}
//	Int operator+(Int m)
//	{
//		return Int(_Data-m._Data);
//	}
//public:
//	int _Data;
//};
//int main()
//{
//   Int a(3);
//   Int b(5);
//   Int c=a+b;
//   cout<<c._Data<<endl;
//   system("pause");
//   return 0;
//}




////��������
//class Array
//{
//public:
//	Array(int sz)
//	{
//		_sz=sz;
//       _ptr = (int*)malloc(sz*sizeof(int));
//	   if(_ptr==NULL)
//	   {
//		   cout<<"out of memory"<<endl;
//		   exit(EXIT_FAILURE);
//	   }
//	   int i=0;
//	   for(i=0;i<sz;i++)
//	   {
//		   _ptr[i]=i;
//	   }
//	}
//	~Array()//��������
//	{
//		if(_ptr!=NULL)
//		{
//			free(_ptr);
//		    _ptr=0;//ptrҪ����
//		}
//	}
//	void Display()
//	{
//		for(int i=0;i<_sz;i++)
//		{
//			cout<<_ptr[i]<<endl;
//		}
//	}
//
//private:
//	int* _ptr;
//	int _sz;
//};
//int main ()
//{
//	Array arr(10);
//	arr.Display();
//	system("pause");
//	return 0;
//}
//


//
////���캯��
//class Date
//{
//public:
//	//Ĭ�ϵĲ���ֻ�ܳ�����һ���ط�
//	Date()//Ĭ�ϵĹ��캯��
//	{}
//	/*~Data()
//	{
//	}*/
//	 //Date()//���캯��
//	 //{
//		// this->_year=2016;
//		// _month=10;
//		// _day=19;
//	 //}
//	 Date(int year,int month,int day )//���캯��������
//	 {
//        year=_year;
//		month=_month;
//		day=_day;
//	 }
//	void setDate()//void setDate(Date*this)//Ĭ�ϴ���
//	{
//		_year=1990;//this->_year
//		_month=12;//this->_month=12
//		_day=2;//this->_day=2
//		 //cout<<this<<endl;
//	}
//	void Display()//void Display(Date*this)
//	{
//		cout<<_year<<"��"<<_month<<"��"<<_day<<"��"<<endl;
//	}
//private:
//	int _year;
//	int _month;
//	int _day;
//};
//Date::Date(int year,int month,int day )//���캯���������������ⶨ��
//	 {
//        year=_year;
//		month=_month;
//		day=_day;
//	 }
//int main()
//{
//	//Date d3;
//	Date d1;
//	cout<<&d1<<endl;
//	//d1.setDate();
//	d1.Display();
//	//d3.Display();
//	system("pause");
//	return 0;
//}