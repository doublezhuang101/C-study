#include <iostream>
using namespace std;
class A
{
public:
	A(int i=0,int j=0):m(i),n(j){}
	~A();
	friend A operator+(A& a, A& b);
	friend ostream& operator<<(ostream& out, A& a);
	friend ostream& operator<<(ostream& out, A& a);
	friend istream& operator>>(istream& in, A& a);
private:
	int m, n;
};

A::~A()
{
}

A operator+(A& a,A& b)
{
	A c;
	c.m = a.m + b.m;
	c.n = a.m + b.m;
	return c;
}

istream& operator >>(istream& in, A& a)
{
	in >> a.m >> a.n;
	return in;
}

ostream& operator<<(ostream& out, A& a)
{
	out << a.m << ' ' << a.m;
	cout << endl;
	return out;
}

int main()
{
	A a1(3), a2 = a1, a3(5);
	cin >> a1 >> a2;
	a3 = a1 + a2;
	cout << a3;
	a3 = 3.5;
	cout << a3;
	return 0;
}