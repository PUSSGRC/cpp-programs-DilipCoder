#include<iostream>
#include<iomanip>
using namespace std;
int count=0;
class sample
{
	public:
	sample()
	{
		cout<<"constructer invoked"<<endl;
		count++;
		cout<<"current count="<<count<<endl;
	}
	~sample()
	{count--;}
};
int main()
{
	cout<<"control enters in main block"<<endl;
	sample obj1, obj2, obj3;
	return 0;
}
