#include<iostream>
#include<iomanip>
using namespace std;
class two;
class one
{
	int a;
	public: void setdata(int x)
		{
			a=x;
		}
		void showdata()
		{
			cout<<"one::a="<<a<<endl;
		}
		friend int addboth(one,two);
};
class two
{
	int b;
	public: void setdata(int y)
		{
			b=y;
		}
		void showdata()
		{
			cout<<"two::b="<<b<<endl;
		}
		friend int addboth(one,two);
};
int addboth(one r, two s)
{
	return(r.a+s.b);
}
int main()
{
	int result;
	one aa;
	two bb;
	aa.setdata(10);
	aa.showdata();
	bb.setdata(20);
	bb.showdata();
	result=addboth(aa,bb);
	cout<<"sum of a and b is "<<result<<endl;
}
