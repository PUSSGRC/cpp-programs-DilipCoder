#include<iostream>
#include<cstdlib>
	using namespace std;
int main()
{
int  num[3];
	
 level1:for(int i=1; i<4; i++){
		cout<<"enter num"<<i<<":"<<endl;
		cin>>num[i];
		}
	int largest= num[1]>num[2]?(num[1]>num[3]?num[1]:num[3]):(num[2]>num[3]?num[2]:num[3]);
	cout<<"largest number among three numbers is:"
	    <<largest<<endl;
	cout<<"wants to judge another numbers(y/n):";
	char test;
	cin>>test;
	if(test=='Y' || test=='y')
		goto level1;
	return 0;
}
		
