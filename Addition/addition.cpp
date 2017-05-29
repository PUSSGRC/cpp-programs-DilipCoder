//taking two integer as input from keyboard and performing addition.

#include<iostream>	//header file for standard input ouput stream.
using namespace std; 

/*************************************************************************
in oop classes are use as a separate concept or blueprint of a object.
try to keep data members as private for security reasion.
make an interface for that class using function.
**************************************************************************/

class numbers{
	int num1,num2,result;
	public:
		void setdata();
		int sum();
	};

//its definition of class member function.
void numbers::setdata(){
	   cout<<"Enter the Two numbers.\n";
	   cin>>num1>>num2;
	}

//its definition of class member function.
int numbers::sum(){
	result=num1+num2;
	return result;
	}
 
int main()	//main function which is called 1st.
{
	numbers set1;   //instantiation of object set1.
	set1.setdata();		//performing operations through class interface.
	cout<<"the sum is:"<<set1.sum()<<endl;
	return 0;
}	

//here although many methods available, rather main function will be called firstly.
