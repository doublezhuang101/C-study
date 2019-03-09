//模仿书p61例3 - 7编写程序：用面向对象的方法实现学生成绩基本信息（学号、姓名、英语成绩、C语言成绩）的输入、修改、计算平均分及输出功能。在主函数中进行测试。
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
	cout << "请输入学生基本信息" << endl;
	cout << "学号:";		cin >> number;		cout << endl;
	cout << "姓名:";		cin >> name;		cout << endl;
	cout << "英语成绩:";	cin >> EN_score;	cout << endl;
	cout << "C语言成绩:";	cin >> C_score;		cout << endl;
}

void Student::revise()
{
	cout << "请输入修改的学生信息" << endl;
	cout << "学号:";		cin >> number;		cout << endl;
	cout << "姓名:";		cin >> name;		cout << endl;
	cout << "英语成绩:";	cin >> EN_score;	cout << endl;
	cout << "C语言成绩:";	cin >> C_score;		cout << endl;
}

void Student::calculate()
{
	cout << "平均成绩为" << (EN_score + C_score) / 2 << endl;
}

void Student::display()
{
	cout << "学生基本信息如下:" << endl;
	cout << "	学号" << number << endl;
	cout << "	姓名" << name << endl;
	cout << "	英语成绩" << EN_score << endl;
	cout << "	C语言成绩" << C_score << endl;
}

int main()
{
	Student st1;
	st1.input();
	int choice;
	cout << "是否需要修改学生信息" << endl << "修改请按1，不修改请按其他键" << endl;
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