#pragma once
//（1）学生成绩的录入。
//（2）学生成绩的删除。
//（3）学生成绩的修改。
//（4）学生成绩的全部显示。
//（5）平均成绩的计算。
//（6）学生成绩的查询（按学号、姓名、性别等方式）。
//（7）按一科成绩排序。
//（8）退出系统。

class StudentMenu
{
public:
	StudentMenu();
	~StudentMenu();
	void scoreTypein();
	void scoreDelete();
	void scoreRevise();
	void dateDisplay();
	void averageScore();
	void scoreSearchmenu();
	void scoreRank();
	void exit();
};

