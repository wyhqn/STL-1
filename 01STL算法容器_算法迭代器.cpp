#include<iostream>
using namespace std;
#include"vector"
#include"algorithm"
//������װ������������
void main11()
{
	vector<int> v1;//1.�����������Ԫ�ؿ�����������,Ҫȷ�����Ԫ���ܹ�������
	v1.push_back(-1);
	v1.push_back(2);
	v1.push_back(3);
	v1.push_back(3);
	//2.����������һ��ָ��
	for(vector<int>::iterator it=v1.begin();it!=v1.end();it++)
	{
		cout<<*it<<"  ";
	}
	//3.�㷨  �㷨������������޷�����
	int num=count(v1.begin(),v1.end(),3);
	cout<<endl<<"num:"<<num<<endl;
}
class Teacher
{
public:
	int age;
	char name[64];
	void printT()
	{
		cout<<"age:"<<age<<endl;
	}
};
//������װԪ��
void main12()
{
	Teacher t1,t2,t3;
	t1.age=11;
	t2.age=22;
	t3.age=33;
	vector<Teacher> v2;
	v2.push_back(t1);
	v2.push_back(t2);
	v2.push_back(t3);
	//2.����������һ��ָ��
	for(vector<Teacher>::iterator it=v2.begin();it!=v2.end();it++)
	{
		cout<<it->age<<"  ";
	}
}

void main13()
{
	Teacher t1,t2,t3;
	t1.age=31;
	t2.age=32;
	t3.age=33;
	Teacher*p1,*p2,*p3;
	p1=&t1;
	p2=&t2;
	p3=&t3;
	vector<Teacher*> v3;
	v3.push_back(p1);  //��Teacher ��t1 t2 t3 ���ڴ��׵�ַ���뵽������
	v3.push_back(p2);
	v3.push_back(p3);
	
	//2.����������һ��ָ��,����������൱��һ������ָ����
	for(vector<Teacher*>::iterator it=v3.begin();it!=v3.end();it++)
	{
		cout<<(*it)->age<<"  ";
	}
}
int main()
{
	main11();
	main12();
	main13();
	system("pause");
	return 0;
}