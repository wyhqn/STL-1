#include<iostream>
using namespace std;
#include"map"
#include"string"

//mapԪ�ص����/����/ɾ���Ļ�������
void main1101()
{   //����һ
	map<int,string> map1;
	map1.insert(pair<int,string>(1,"teacher01"));
	map1.insert(pair<int,string>(2,"teacher02"));

	//������
	map1.insert(make_pair(3,"teacher03"));
	map1.insert(make_pair(4,"teacher04"));

	//������
	map1.insert(map<int ,string>::value_type(5,"teacher05"));
	map1.insert(map<int ,string>::value_type(6,"teacher06"));

	//������
	map1[7]="teacher07";
	map1[8]="teacher08";

	//�����ı���
	for(map<int,string>::iterator it=map1.begin();it!=map1.end();it++)
	{
		cout<<it->first<<"\t"<<it->second<<endl;
	}
	cout<<"��������"<<endl;
	//������ɾ��
	while(!map1.empty())
	{
		map<int,string>::iterator it=map1.begin();
		cout<<it->first<<"\t"<<it->second<<endl;
		map1.erase(it);
	}
}

//���в��뷽����ͬ�Ƚ�
//ǰ���ַ��� ����ֵΪpair<iterator,bool> _Pairib;��key�Ѿ����� �򱨴�
//�����ģ���key �Ѿ��������޸�
void main1102()
{
	map<int,string> map1;
	//typedef pair<iterator, bool> _Pairib;
	 //����һ
	pair<map<int,string> ::iterator, bool> mypair1=map1.insert(pair<int,string>(1,"teacher01"));
	map1.insert(pair<int,string>(2,"teacher02"));

	//������
	pair<map<int,string> ::iterator, bool> mypair3=map1.insert(make_pair(3,"teacher03"));
	map1.insert(make_pair(4,"teacher04"));

	//������
	pair<map<int,string> ::iterator, bool> mypair5=map1.insert(map<int ,string>::value_type(6,"teacher06"));
	if(mypair5.second==true)
	{
		cout<<"key 6����ɹ�"<<endl;
	}
	else
	{
		cout<<mypair5.first->first<<"\t"<<mypair5.first->second<<"key 5����ʧ��"<<endl;
	}
	pair<map<int,string> ::iterator, bool> mypair6=map1.insert(map<int ,string>::value_type(6,"teacher06"));
	if(mypair6.second==true)
	{
		cout<<"key 6����ɹ�"<<endl;
	}
	else
	{
		cout<<mypair6.first->first<<"\t"<<mypair6.first->second<<"key 6����ʧ��"<<endl;
	}
	//������  :���ǰ�渲��
	map1[7]="teacher07";
	map1[7]="teacher77";
	
	//�����ı���
	for(map<int,string>::iterator it=map1.begin();it!=map1.end();it++)
	{
		cout<<it->first<<"\t"<<it->second<<endl;
	}
	cout<<"��������"<<endl;
}
void main1103()
{
	 //����һ
	map<int,string> map1;
	map1.insert(pair<int,string>(1,"teacher01"));
	map1.insert(pair<int,string>(2,"teacher02"));

	//������
	map1.insert(make_pair(3,"teacher03"));
	map1.insert(make_pair(4,"teacher04"));

	//������
	map1.insert(map<int ,string>::value_type(5,"teacher05"));
	map1.insert(map<int ,string>::value_type(6,"teacher06"));

	//������
	map1[7]="teacher07";
	map1[8]="teacher08";

	//�����ı���
	for(map<int,string>::iterator it=map1.begin();it!=map1.end();it++)
	{
		cout<<it->first<<"\t"<<it->second<<endl;
	}
	cout<<"��������"<<endl;

	//map�Ĳ���  //�쳣����
	map<int,string>::iterator it2=map1.find(100);
	if(it2==map1.end())
	{
		cout<<"key 100 ��ֵ ������ "<<endl;
	}
	else
	{
		cout<<it2->first<<"\t"<<it2->second<<endl;
	}
	//equal_range  //�쳣����
	 pair<map<int,string>::iterator, map<int,string>::iterator>mypair1=map1.equal_range(5);  //�������������� �γ�һ��pair
	 //��һ��������>=5��λ��  �ڶ���������>5��λ��
	 //ʹ�õ�һ��������
	 if(mypair1.first==map1.end())
	 {
		 cout<<"��һ��������>=5��λ�ò�����"<<endl;
	 }
	 else
	 {
		 cout<<mypair1.first->first<<"\t"<<mypair1.first->second<<endl;

	 }
	 //ʹ�õڶ���������
	 if(mypair1.second==map1.end())
	 {
		 cout<<"�ڶ���������>5��λ�ò�����"<<endl;
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