#include<iostream>
using namespace std;
class Rectangle
{
private:
	double length, width, area;
public:
	void setdata()
	{
		cin >> length >> width;
	}
	void getarea()
	{
		area = length * width;
	}
	int perimeter()
	{
		return ((length + width) * 2);
	}
	void outdata()
	{
		cout << "长为" << length << "宽为" << width << "的矩形面积是:" << area << endl << "周长是:" << perimeter() << endl;
	}
};
int main()
{
	Rectangle s1;
	s1.setdata();
	s1.getarea();
	s1.outdata();
	cin.get();
	system("pause");
	return 0;
}
