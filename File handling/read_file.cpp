//a program for reading  multiple files.
#include<iostream> //header file for console input output.
#include<fstream> //header file for reading a file.
#include<cstdlib> //header file for exit function.
#include<string> //header file for getline function.
/***************************************************************************
 *there is no need of string header file for get function                  *
 *this is the difference between getline and get function in this program. *
 ***************************************************************************/
	using namespace std;
int main(int argc, char* argv[])
{	cout<<"multiple file opening for reading.\n";
	//creating input file stream object.
	ifstream infile;
	//checking proper syntax to run program;
	if(argc==1)
	{
		cerr<<"usage:"<<argv[1]<<"filename1"<<"filename2"<<"...";
		exit(EXIT_FAILURE);
	}
	//opening multiple file.
	for(int file_name=1; file_name<argc; file_name++)
	{	cout<<"******************************************\n";
		cout<<argv[file_name]<<"-- file content is:\n";
		//opening a file in read mode.
		infile.open(argv[file_name]);
	
		//checking of file health.
		if(!infile.is_open())
		{
			if(argc==2){
				cerr<<argv[file_name]<<"\t can not be opened,Try again."<<endl;
				exit(EXIT_FAILURE);
			}
			else{
				cout<<argv[file_name]<<"\t can not be opened\n"<<"skiped"<<endl;
				infile.clear();
				continue;
			}			
		}
		//reading file
		cout<<"reading file with get function\n";
		cout<<"***************************************\n";
		char ch;
		while(infile.get(ch))
			cout<<ch;

		cout<<"reading file with getline function\n";
		cout<<"***************************************\n";
		char  line[200];
		while(!infile.eof()) {
		infile.getline(line,sizeof(line));
		cout<<line;
		}
		//closing file.
		infile.clear();
		infile.close();
	}
	//finishing the program.
	cout<<"******************************\n";
	cout<<"\n Operation successful"<<endl;
	return 0;
}
