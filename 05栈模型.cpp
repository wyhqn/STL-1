#include<iostream>
using namespace std;
#include"stack"


//ջģ��
//վ���㷨 �� ջ�����������͵ķ����
void main51()
{
	stack<int> s;
	for(int i=0;i<10;i++)
	{
		s.push(i+1);
	}
	cout<<"ջ�Ĵ�С"<<s.size()<<endl;
	//��ջ
	while(!s.empty())
	{
		int temp=s.top();//��ȡջ��Ԫ��
		cout<<temp<<"  ";
		s.pop(); //����ջ��Ԫ��

	}
}

//Teacher ���
class Teacher
{
public:
	int age;
	char name[32];
public:
	void printT()
	{
		cout<<"age:"<<age<<endl;
	}
};
void main52()
{
	Teacher t1,t2,t3;
	t1.age=11;
	t2.age=22;
	t3.age=33;

	stack<Teacher> s;
		s.push(t1);
		s.push(t2);
		s.push(t3);

	while(!s.empty())
	{
		Teacher tmp=s.top();
			tmp.printT();
			s.pop();
	}
}

void main53()
{
	Teacher t1,t2,t3;
	t1.age=11;
	t2.age=22;
	t3.age=33;

	stack<Teacher*> s;
	s.push(&t1);
	s.push(&t2);
	s.push(&t3);

	while(!s.empty())
	{
		Teacher*tmp=s.top();
		tmp->printT();
		s.pop();
	}
}
int main()
{
	//main51();
	//main52();
	main53();
	system("pause");
	return 0;
}
