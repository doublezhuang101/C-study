/*���һ����������Box�����ܼ��㲢��������������ͱ������
(1)  ���幹�캯����ɳ�����ĳ�ʼ��
(2)  �󳤷���������
(3)  �󳤷���ı������
(4)  ���������������Ϣ��*/
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
		cout<<"��="<<chang<<"��="<<kuan<<endl;
	}
};

int main()
{
	Box square;
	square.display();
	cout<<"���="<<square.v ()<<endl;
	cout<<"���="<<square.s ()<<endl;
	
	system("pause");
}