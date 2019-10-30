//完成栈程序：

//数据对象：从自己学号开始往后数，取10位同学

//数据元素包含两个数据项：学号，成绩

#include<iostream>
using namespace std;

const int MAXSIZE = 20;

typedef struct
{
	int number;
	int score;
	//定义数据元素结构体
}student;

typedef struct
{
	student* base;
	student* top;
	int stacksize;
	//定义顺序栈结构体
}SequenStack;


int main()
{
	//主程序，所有功能通过调用函数实现
	SequenStack s;
	//定义一个栈
	//将十个同学信息入栈
	//打印栈的长度
	//输出所有数据

	//出栈一个数据元素，并将这个数据元素打印出来
	//打印栈的长度
	//输出所有数据

	//入栈一个数据元素（自己学号-1）同学
	//打印栈的长度
	//输出所有数据
}

SequenStack* InitList(SequenStack &s)
{
	s.base = new student[MAXSIZE];

	//分配存储空间
}

int StackLength(SequenStack* S)
{
	//顺序表中有效元素的长度
}

int InitValue(SequenStack* S)
{
	//数据元素赋初值
}

int Pop(SequenStack* S, elemtype* e)
{
	//弹出栈顶元素，并放入e中。

}

int Push(SequenStack* S, elemtype* e)
{
	//将数据元素e入栈。

}