#include<iostream>
using namespace std;
#include"map"
#include"string"

//map元素的添加/遍历/删除的基本操作
void main1101()
{   //方法一
	map<int,string> map1;
	map1.insert(pair<int,string>(1,"teacher01"));
	map1.insert(pair<int,string>(2,"teacher02"));

	//方法二
	map1.insert(make_pair(3,"teacher03"));
	map1.insert(make_pair(4,"teacher04"));

	//方法三
	map1.insert(map<int ,string>::value_type(5,"teacher05"));
	map1.insert(map<int ,string>::value_type(6,"teacher06"));

	//方法四
	map1[7]="teacher07";
	map1[8]="teacher08";

	//容器的遍历
	for(map<int,string>::iterator it=map1.begin();it!=map1.end();it++)
	{
		cout<<it->first<<"\t"<<it->second<<endl;
	}
	cout<<"遍历结束"<<endl;
	//容器的删除
	while(!map1.empty())
	{
		map<int,string>::iterator it=map1.begin();
		cout<<it->first<<"\t"<<it->second<<endl;
		map1.erase(it);
	}
}

//四中插入方法异同比较
//前三种方法 返回值为pair<iterator,bool> _Pairib;若key已经存在 则报错
//方法四，若key 已经存在则修改
void main1102()
{
	map<int,string> map1;
	//typedef pair<iterator, bool> _Pairib;
	 //方法一
	pair<map<int,string> ::iterator, bool> mypair1=map1.insert(pair<int,string>(1,"teacher01"));
	map1.insert(pair<int,string>(2,"teacher02"));

	//方法二
	pair<map<int,string> ::iterator, bool> mypair3=map1.insert(make_pair(3,"teacher03"));
	map1.insert(make_pair(4,"teacher04"));

	//方法三
	pair<map<int,string> ::iterator, bool> mypair5=map1.insert(map<int ,string>::value_type(6,"teacher06"));
	if(mypair5.second==true)
	{
		cout<<"key 6插入成功"<<endl;
	}
	else
	{
		cout<<mypair5.first->first<<"\t"<<mypair5.first->second<<"key 5插入失败"<<endl;
	}
	pair<map<int,string> ::iterator, bool> mypair6=map1.insert(map<int ,string>::value_type(6,"teacher06"));
	if(mypair6.second==true)
	{
		cout<<"key 6插入成功"<<endl;
	}
	else
	{
		cout<<mypair6.first->first<<"\t"<<mypair6.first->second<<"key 6插入失败"<<endl;
	}
	//方法四  :会把前面覆盖
	map1[7]="teacher07";
	map1[7]="teacher77";
	
	//容器的遍历
	for(map<int,string>::iterator it=map1.begin();it!=map1.end();it++)
	{
		cout<<it->first<<"\t"<<it->second<<endl;
	}
	cout<<"遍历结束"<<endl;
}
void main1103()
{
	 //方法一
	map<int,string> map1;
	map1.insert(pair<int,string>(1,"teacher01"));
	map1.insert(pair<int,string>(2,"teacher02"));

	//方法二
	map1.insert(make_pair(3,"teacher03"));
	map1.insert(make_pair(4,"teacher04"));

	//方法三
	map1.insert(map<int ,string>::value_type(5,"teacher05"));
	map1.insert(map<int ,string>::value_type(6,"teacher06"));

	//方法四
	map1[7]="teacher07";
	map1[8]="teacher08";

	//容器的遍历
	for(map<int,string>::iterator it=map1.begin();it!=map1.end();it++)
	{
		cout<<it->first<<"\t"<<it->second<<endl;
	}
	cout<<"遍历结束"<<endl;

	//map的查找  //异常处理
	map<int,string>::iterator it2=map1.find(100);
	if(it2==map1.end())
	{
		cout<<"key 100 的值 不存在 "<<endl;
	}
	else
	{
		cout<<it2->first<<"\t"<<it2->second<<endl;
	}
	//equal_range  //异常处理
	 pair<map<int,string>::iterator, map<int,string>::iterator>mypair1=map1.equal_range(5);  //返回两个迭代器 形成一个pair
	 //第一个迭代器>=5的位置  第二个迭代器>5的位置
	 //使用第一个迭代器
	 if(mypair1.first==map1.end())
	 {
		 cout<<"第一个迭代器>=5的位置不存在"<<endl;
	 }
	 else
	 {
		 cout<<mypair1.first->first<<"\t"<<mypair1.first->second<<endl;

	 }
	 //使用第二个迭代器
	 if(mypair1.second==map1.end())
	 {
		 cout<<"第二个迭代器>5的位置不存在"<<endl;
	 }
	 else
	 {
		 cout<<mypair1.second->first<<"\t"<<mypair1.second->second<<endl;

	 }
}
int main()
{
	//main1101();
	//main1102();
	main1103();
	system("pause");
	return 0;
}