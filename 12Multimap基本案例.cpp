#include<iostream>
using namespace std;
#include"map"
#include"string"

class Person
{
public:
	string name;
	int age;
	string tel;
	double salary;
};
void main1201()
{
	Person p1,p2,p3,p4,p5;
	p1.name="Wang 1";
	p1.age=31;
	p2.name="Wang 2";
	p2.age=32;
	p3.name="Zhang 3";
	p3.age=33;
	p4.name="Zhang 4";
	p4.age=34;
	p5.name="zhao 5";
	p5.age=35;

	multimap<string,Person>map2;
	//sale���۲���
	map2.insert(make_pair("sal",p1));
	map2.insert(make_pair("sal",p2));
	//development ����
	map2.insert(make_pair("del",p3));
	map2.insert(make_pair("del",p4));
	//Financial ����
	map2.insert(make_pair("Fina",p5));

	for(multimap<string,Person>::iterator it=map2.begin();it!=map2.end();it++)
	{
		cout<<it->first<<"\t"<<it->second.name<<"\t"<<it->second.age<<endl;
	}
	cout<<"��������"<<endl;

	//��������Ա��Ϣ
	int num2=map2.count("del");
	cout<<"����������:"<<num2<<endl;
	cout<<"��������Ա����Ϣ"<<endl;
	multimap<string,Person>::iterator it2=map2.find("del");
	int tag=0;
	while((it2!=map2.end())&&(tag<num2))
	{
		cout<<it2->first<<"\t"<<it2->second.name<<"\t"<<it2->second.age<<endl;
		it2++;
		tag++;
	}
	//���۲�����Ա��Ϣ
	int num1=map2.count("sal");
	cout<<"��������:"<<num1<<endl;
	cout<<"����Ա����Ϣ"<<endl;
	multimap<string,Person>::iterator it1=map2.find("sal");
	int tag1=0;
	while(it1!=map2.end()&&tag1<num1)
	{
		cout<<it1->first<<"\t"<<it1->second.name<<"\t"<<it1->second.age<<endl;
		it1++;
		tag1++;
	}
	
}

//age=32���޸ĳ�name32
void main1202()
{
	Person p1,p2,p3,p4,p5;
	p1.name="Wang 1";
	p1.age=31;
	p2.name="Wang 2";
	p2.age=32;
	p3.name="Zhang 3";
	p3.age=33;
	p4.name="Zhang 4";
	p4.age=34;
	p5.name="zhao 5";
	p5.age=35;

	multimap<string,Person>map2;
	//sale���۲���
	map2.insert(make_pair("sal",p1));
	map2.insert(make_pair("sal",p2));
	//development ����
	map2.insert(make_pair("del",p3));
	map2.insert(make_pair("del",p4));
	//Financial ����
	map2.insert(make_pair("Fina",p5));

	cout<<"���������������ݽ����޸�"<<endl;
	for(multimap<string,Person>::iterator it=map2.begin();it!=map2.end();it++)
	{
		//cout<<it->first<<"\t"<<it->second.name<<"\t"<<it->second.age<<endl;
		if(it->second.age==32)
		{
			it->second.name="name32";
		}
	}

	for(multimap<string,Person>::iterator it=map2.begin();it!=map2.end();it++)
	{
		cout<<it->first<<"\t"<<it->second.name<<"\t"<<it->second.age<<endl;
	}
	cout<<"��������"<<endl;
}
int main()
{
	main1201();
	//main1202();
	system("pause");
	return 0;
}