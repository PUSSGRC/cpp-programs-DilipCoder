#include<iostream>
#include<iomanip>
using namespace std;
class employee
{
	char name[20];
	float income, tax;
	public: void setdata()
		{
			cout<<"Enter Employee Name"<<endl;
			cin>>name;
			cout<<"Enter Income"<<endl;
			cin>>income;
		}
		void payabletax()
		{
			if(income<=100000)
				tax=0;
			if(income>100000&&income<=150000)
				tax=(income-100000)/10;
			if(income>150000&&income<=200000)
				tax=(income-150000)/5;
			cout<<"Employee is "<<name<<"\t"<<"Tax payable="<<tax<<endl;
		}
};
int main()
{
	employee s;
	cout<<"This is a Program to calculate tax payable for an employee whose income is between 0 and 200000"<<endl;
	s.setdata();
	s.payabletax();
	return 0;
}
