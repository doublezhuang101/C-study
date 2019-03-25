#include<iostream>
#define pi 3.14159265
using namespace std;
class cylinder
{
public:
	cylinder(int r, int h);
	~cylinder();
	void display();
private:
	int R;
	int H;
	double v;
};

cylinder::cylinder(int r=1, int h=10)
{
	R = r;
	H = h;
}

cylinder::~cylinder()
{
}

void cylinder::display()
{
	v = pi * R*R*H;
	cout << "半径为" << R << " 高为" << H << " 体积为" << v << endl;
}
int main()
{
	cylinder c1;
	c1.display();
	return 0;
}