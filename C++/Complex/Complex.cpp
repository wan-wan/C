#define  _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;

#include"Complex.h"

int main()
{
	 Complex q;
	 Complex w(3.0,3.0);
	 /*Complex c=q*w;
	 Complex d=q*=w;*/
	 Complex e=q/w;
	 Complex f=q/=w;
	/* c.Display();
	 d.Display();*/
	 e.Display();
	 f.Display();
	// d.Display();
	//Complex:: operator-( q,  w);
	system("pause");
	return 0;
}