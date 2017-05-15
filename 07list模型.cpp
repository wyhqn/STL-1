#include<iostream>
using namespace std;
#include<list> //双项链表

//list 基本操作
void main71()
{
	list<int> l;
	cout<<"list 的大小:"<<l.size()<<endl;
	for(int i=0;i<10;i++)
	{
		l.push_back(i);  //尾部插入元素
	}
	cout<<"list 的大小:"<<l.size()<<endl;
	list<int>::iterator it=l.begin();
	while(it!=l.end())
	{
		cout<<*it<<"  ";
		it++;
	}

	//list不能随机访问 
	//0 1 2 3 4 5
	//      △
	it=l.begin();
	it++;
	it++;
	it++;
	cout<<endl;
	//it=it+5;  不支持随机的访问容器
	l.insert(it,100); //请问100插入在什么位置 插入到了3的前面
	//结论 1： 链表的结点的序号 是从0号位置开始的
	//     2:  在3号位置插入元素 让原来的3号位置编程4号位置，原来的4号位置变成5号位置
	for(list<int>::iterator it=l.begin();it!=l.end();it++)
	{
		cout<<*it<<"   ";
	}
}
//list删除
void main72()
{
	list<int> l;
	cout<<"list 的大小:"<<l.size()<<endl;
	for(int i=0;i<10;i++)
	{
		l.push_back(i);  //尾部插入元素
	}
	//0 1 2 3 4 5
	//      △
	cout<<"list 的大小:"<<l.size()<<endl;
	list<int>::iterator it1=l.begin();
	list<int>::iterator it2=l.begin();
	it2++;
	it2++;
	it2++;
	//l.erase(l.begin(),l.begin()+3);不支持这样，需要迭代器
	cout<<"erase之前遍历"<<endl;
	for(list<int>::iterator it=l.begin();it!=l.end();it++)
	{
		cout<<*it<<"   ";
	}
	l.erase(it1,it2);
	l.remove(8); //删除元素8
	cout<<"erase之后遍历"<<endl;  //左闭右开的函数，所以3没有删除
	for(list<int>::iterator it=l.begin();it!=l.end();it++)
	{
		cout<<*it<<"   ";
	}
}
int main()
{
	//main71();
	main72();
	system("pause");
	return 0;
}
