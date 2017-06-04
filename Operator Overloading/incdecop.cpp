#include<iostream>
using namespace std;
int counterval=0;
class counter
{
	public:
	void operator ++()
	{
		++counterval;
	}
	void operator ++(int)
	{
		counterval++;
	}
	void operator --()
	{
		--counterval;
	}
	void operator --(int)
	{
		counterval--;
	}
	void showdata()
	{
		cout<<"counter="<<counterval<<endl;
	}
};
int main()
{
	counter count;
	++count;
	count.showdata();
	count++;
	count.showdata();
	--count;
	count.showdata();
	count--;
	count.showdata();
	return 0;
}
