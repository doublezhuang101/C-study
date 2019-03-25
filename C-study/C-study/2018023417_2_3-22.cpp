#include<iostream>
#include<string>
using namespace std;
class jz
{
public:
	jz() {};
	friend jz operator+(const jz &a, const jz &b);   //friend
	friend ostream &operator<<(ostream &, jz &);
	friend istream &operator>>(istream &, jz &);
	jz(int a, int b, int c, int d, int e, int f)
	{
		d1 = a;
		d2 = b;
		d3 = c;
		d4 = d;
		d5 = e;
		d6 = f;
	}
private:
	int d1, d2, d3, d4, d5, d6;
};
istream &operator>>(istream &is, jz &c);
ostream &operator<<(ostream &os, jz &c);
ostream & operator<<(ostream &output, jz &c)
{
	output << c.d1 << " "
		<< c.d2 << " "
		<< c.d3 << endl;
	cout << c.d4 << " "
		<< c.d5 << " "
		<< c.d6 << endl;
	return output;
}

istream & operator>>(istream &input, jz &c)
{
	input >> c.d1 >> c.d2 >> c.d3 >> c.d4 >> c.d5 >> c.d6;
	return input;
}

jz operator+(const jz &a, const jz &b)
{
	int a1 = a.d1 + b.d1;
	int a2 = a.d2 + b.d2;
	int a3 = a.d3 + b.d3;
	int a4 = a.d4 + b.d4;
	int a5 = a.d5 + b.d5;
	int a6 = a.d6 + b.d6;
	return jz(a1, a2, a3, a4, a5, a6);
}

int main()
{
	jz a, b, c;
	cin >> a;
	cin >> b;
	c = a + b;
	cout << c << endl;
	return 0;
}