/*设计一个三角形类，计算三角形的面积和周长，请编写一个面向对象的程序。要求用成员函数实现以下功能：
(1)  定义构造函数完成三角形的初始化；
(2)  求三角形的周长；
(3)  求三角形的面积；
(4)  输出三角形信息。*/
#include<iostream>
#include<math.h>
using namespace std;
class triangle
{
private:
	int a,b,c;
	int V;
	int S;
public:
	triangle(int x=3,int y=4,int z=5)
	{
		a=x;
		b=y;
		c=z;
	}
	int v()
	{
		double p;
		p=0.5*(a+b+c);
		double s;
		s=sqrt((p*(p-a)*(p-b)*(p-c)));
		return (s);
	}
	int s()
	{
		return(a+b+c);
	}
	void display()
	{
		cout<<"三边为"<<a <<b <<c <<endl;
	}
};

int main()
{
	triangle s;
	s.display();
	cout<<"体积="<<s.v ()<<endl;
	cout<<"面积="<<s.s ()<<endl;
	system("pause");
}