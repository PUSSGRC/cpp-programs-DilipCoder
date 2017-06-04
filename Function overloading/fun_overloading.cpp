#include<iostream>
using namespace std;

class AddNum
{
public:
	int a,b,sum1;
	float c,d,sum2;

public:
	void getdata()
	{
		cout<<"enter the value of a and b(integer only):";
		cin>>a>>b;
		cout<<endl;
		cout<<"---------------------------------------"<<endl;
		cout<<"enter the value of c and d(float only):";
		cin>>c>>d;
		cout<<endl;
	}
	void showdata()
	{
		cout<<"sum of integer number="<<sum1<<endl;
		cout<<"sum of float number="<<sum2<<endl;
	}
	void add(int a, int b)
	{
	 sum1=a+b;
	}
	void add(float c, float d)
	{
	 sum2=c+d;
	}
};

int main()
{
AddNum obj;
obj.getdata();
obj.add(obj.a,obj.b);
obj.add(obj.c,obj.d);
obj.showdata();
return 0;
}
