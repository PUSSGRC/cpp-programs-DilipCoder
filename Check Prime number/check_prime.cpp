#include<iostream>
using namespace std;
int main()
{
	int a;
	char found='a';
	cout<<"Enter a positive Integer"<<endl;
	cin>>a;
	for(int i=2;i<a;i++)
	{
		if(a%i==0)
		{
			cout<<"Entered Number is not prime"<<endl;
			found='y';
			break;
		}
	}
	if(found=='a')
		cout<<"Entered Number is prime"<<endl;
	return 0;
}
