/*���һ���������࣬���������ε�������ܳ������дһ���������ĳ���Ҫ���ó�Ա����ʵ�����¹��ܣ�
(1)  ���幹�캯����������εĳ�ʼ����
(2)  �������ε��ܳ���
(3)  �������ε������
(4)  �����������Ϣ��*/
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
		cout<<"����Ϊ"<<a <<b <<c <<endl;
	}
};

int main()
{
	triangle s;
	s.display();
	cout<<"���="<<s.v ()<<endl;
	cout<<"���="<<s.s ()<<endl;
	system("pause");
}