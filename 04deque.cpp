#include<iostream>
using namespace std;
#include"deque"
#include"algorithm"
void printD(deque<int>&d)
{
	for(deque<int>::iterator it=d.begin();it!=d.end();it++)
	{
		cout<<*it<<"  ";
	}
}
void main41()
{
	deque<int> d1;
	d1.push_back(1);
	d1.push_back(3);
	d1.push_back(5);
	d1.push_front(-11);
	d1.push_front(-33);
	d1.push_front(-55);

	cout<<"ͷ��Ԫ��:"<<d1.front()<<endl;
	cout<<"β��Ԫ��:"<<d1.back()<<endl;
	cout<<"��ӡԪ��"<<endl;
	printD(d1);

	d1.pop_front();
	cout<<endl;
	d1.pop_back();
	cout<<"��������Ԫ��֮��"<<endl;
	printD(d1);

	//����-33�������±��ֵ
	deque<int>::iterator it=find(d1.begin(),d1.end(),-33);
	if(it!=d1.end())
	{
		cout<<endl;
		cout<<"-33�����±��ǣ�"<<distance(d1.begin(),it)<<endl;
	}
	else
	{
		cout<<"û���ҵ�ֵΪ-33�ĺ���"<<endl;
	}
}
int main()
{
	main41();
	system("pause");
	return 0;
}
