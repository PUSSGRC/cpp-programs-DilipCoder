#include<iostream>
using namespace std;
class x
{
	protected:
	char name[20];
	int age;
	public:
};
class y:public x
{
	int weight;
	public:
	void getdata()
	{
		cout<<"Enter name"<<endl;
		cin>>name;
		cout<<"Enter age"<<endl;
		cin>>age;
		cout<<"Enter weight"<<endl;
		cin>>weight;
	}
	void showdata()
	{
		cout<<"Name\t"<<name<<"\nAge\t"<<age<<"years\nweight\t"<<weight<<"kg"<<endl;
	}
};
int main()
{
	y obj;
	obj.getdata();
	obj.showdata();
	return 0;
}
