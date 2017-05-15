#include<iostream>
using namespace std;
#include"vector"
#include"algorithm"
#include"string"
//数组元素的弹入添加和删除
void main31()
{
	vector<int> v1;
	cout<<"length"<<v1.size()<<endl;
	v1.push_back(1);
	v1.push_back(2);
	v1.push_back(3);
	cout<<"length"<<v1.size()<<endl;
	cout<<"获取头部元素"<<v1.front()<<endl;
	//修改头部元素的值
	v1.front()=11;  //函数返回值当左值应该返回引用
	v1.back()=55;    //函数返回值当左值应该返回引用
	while(v1.size()>0)
	{
		cout<<"获取尾部元素："<<v1.back();  //获取尾部元素
		v1.pop_back();//删除尾部元素
	}
}
//vector的初始化
void main32()
{
	vector<int> v1;
	v1.push_back(1); //在尾部假如数据
	v1.push_back(3);
	v1.push_back(5);
	v1.push_back(7);
	v1.push_back(9);

	vector<int>v2=v1;//对象初始化
	vector<int>v3(v1.begin(),v1.begin()+2);//对象初始化
	vector<int>v4(3,9);//存放3个元素，每个元素都是9
	cout<<"输出v1"<<endl;
	for(vector<int>::iterator it=v1.begin();it<v1.end();it++)
	{
		cout<<*it<<endl;
	}
	cout<<"输出v2"<<endl;
	for(vector<int>::iterator i=v2.begin();i<v2.end();i++)
	{
		cout<<*i<<endl;
	}
	cout<<"输出v3"<<endl;
	for(vector<int>::iterator it=v3.begin();it<v3.end();it++)
	{
		cout<<*it<<endl;
	}
	cout<<"输出v4"<<endl;
	for(vector<int>::iterator it=v4.begin();it<v4.end();it++)
	{
		cout<<*it<<endl;
	}
}

void printV(vector<int>&v)
{
	for(int i=0;i<v.size();i++)
	{
		cout<<v[i]<<"  ";
	}
}
//vector的遍历  通过数组的方式
void main33()
{
	vector<int> v1(10);  //通过等号操作符往里面赋值时一定要提前把内存准备好
	for(int i=0;i<10;i++)
	{
		v1[i]=i+1;
	}
	for(int i=0;i<10;i++)
	{
		cout<<v1[i];
	}
	cout<<endl;
	printV(v1);
}

//push_back的强化记忆
void main34()
{
	vector<int> v1(10);
	v1.push_back(100);
	v1.push_back(200);
	v1.push_back(300);
	cout<<"size:"<<v1.size()<<endl; //大小增加了！！
	printV(v1);
}

//迭代器
//1  3  5 
//△      ----begin
//1  3  5 
//       △  ----end
//当it=v1.end()的时候，说明这个容器已经遍历完毕了。
//end()是5 的后面

//2 迭代器的种类

void main35()
{
	vector<int> v1(10);
	for(int i=0;i<10;i++)
	{
		v1[i]=i+1;
	}
	for(vector<int>::iterator it=v1.begin();it!=v1.end();it++)
	{
		cout<<*it<<"  ";
	}
	//逆向迭代器  --逆序遍历
	for(vector<int>::reverse_iterator rit=v1.rbegin();rit!=v1.rend();rit++)
	{
		cout<<*rit<<"  ";
	}
}
//vector的删除
void main36()
{
	vector<int>v1(10);
	for(int i=0;i<10;i++)
	{
		v1[i]=i+1;
	}
	//区间删除
	v1.erase(v1.begin(),v1.begin()+3);
	printV(v1);

	//根据元素的位置，指定位置删除
	v1.erase(v1.begin());  //在头部删除一个元素
	printV(v1);

	//根据元素的值
	v1[1]=2;
	v1[3]=2;
	printV(v1);
	for(vector<int>::iterator it=v1.begin();it!=v1.end();)
	{
		if(*it==2)
		{
			it=v1.erase(it); //当 删除迭代器所指向的元素的时候 erase删除会让迭代器自动下移
		}
		else
		{
			it++;
		}
	}
	printV(v1);
	v1.insert(v1.begin(),100);
	v1.insert(v1.end(),200);
	printV(v1);
}
int main()
{
	//main31();
	//main32();
	//main33();
	//main34();
	//main35();
	main36();
	system("pause");
	return 0;
}