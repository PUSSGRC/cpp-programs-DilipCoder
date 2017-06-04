#include<iostream>
using namespace std;
int main()
{
	int num;
	cout<<"Enter the Number"<<endl;
	cin>>num;
	if(num>0)
	{
		cout<<"Number is positive";
		if(num%2==0)
			cout<<" and even"<<endl;
	}
	else
		cout<<"Number is negative";
	return 0;
}
