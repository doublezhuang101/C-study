//ģ����p61��3 - 7��д�������������ķ���ʵ��ѧ���ɼ�������Ϣ��ѧ�š�������Ӣ��ɼ���C���Գɼ��������롢�޸ġ�����ƽ���ּ�������ܡ����������н��в��ԡ�
#include<iostream>
#include<string>
using namespace std;
class Student
{
public:
	void input();
	void revise();
	void calculate();
	void display();
private:
	long int number;
	string name;
	int EN_score;
	int C_score;
};

void Student::input()
{
	cout << "������ѧ��������Ϣ" << endl << "ѧ��:";	cin >> number;
	cout << "����:";		cin >> name;
	cout << "Ӣ��ɼ�:";	cin >> EN_score;
	cout << "C���Գɼ�:";	 cin >> C_score;
}

void Student::revise()
{

}

void Student::calculate()
{

}
void Student::display()
{

}