/*2.������һ����Ĳ��Գ����������ľ��嶨�壬����һ�������ĳ���
��3��	ִ�г���ʱ��������Ϊ��
200��60=140
��4��	������Ϊ��
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