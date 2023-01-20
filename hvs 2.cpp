#include<iostream>
using namespace std;

class one{
	public:
		one()
		{
			cout<<"\nConstructor abc";
		}
		one(int a)
		{
			cout<<"\n Constructor 1";
			}
};

class two: public one{
	public:
		two()
		{
			cout<<"ABC";
			}
		two(int b)
		{
			cout<<"\n Constructor 2";
			}
};

int main()
{
	two c(10);
	return 0;
}