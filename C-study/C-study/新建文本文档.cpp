//��д��һ��������Ĭ��ֵ�����ĺ�������������2����3�������������ֵ�������������е���
#include<iostream>
using namespace std;
void MAX(int x=5, int y=10, int z=-1 )
{
	int a, b, c;
	c = z;
	a = (x > y) ? x : y;
	b = (a > z) ? a : z;
	cout << "�������ֵΪ" << b << endl;
}
void MAX(int x=5, int y=10)
{
	int a;
	a = (x > y) ? x : y;
	cout << "�������ֵΪ" << a << endl;
}
int main()
{
	int a[3],judge;
	cout << "������������������" << endl;
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
