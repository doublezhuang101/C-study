#include<iostream>
using namespace std;
class Date
{
public:
	Date(int x=25, int y=3, int z=2015)
	{
		day = x;
		mounth = y;
		year = z;
	}
	void print() 
	{
		cout << year << "Äê" << mounth << "ÔÂ" << day << "ÈÕ" << endl;
	}
private:
	int day, mounth, year;
};

int main()
{
	Date da;
	da.print();
	cin.get();
	return 0;
}
