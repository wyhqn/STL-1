#include<iostream>
using namespace std;
#include<queue>

void main81()
{
	priority_queue<int> p1;  //Ĭ������� ��������ȼ�����
	priority_queue<int,vector<int>,less<int>> p2; //less���׶���õ�Ԥ���庯�� ν�� ���ֵ���ȼ�����
	priority_queue<int,vector<int>,greater<int>> p3;//��Сֵ���ȼ�����
	cout<<"���ֵ���ȼ�����"<<endl;
	p1.push(33);
	p1.push(11);
	p1.push(22);
	p1.push(66);
	cout<<"��ͷԪ��:"<<p1.top()<<endl;
	cout<<"���еĴ�С:"<<p1.size()<<endl;
	while(p1.size()>0)
	{
		cout<<p1.top()<<"  ";
		p1.pop();
	}

	cout<<endl<<endl;
	cout<<"��Сֵ���ȼ�����"<<endl;
	p3.push(33);
	p3.push(11);
	p3.push(22);
	p3.push(66);
	cout<<"��ͷԪ��:"<<p3.top()<<endl;
	cout<<"���еĴ�С:"<<p3.size()<<endl;
	while(p3.size()>0)
	{
		cout<<p3.top()<<"  ";
		p3.pop();
	}

}
int main()
{
	//main71();
	main81();
	system("pause");
	return 0;
}