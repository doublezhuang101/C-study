//���ջ����

//���ݶ��󣺴��Լ�ѧ�ſ�ʼ��������ȡ10λͬѧ

//����Ԫ�ذ������������ѧ�ţ��ɼ�

#include<iostream>
using namespace std;

const int MAXSIZE = 20;

typedef struct
{
	int number;
	int score;
	//��������Ԫ�ؽṹ��
}student;

typedef struct
{
	student* base;
	student* top;
	int stacksize;
	//����˳��ջ�ṹ��
}SequenStack;


int main()
{
	//���������й���ͨ�����ú���ʵ��
	SequenStack s;
	//����һ��ջ
	//��ʮ��ͬѧ��Ϣ��ջ
	//��ӡջ�ĳ���
	//�����������

	//��ջһ������Ԫ�أ������������Ԫ�ش�ӡ����
	//��ӡջ�ĳ���
	//�����������

	//��ջһ������Ԫ�أ��Լ�ѧ��-1��ͬѧ
	//��ӡջ�ĳ���
	//�����������
}

SequenStack* InitList(SequenStack &s)
{
	s.base = new student[MAXSIZE];

	//����洢�ռ�
}

int StackLength(SequenStack* S)
{
	//˳�������ЧԪ�صĳ���
}

int InitValue(SequenStack* S)
{
	//����Ԫ�ظ���ֵ
}

int Pop(SequenStack* S, elemtype* e)
{
	//����ջ��Ԫ�أ�������e�С�

}

int Push(SequenStack* S, elemtype* e)
{
	//������Ԫ��e��ջ��

}