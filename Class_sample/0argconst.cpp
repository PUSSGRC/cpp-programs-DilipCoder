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
	void display()
	{
		cout<<realpart<<"+i"<<imgpart<<endl;
	}
};
int main()
{
	complexno obj;
	obj.display();
	return 0;
}
