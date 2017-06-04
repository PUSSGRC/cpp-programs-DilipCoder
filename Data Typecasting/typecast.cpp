#include<iostream>
using namespace std;
class complexno
{
	int a;
	public:
	complexno(int x)
	{
		a=x;
	}
	void showdata()
	{
		cout<<"Number is "<<a<<endl;
	}
};
int main()
{
	complexno c1;
	int x=5;
	c1=x;
	c1.showdata();
	return 0;
}
