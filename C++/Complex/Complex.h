#define  _CRT_SECURE_NO_WARNINGS

class Complex
{
public:
	Complex( double real,double image );
	~Complex()
	{
		cout<<"xg"<<endl;
	}
	Complex operator+(Complex c);
	Complex operator-(Complex c);
	Complex operator*(Complex c);
	Complex operator/(Complex c);
	Complex operator+=(Complex c);
	Complex operator-=(Complex c);
	Complex operator*=(Complex c);
	Complex operator/=(Complex c);
	void Display()
	{
		if(0==_image)
		{
			cout<<_real<<endl;
		}
		else if(_image<0)
		{
			cout<<_real<<_image<<"i"<<endl;
		}
		else
		{
			cout<<_real<<"+"<<_image<<"i"<<endl;
		}
	}
private:
	double _real;
	double _image;
};
Complex::Complex(double  a=5.0,double b=2.0)//¸´Êý
{
	_real=a;
	_image=b;
}
Complex Complex:: operator+(Complex c)
{
	Complex tmp;
	tmp._real=_real+c._real;
	tmp._image=_image+=c._image;
	return tmp;
}
Complex Complex::operator-(Complex c)
{
	Complex tmp;
	tmp._real=_real-c._real;
	tmp._image=_image-c._image;
	return tmp;
}
Complex Complex::operator*(Complex c)
{
	Complex tmp;
	tmp._real=(_real*c._real)-(_image*c._image);
	tmp._image=(_real*c._image)+(c._real*_image);
	return tmp;
}
Complex Complex:: operator/(Complex c)
{
	Complex tmp;
	tmp._real=(((_real*c._real)-( _image*(-c._image)))/((c._real*c._real)+(c._image*c._image)));
	tmp._image=(((_real*(-c._image))+(c._real*_image))/((c._real*c._real)+(c._image*c._image)));
	return tmp;
}
Complex Complex:: operator+=(Complex c)
{
	_real+=c._real;
	_image+=c._image;
	return *this;
}
Complex Complex:: operator-=(Complex c)
{
	_real-=c._real;
	_image-=c._image;
	return *this;
}
Complex Complex:: operator*=(Complex c)
{
	Complex a(*this);
	 _real=(a._real*c._real)-(a._image*c._image);
	 _image=(a._real*c._image)+(c._real*a._image);
	return *this;
}
Complex  Complex::operator/=(Complex c)
{
	 Complex a(*this);
	 _real=(((a._real*c._real)-( a._image*(-c._image)))/((c._real*c._real)+(c._image*c._image)));
	 _image=(((a._real*(-c._image))+(c._real*a._image))/((c._real*c._real)+(c._image*c._image)));
	 return *this;
}