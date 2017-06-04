#include<iostream>
using namespace std;

class vehicle{
	char *name;
	int vehicleId;
	short int wheelNo;
	string color;
	public:
	vehicle(short int b)
		{
	wheelNo=b;
	}
	void Color()
		{
	color="red";
	}
	void display()
	{
	cout<<wheelNo<<"\t"<<color<<endl;
	}
	~vehicle(){cout<<wheelNo<<"\t"<<color<<endl;}
};
int main(){
	vehicle twoWheeler(2),fourWheeler(4);
	twoWheeler.Color();
	fourWheeler.Color();
	twoWheeler.display();
	fourWheeler.display();
	return 0;
}
