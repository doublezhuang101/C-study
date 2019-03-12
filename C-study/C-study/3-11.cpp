#include<iostream>
using namespace std;
class Time
{
private:
	int hour;
	int minute;
	int second;
public:
	Time(int h=10,int m=15,int s=20)
	{
		hour = h;
		minute = m;
		second = s;
	}
	void display();
};

void Time::display()
{
	cout << hour << "Ê±" << minute << "·Ö" << second << "Ãë" << endl;
}

int main()
{
	Time t1(12, 23, 45), t2(20, 45),t3;
	t1.display();
	t2.display();
	t3.display();
	system("pause");
	return 0;
}