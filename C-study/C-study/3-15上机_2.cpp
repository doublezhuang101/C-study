/*2.下面是一个类的测试程序，请给出类的具体定义，构成一个完整的程序。
（3）	执行程序时的输出结果为：
200－60=140
（4）	主函数为：
int main( )
{
Test c;
c.init( 200,60);
c.print( ); 
}*/
#include <iostream>
using namespace std;
class Test
{
private:
	int a,b,c,result;
public:
	void init(int x,int y)
	{
		a=x;
		b=y;
		result=x-y;
	}
	void print()
	{
		cout<<a<<"-"<<b<<"="<<result;
	}
};
int main( )
{
	Test c;
	c.init( 200,60);
	c.print( );
	system("pause");
	return 0;
}