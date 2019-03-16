/*1.设计一个时钟类Clock。数据成员包括hour（小时）、minute（分钟）、second（秒）。要求用成员函数实现以下功能：
（1）	动态地设置时、分、秒。
（2）	在屏幕上按“时:分:秒”的格式显示时钟。
在主函数中测试该类。*/
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
	cout << hour << "时" << minute << "分" << second << "秒" << endl;
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