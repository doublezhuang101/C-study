/*1.���һ��ʱ����Clock�����ݳ�Ա����hour��Сʱ����minute�����ӣ���second���룩��Ҫ���ó�Ա����ʵ�����¹��ܣ�
��1��	��̬������ʱ���֡��롣
��2��	����Ļ�ϰ���ʱ:��:�롱�ĸ�ʽ��ʾʱ�ӡ�
���������в��Ը��ࡣ*/
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
	cout << hour << "ʱ" << minute << "��" << second << "��" << endl;
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