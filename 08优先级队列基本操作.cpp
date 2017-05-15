#include<iostream>
using namespace std;
#include<queue>

void main81()
{
	priority_queue<int> p1;  //默认情况下 是最大优先级队列
	priority_queue<int,vector<int>,less<int>> p2; //less提亲定义好的预定义函数 谓词 最大值优先级队列
	priority_queue<int,vector<int>,greater<int>> p3;//最小值优先级队列
	cout<<"最大值优先级队列"<<endl;
	p1.push(33);
	p1.push(11);
	p1.push(22);
	p1.push(66);
	cout<<"队头元素:"<<p1.top()<<endl;
	cout<<"队列的大小:"<<p1.size()<<endl;
	while(p1.size()>0)
	{
		cout<<p1.top()<<"  ";
		p1.pop();
	}

	cout<<endl<<endl;
	cout<<"最小值优先级队列"<<endl;
	p3.push(33);
	p3.push(11);
	p3.push(22);
	p3.push(66);
	cout<<"队头元素:"<<p3.top()<<endl;
	cout<<"队列的大小:"<<p3.size()<<endl;
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