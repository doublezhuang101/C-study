#include<iostream>
int main()
{
	using namespace std;
	int carrots;
	cout << "how many carrots do you have ?" << endl;
	cin >> carrots;
	cout << "now you have two more." << endl;
	carrots = carrots + 2;
	cout << " i have " << carrots << " now" << endl;
	cin.get();
	system("pause");
	return 0;
}