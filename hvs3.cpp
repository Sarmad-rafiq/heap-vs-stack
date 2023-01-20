#include<iostream>
using namespace std;

class XHO {
protected:
int x ;
float y;
public:
XHO() {
 x = 5;
 y = 5.3;
cout << x + y << endl;
}
XHO(int a, float b) {
y = b;
cout << a * 2 << endl;
cout << y - b << endl;
}
~XHO() {
cout << "M J" << endl;
}
};
class OHX : public XHO
{
public:
OHX() {
cout << x + 2 << endl;
}
OHX(int a, int b, float c) : XHO(b, c) {
cout << a + b + c << endl;
}
~OHX() {
cout << "D S" << endl;
}
};
class HXO : public XHO, public OHX
{
public:
HXO() {
cout << 3 * 2 << endl;
}
HXO(int b) {
cout << b * 2 - 3 << endl;
}
~HXO() {
cout << "Y T" << endl;
}
};
int main()
{
XHO* h1 = new XHO(8, 8.1);
cout << "Mid" << endl;
HXO* h2 = new HXO(8);
OHX* h3 = new OHX(1, 2, 3.4);
delete h3;
}