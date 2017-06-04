#include<iostream>
#include<iomanip>
using namespace std;
class complexno
{
	float realpart, imgpart;
	public:
	complexno(float real, float img)
	{
		realpart=real;
		imgpart=img;
	}
	void display()
	{
		cout<<realpart<<"+i"<<imgpart<<endl;
	}
};
int main()
{
	complexno obj(10.5,6.5);
	obj.display();
	return 0;
}
