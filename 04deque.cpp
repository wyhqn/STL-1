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

	cout<<"头部元素:"<<d1.front()<<endl;
	cout<<"尾部元素:"<<d1.back()<<endl;
	cout<<"打印元素"<<endl;
	printD(d1);

	d1.pop_front();
	cout<<endl;
	d1.pop_back();
	cout<<"弹出两个元素之后"<<endl;
	printD(d1);

	//查找-33在数组下标的值
	deque<int>::iterator it=find(d1.begin(),d1.end(),-33);
	if(it!=d1.end())
	{
		cout<<endl;
		cout<<"-33数组下标是："<<distance(d1.begin(),it)<<endl;
	}
	else
	{
		cout<<"没有找到值为-33的函数"<<endl;
	}
}
int main()
{
	main41();
	system("pause");
	return 0;
}
