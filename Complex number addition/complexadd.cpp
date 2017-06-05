#include<iostream>
#include<iomanip>
using namespace std;
class complexnumber
{
	float realpart, imgpart;
	public: void setcomplexno(float real, float img)
		{
			realpart=real;
			imgpart=img;
		}
		void displaycomplexno()
		{
			cout<<realpart<<"+"<<imgpart<<"i"<<endl;
		}
		void addcomplexno(complexnumber n1, complexnumber n2)
		{
			realpart=n1.realpart+n2.realpart;
			imgpart=n1.imgpart+n2.imgpart;
		}
};
int main()
{
	complexnumber n1, n2, n3;
	n1.setcomplexno(12,2.5);
	n2.setcomplexno(2.7,3.2);
	n3.addcomplexno(n1, n2);
	n3.displaycomplexno();
	return 0;
}
