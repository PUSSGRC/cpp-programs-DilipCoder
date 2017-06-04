#include<iostream>
using namespace std;
class A
{
	public:
	void showA()
	{
		cout<<"class A"<<endl;
	}
};
class X:virtual public A
{
	public:
	void showX()
	{
		cout<<"class X"<<endl;
	}
};
class Y:virtual public A
{
	public:
	void showY()
	{
		cout<<"class Y"<<endl;
	}
};
class B:public X,public Y
{
	public:
	void showB()
	{
		cout<<"class B"<<endl;
	}
};
int main()
{
	B obj;
	obj.showA();
	obj.showX();
	obj.showY();
	obj.showB();
	return 0;
}
