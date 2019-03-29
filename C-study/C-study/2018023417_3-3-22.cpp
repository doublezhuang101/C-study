#include <iostream>
#include <Cmath>
using namespace std;
class CFraction
{
private:
	int nume; 
	int deno;  
public:
	CFraction(int nu = 0, int de = 1) :nume(nu), deno(de) {}
	friend istream &operator>>(istream &in, CFraction &x);
	friend ostream &operator<<(ostream &out, CFraction x);

	CFraction operator+(const CFraction &c);  
};


istream &operator>>(istream &in, CFraction &x)
{
	char ch;
	while (1)
	{
		cin >> x.nume >> ch >> x.deno;
		if (x.deno == 0)
			cout << "��ĸΪ0, ����������\n";
		else if (ch != '/')
			cout << "��ʽ��������m/n��! ����������\n";
		else
			break;
	}
	return cin;
}

ostream &operator<<(ostream &out, CFraction x)
{
	cout << x.nume << '/' << x.deno;
	return cout;
}

CFraction CFraction::operator+(const CFraction &c)
{
	CFraction t;
	t.nume = nume * c.deno + c.nume*deno;
	t.deno = deno * c.deno;
	return t;
}


int main()
{
	CFraction x, y, s;
	cout << "����x: ";
	cin >> x;
	cout << "����y: ";
	cin >> y;
	cout << "x+y=" << x+y << endl;
	return 0;
}
