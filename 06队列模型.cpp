#include<iostream>
using namespace std;
#include<queue> //�Ƚ��ȳ�

//�����л���������

void main61()
{
	queue<int> q;
	q.push(1);
	q.push(2);
	q.push(3);

	cout<<"��ͷԪ��:"<<q.front()<<endl;
	cout<<"���еĴ�С:"<<q.size()<<endl;

	while(!q.empty())
	{
		int tmp=q.front();
		cout<<tmp<<endl;
		q.pop();
	}
}
//���е��㷨���������͵ķ���
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

void main62()
{
	Teacher t1,t2,t3;
	t1.age=11;
	t2.age=22;
	t3.age=33;

	queue<Teacher> q;
	q.push(t1);
	q.push(t2);
	q.push(t3);

	while(!q.empty())
	{
		Teacher tmp=q.front();
			tmp.printT();
			q.pop();
	}
}

void main63()
{
	Teacher t1,t2,t3;
	t1.age=11;
	t2.age=22;
	t3.age=33;

	queue<Teacher*> q;
	q.push(&t1);
	q.push(&t2);
	q.push(&t3);

	while(!q.empty())
	{
		Teacher*tmp=q.front();
		tmp->printT();
		q.pop();
	}
}
int main()
{
	//main61();
	//main62();
	main63();
	system("pause");
	return 0;
}
