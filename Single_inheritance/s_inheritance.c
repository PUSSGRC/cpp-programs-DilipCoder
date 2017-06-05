#include<iostream>

using namespace std;

class B
{
public:	int a;
	int b;
	void get_ab();
	int get_a(void);
	void show_a(void);
};

class D: public B
{
public:	int c;
	void mul(void);
	void display();
};

void B::get_ab(){
a=9; b=8;
}
int B::get_a()
{
 return a;
}
void B::show_a()
{
cout<<"a="<<a<<"\n";
}
void D::mul()
{
	c=a*get_a();
}
void D::display()
{
	show_a();
	cout<<"b = "<<b<<endl;
	cout<<"c = "<<c<<endl;
}

int main()
{
D d;
d.get_ab();
d.mul();
d.show_a();
d.display();
d.b = 20;
d.mul();
d.display();
return 0;
}
