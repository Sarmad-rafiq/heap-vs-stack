#include<iostream>
using namespace std;

class B
{
public:
B()
{
cout << "89" << endl;
}
B(int a)
{
cout << "76" << endl;
}
B(int a, int b)
{
cout << "35" << endl;
}
B(char v)
{
cout << "58" << endl;
}
~B()
{
cout << "00" << endl;
}
};
int main()
{
B b1(3, 8);
B* b2 = new B(9);
B* b3 = new B(9, 3);
delete b2;
B b4;
delete b3;
B b5;
}