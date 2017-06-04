#include<iostream> //header file for input/output stream.
#include<iomanip> //header file for ios flags.
	using namespace std;
//it's not correct
int main()
{
	int test;
	cin>>test;
	cout<<setiosflags(ios::showbase);
	cout<<test<<endl;
	cout<<setiosflags(ios::hex);
	cout<<"hexadecimal:"<<test<<endl;
	cout<<setiosflags(ios::oct);
	cout<<"octal::"<<test<<endl;
return 0;
}
