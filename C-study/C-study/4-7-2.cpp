#include <iostream>
#include<math.h>
using namespace std;
class Line
{
public:
	Line(int a=0, int b=0, int c=0, int d=0) :x1(a), y1(b), x2(c), y2(d){}
	~Line();
	float distance();
	void out();
private:
	int x1, y1;
	int x2, y2;
};

Line::~Line()
{
}

float Line::distance()
{
	float temp;
	temp = sqrt(pow((x1 - x2), 2) + pow((y1 - y2), 2));
	return temp;
}

void Line::out()
{
	cout << "a(" << x1 << "," << y1 << ")" << endl;
	cout << "b(" << x2 << "," << y2 << ")" << endl;
}
int main()
{
	Line a(1, 0, 2, 0);
	float disc;
	disc = a.distance();
	cout << "线段长度为:" << disc << endl;
	a.out();
	return 0;
}