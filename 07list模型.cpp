#include<iostream>
using namespace std;
#include<list> //˫������

//list ��������
void main71()
{
	list<int> l;
	cout<<"list �Ĵ�С:"<<l.size()<<endl;
	for(int i=0;i<10;i++)
	{
		l.push_back(i);  //β������Ԫ��
	}
	cout<<"list �Ĵ�С:"<<l.size()<<endl;
	list<int>::iterator it=l.begin();
	while(it!=l.end())
	{
		cout<<*it<<"  ";
		it++;
	}

	//list����������� 
	//0 1 2 3 4 5
	//      ��
	it=l.begin();
	it++;
	it++;
	it++;
	cout<<endl;
	//it=it+5;  ��֧������ķ�������
	l.insert(it,100); //����100������ʲôλ�� ���뵽��3��ǰ��
	//���� 1�� ����Ľ������ �Ǵ�0��λ�ÿ�ʼ��
	//     2:  ��3��λ�ò���Ԫ�� ��ԭ����3��λ�ñ��4��λ�ã�ԭ����4��λ�ñ��5��λ��
	for(list<int>::iterator it=l.begin();it!=l.end();it++)
	{
		cout<<*it<<"   ";
	}
}
//listɾ��
void main72()
{
	list<int> l;
	cout<<"list �Ĵ�С:"<<l.size()<<endl;
	for(int i=0;i<10;i++)
	{
		l.push_back(i);  //β������Ԫ��
	}
	//0 1 2 3 4 5
	//      ��
	cout<<"list �Ĵ�С:"<<l.size()<<endl;
	list<int>::iterator it1=l.begin();
	list<int>::iterator it2=l.begin();
	it2++;
	it2++;
	it2++;
	//l.erase(l.begin(),l.begin()+3);��֧����������Ҫ������
	cout<<"erase֮ǰ����"<<endl;
	for(list<int>::iterator it=l.begin();it!=l.end();it++)
	{
		cout<<*it<<"   ";
	}
	l.erase(it1,it2);
	l.remove(8); //ɾ��Ԫ��8
	cout<<"erase֮�����"<<endl;  //����ҿ��ĺ���������3û��ɾ��
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
