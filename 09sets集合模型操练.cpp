#include<iostream>
using namespace std;
#include<set>//集合，元素唯一，自动排序(默认情况下是从小到大) 不能按照数组的方式插入元素
             //红黑树  平衡二叉树

void main91()
{
	set<int> set1;
	for(int i=0;i<5;i++)
	{
		int tmp=rand();
		set1.insert(tmp);
	}
	//插入元素：重复的。
	set1.insert(100);
	set1.insert(100);
	set1.insert(100);
	cout<<endl;	for(set<int>::iterator it=set1.begin();it!=set1.end();it++)
	{
		cout<<*it<<"  ";
	}
	cout<<endl;
	while(!set1.empty())
	{
		set<int>::iterator it=set1.begin();
		cout<<*it<<endl;
		set1.erase(set1.begin());
	}
}
//对基本的数据类型 set能自动排序
void main92()
{
	set<int> set1;//默认情况
	set<int ,less<int>>set2; //与上一样 从小到大
	set<int,greater<int>> set3;// 从大到小

	for(int i=0;i<5;i++)
	{
		int tmp=rand();
		set3.insert(tmp);
	}
	//从大到小
	for(set<int,greater<int>>::iterator it=set3.begin();it!=set3.end();it++)
	{
		cout<<*it<<"  ";
	}
	//插入元素：重复的。
	set1.insert(100);
	set1.insert(100);
	set1.insert(100);
}

//对于复杂的数据类型 Teacher   如何进行自动的数据类型排序----仿函数  函数对象
class Student
{
public:
	Student(char*name,int age)
	{
		strcpy(this->name,name);
		this->age=age;
	}
public:
	char name[32];
	int age;
};
struct FuncStudent  
{
	bool operator()(const Student &left,const Student &right)  //仿函数
	{
		if(left.age<right.age)
		{
			return true;  //从小到大，按年龄
		}
		else
		{
			return false;
		}
	}
};
//仿函数的用法
void main93()
{
	set<Student>set1;  //按年龄排序函数按名字排序？
	
	Student s1("s1",31);
	Student s2("s2",34);
	Student s3("s3",21);
	Student s4("s4",4);
	Student s5("s1",31);

	set<Student,FuncStudent>set2;
	set2.insert(s1);
	set2.insert(s2);
	set2.insert(s3);
	set2.insert(s4);
	set2.insert(s5); //如果两个31能否插入成功。

	//遍历
	for(set<Student,FuncStudent>::iterator it=set2.begin();it!=set2.end();it++)
	{
		cout<<it->age<<"\t"<<it->name<<endl;
	}
}

//typedef pair<iterator, bool> _Pairib;
//如何判断set1.insert()函数的返回值
void main94()
{
	Student s1("s1",31);
	Student s2("s2",34);
	Student s3("s3",21);
	Student s4("s4",4);
	Student s5("s1",31);

	set<Student,FuncStudent>set2;
	pair<set<Student,FuncStudent>::iterator,bool>pair1=set2.insert(s1);
	if(pair1.second==true)
	{
		cout<<"插入s1成功"<<endl;
	}
	else
	{
		cout<<"插入s1失败"<<endl;
	}
	
	pair<set<Student,FuncStudent>::iterator,bool>pair5=set2.insert(s5);
	if(pair5.second==true)
	{
		cout<<"插入s5成功"<<endl;
	}
	else
	{
		cout<<"插入s5失败"<<endl;
	}
}
//set的查找 find erase equal_range   返回结果pair
void main95()
{
	set<int> set1;//默认情况

	for(int i=0;i<10;i++)
	{
		set1.insert(i+1);
	}
	//从大到小
	for(set<int>::iterator it=set1.begin();it!=set1.end();it++)
	{
		cout<<*it<<"  ";
	}
	cout<<endl;
	set<int>::iterator it0=set1.find(5);
	cout<<"it0:"<<*it0<<endl;

	int num1=set1.count(5);
	cout<<"num1:"<<num1<<endl;
	set<int>::iterator it1=set1.lower_bound(5);//大于等于5元素的迭代器
	cout<<"it1:"<<*it1<<endl;
	set<int>::iterator it2=set1.upper_bound(5); //大于5元素的迭代器
	cout<<"it2:"<<*it2<<endl;

	/*
	typedef pair<iterator, bool> _Pairib;
	typedef pair<iterator, iterator> _Pairii;
	typedef pair<const_iterator, const_iterator> _Paircc;
	*/
	//把5元素删除
	 set1.erase(5);
	 pair<set<int>::iterator, set<int>::iterator>mypair=set1.equal_range(5);
	 set<int>::iterator it3=mypair.first;//5  //6
	 cout<<"it3:"<<*it3<<endl;
	 set<int>::iterator it4=mypair.second;//6   //6
	 cout<<"it4:"<<*it4<<endl;


}
int main()
{
	//main91();
	//main92();
	//main93();
	//main94();
	main95();
	system("pause");
	return 0;
}