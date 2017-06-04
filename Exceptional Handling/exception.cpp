#include<iostream>
#include<exception>

using namespace std;

class Array{
	int a[10];
	public:	int size, index;
	public:
		void setElements(int size);
		void getElement(int index);
	};

void Array::setElements(int size){
	cout<<"Enter the array element\n";
	for(int i=0; i<size; i++)
	cin>>a[i];
}

void Array::getElement(int index){
	cout<<a[index]<<endl;
	}

int main(){
	const char *msg="Array Exception";
	Array set1;
	cout<<"Enter size of Array";
	cin>>set1.size;
	set1.setElements(set1.size);
	cout<<"enter the index of array\n";
	cin>>set1.index;

	try{
		if((set1.index<0)||set1.index>set1.size)
			throw "Array out of bond";
		
		set1.getElement(set1.index);
		}
	
	catch(const char *msg){
		cerr<<msg<<endl;
		return 0;
	}
	return 0;
	}
