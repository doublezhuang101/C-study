/*设计一个长方体类Box，它能计算并输出长方体的体积和表面积。
(1)  定义构造函数完成长方体的初始化
(2)  求长方体的体积；
(3)  求长方体的表面积；
(4)  输出长方体的相关信息。*/
#include<iostream>
using namespace std;
class Box
{
private:
	int chang;
	int kuan;
	int V;
	int S;
public:
	Box(int x=10,int y=20)
	{
		chang=x;
		kuan=y;
	}
	int v()
	{
		return (chang*kuan);
	}
	int s()
	{
		return((chang+kuan)*2);
	}
	void display()
	{
		cout<<"长="<<chang<<"宽="<<kuan<<endl;
	}
};

int main()
{
	Box square;
	square.display();
	cout<<"体积="<<square.v ()<<endl;
	cout<<"面积="<<square.s ()<<endl;
	
	system("pause");
}