//this is simple example which  is demonstration about 
//how to declare, initialise, and archieve an array.
#include<iostream>
	using namespace std;

int main()
{
	 //declaration of array.
       int num[]={1,2,3,4,5,6,7,8,9,10}; //initialization of array.
	cout<<"geting elements of array"<<endl;
	cout<<"printing elements of array"<<endl; //archieving Array elements.
	for(int i=0; i<10; i++)
		cout<<num[i]<<endl;
	return 0;
}
