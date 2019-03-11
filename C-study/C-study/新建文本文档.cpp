//编写“一个”带有默认值参数的函数，用来计算2个或3个正整数的最大值，并在主函数中调用
#include<iostream>
using namespace std;
void MAX(int x=5, int y=10, int z=-1 )
{
	int a, b, c;
	c = z;
	a = (x > y) ? x : y;
	b = (a > z) ? a : z;
	cout << "三数最大值为" << b << endl;
}
void MAX(int x=5, int y=10)
{
	int a;
	a = (x > y) ? x : y;
	cout << "两数最大值为" << a << endl;
}
int main()
{
	int a[3],judge;
	cout << "请输入两个或三个数" << endl;
	cin >> judge;
	cout << endl;
	int i = 0;
	do
	{
		cin >> a[i];
		i++;
	} while (cin.get() != '\n');

	if (judge==2)
	{
		MAX(a[0], a[1]);
	}
	else
	{
		MAX(a[0], a[1], a[2]);
	}
	return 0;
}
