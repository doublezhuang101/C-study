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
	cout << "������ѧ��������Ϣ" << endl;
	cout << "ѧ��:";		cin >> number;		cout << endl;
	cout << "����:";		cin >> name;		cout << endl;
	cout << "Ӣ��ɼ�:";	cin >> EN_score;	cout << endl;
	cout << "C���Գɼ�:";	cin >> C_score;		cout << endl;
}

void Student::revise()
{
	cout << "�������޸ĵ�ѧ����Ϣ" << endl;
	cout << "ѧ��:";		cin >> number;		cout << endl;
	cout << "����:";		cin >> name;		cout << endl;
	cout << "Ӣ��ɼ�:";	cin >> EN_score;	cout << endl;
	cout << "C���Գɼ�:";	cin >> C_score;		cout << endl;
}

void Student::calculate()
{
	cout << "ƽ���ɼ�Ϊ" << (EN_score + C_score) / 2 << endl;
}

void Student::display()
{
	cout << "ѧ��������Ϣ����:" << endl;
	cout << "	ѧ��" << number << endl;
	cout << "	����" << name << endl;
	cout << "	Ӣ��ɼ�" << EN_score << endl;
	cout << "	C���Գɼ�" << C_score << endl;
}

int main()
{
	Student st1;
	st1.input();
	int choice;
	cout << "�Ƿ���Ҫ�޸�ѧ����Ϣ" << endl << "�޸��밴1�����޸��밴������" << endl;
	cin >> choice;
	switch (choice)
	{
	case 1:
		st1.revise();
	default:
		break;
	}
	st1.calculate();
	st1.display();
	system("pause");
	return 0;
}