#include<iostream>
using namespace std;
void quick_sork(long long* a, int l, int r);
int main()
{
	int i;
	long long a[50];
	int n;
	cin >> n;
	for (i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	void quick_sort(long long a[], int l, int r);
	for (i = 0; i < n; i++)
		cout << a[i];
	system("pause");
	return 0;
}
void quick_sork(long long* a, int l, int r)
{
	if (l < r)
	{
		int i, j, x;
		i = l;
		j = r;
		x = a[i];
		while (i<j)
		{
			while (i<j&&a[j]>x)
				j--;
			if (i < j)
				a[i++] = a[j];
			while (i < j&&a[i] < x)
				i++;
			if (i < j)
				a[j--] = a[i];
		}
		a[i] = x;
		quick_sork(a, l, i - 1);
		quick_sork(a, i + 1, j);
	}
}
