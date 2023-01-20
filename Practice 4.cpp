#include<iostream>
using namespace std;

class XHO {
protected:
int l;
int m;
public:
XHO() {
l = 5, m = 2;
}
XHO(int x, int y) {
l = y * x;
m = l - x;
cout << l + 1 << endl;
cout << m - 2 << endl;
}
~XHO() {
cout << "V M" << endl;
}
};

class HOX : public XHO
{
private:
int c;
public:
HOX() {
c = 4;
l = l * c;
}
HOX(int a, int b, int c) : XHO(a, b) {
cout << "S K" << endl;
}
~HOX() {
cout << "K Y" << endl;
}
};

class HXO : public XHO, public HOX
{
public:
HXO() {
cout << "S M" << endl;
}
HXO(float b) {
cout << b << endl;
}
~HXO() {
cout << "A Z" << endl;
}
};

int main()
{
HXO* h1 = new HXO(3.4);
HOX* h2 = new HOX();
cout << "Mid" << endl;
delete h1;
XHO* h3 = new XHO(-2, 5);
delete h3;
}