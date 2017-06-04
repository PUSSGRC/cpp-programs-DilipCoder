#include<fstream>
#include<iostream>

using namespace std;

int main(){
	char filename[30];
	char data[200];
	cout<<"Enter file name";
	cin>>filename;
	
	ofstream outfile;
	outfile.open(filename);
	if(outfile.fail())
		cout<<"unable to open file\n";

	ifstream infile;
	infile.open("copy.txt");
	if(infile.fail())
		cout<<"unable to open file\n";
	while(!infile.eof()){
		infile>>data;
		outfile<<data;
		}
	
	infile.close();
	outfile.close();
	return 0;
}

