#include<iostream>
using namespace std;
class Date
{
public:
	Date(int d,int m,int y):day(d),mounth(m),year(y){}
	void print();
private:
	int day, mounth, year;
};
void Date::print()
{
	cout << year << "Äê" << mounth << "ÔÂ" << day << "ÈÕ" << endl;
}
int main()
{
	Date da(25,3,2015);
	da.print();
	cin.get();
	return 0;
}
