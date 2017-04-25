//program to demonstrate cout keyword.

#include<iostream>
using namespace std;

//main function calling by os.

int main(int argc, char* argv[])

//execution of program start from here.
{			         	 
	if(argc==2)
		cout<<"Hello!"<<argv[1]<<"\n";   //printing output on console.
	else 
		cout<<"Hello,World\n";
	return 0; 
	//returning 0 to os in successfull execution.

}

//for running this programme use name of programe with a usrname or any name.
//this program is compatible for only one word name.
//for example: ./Hello Boss
