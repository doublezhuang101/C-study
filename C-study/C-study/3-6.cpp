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
	cout << "请输入学生基本信息" << endl << "学号:";	cin >> number;
	cout << "姓名:";		cin >> name;
	cout << "英语成绩:";	cin >> EN_score;
	cout << "C语言成绩:";	 cin >> C_score;
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