#define  _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;

int main()
{
	//��ͬ���͵�ת����double���͵�e������һ��int���͵ı���
	//���м����һ����������ʱ����refe���õ��������ʱ����
	double e=1.2;
	const int &refe=e;//refe����e�����ã�ȡ��ַrefe��e����ͬһ��ռ䡣
	//Ȩ�޿�����С�������ܷŴ�
	/*const int a=10;
	int &refa=a;*/
	/*int b=20;
	const int &refb=b;
	const int &refc=5;*///right
	//int & refc=5;//error:5�����Ըı䣬refc���Ըı䣬Ȩ�ޱ��
	system("pause");
	return 0;
}