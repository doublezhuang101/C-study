//��д��һ��������Ĭ��ֵ�����ĺ�������������2����3�������������ֵ�������������е���
#include<iostream>
using namespace std;
void MAX(int x=5, int y=10, int z=-1 )
{
	int a, b,c;
	c = z;
	a = (x > y) ? x : y;
	b = (a > z) ? a : z;
	/*if (c = -1)
		cout << "�������ֵΪ" << a << endl;
	else*/
		cout << "�������ֵΪ" << b << endl;
}
int main()
{
	int a[3];
	cout << "������������������" << endl;
	int i = 0;
	do
	{
		cin >> a[i];
		i++;
	} while (cin.get()!='\n');
	MAX(a[0], a[1], a[2]);
	system("pause");
	return 0;
}