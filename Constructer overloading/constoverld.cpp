#include<iostream>
#include<iomanip>
using namespace std;
class complexno
{
	float realpart, imgpart;
	public:
	complexno()
	{
		realpart=10.5;
		imgpart=6.5;
	}
	complexno(float real, float img)
	{
		realpart=real;
		imgpart=img;
	}
	complexno(complexno &cn)
	{
		realpart=cn.realpart;
		imgpart=cn.imgpart;
	}
	void display()
	{
		cout<<realpart<<"+i"<<imgpart<<endl;
	}
};
int main()
{
	complexno first;
	first.display();
	complexno second(10.5,6.5);
	second.display();
	complexno third(second);
	third.display();
	return 0;
}
