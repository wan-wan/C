 #include<iostream>
using namespace std;
class Date
{
public:
	//Date()           //�޲Σ�Ĭ�Ϲ��캯����
	//{}
	Date(int year=1990,int month=1 ,int day=1)//����
		:_year(year)
		,_month(month)
		,_day(day)
	{}
	~Date()
	{}//����
	Date(Date& d)
	{
		_year=d._year;
		_month=d._month;
		_day=d._day;
	}
	Date &operator=(const Date & d)//��ֵ���������
	{
		if(this !=&d)
		{
			_year=d._year;
			_month=d._month;
			_day=d._day;
			return  *this;
		}
	}
	int GetMonthDays(int year,int month)
	{
		static int MonthDays[]={0,31,28,31,30,31,30,31,31,30,31,30,31};
		if(month != 2)//
		{
			return MonthDays[month];
		}
		else if (((year%4==0)&& (year%100!=0)) ||(year%400==0))
			return 28;
		else
			return 29;
		 
	}
	bool IsInvalid()
	{
		if(_year>=1800 && 
			(_month>0 && _month<13)&&  
			(_day>0 && _day <GetMonthDays(_year,_month)))
		{
			cout<<"true"<<endl;
			return true;
		}
		return false;
	}
	void Disply()    //���
	{
	cout<<_year<<" "<<_month<<" "<<_day<<endl;
	}
private:
	int _year;
	int _month;
	int _day;

};
void test()
{
	Date d1;
	Date d2(2017,2,30);
	Date d3(d1);            //����Date���͵�d3��d3��������d1,���Ѿ��еĶ��󴴽�һ���µĶ���
	d1.Disply();
	d2.Disply();
	d3.Disply();
	bool ret=d2.IsInvalid();
	cout<<ret<<endl;
	d2.operator=(d1);
	d2.Disply();
}
 