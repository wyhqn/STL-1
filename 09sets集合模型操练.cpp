#include<iostream>
using namespace std;
#include<set>//���ϣ�Ԫ��Ψһ���Զ�����(Ĭ��������Ǵ�С����) ���ܰ�������ķ�ʽ����Ԫ��
             //�����  ƽ�������

void main91()
{
	set<int> set1;
	for(int i=0;i<5;i++)
	{
		int tmp=rand();
		set1.insert(tmp);
	}
	//����Ԫ�أ��ظ��ġ�
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
//�Ի������������� set���Զ�����
void main92()
{
	set<int> set1;//Ĭ�����
	set<int ,less<int>>set2; //����һ�� ��С����
	set<int,greater<int>> set3;// �Ӵ�С

	for(int i=0;i<5;i++)
	{
		int tmp=rand();
		set3.insert(tmp);
	}
	//�Ӵ�С
	for(set<int,greater<int>>::iterator it=set3.begin();it!=set3.end();it++)
	{
		cout<<*it<<"  ";
	}
	//����Ԫ�أ��ظ��ġ�
	set1.insert(100);
	set1.insert(100);
	set1.insert(100);
}

//���ڸ��ӵ��������� Teacher   ��ν����Զ���������������----�º���  ��������
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
	bool operator()(const Student &left,const Student &right)  //�º���
	{
		if(left.age<right.age)
		{
			return true;  //��С���󣬰�����
		}
		else
		{
			return false;
		}
	}
};
//�º������÷�
void main93()
{
	set<Student>set1;  //����������������������
	
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
	set2.insert(s5); //�������31�ܷ����ɹ���

	//����
	for(set<Student,FuncStudent>::iterator it=set2.begin();it!=set2.end();it++)
	{
		cout<<it->age<<"\t"<<it->name<<endl;
	}
}

//typedef pair<iterator, bool> _Pairib;
//����ж�set1.insert()�����ķ���ֵ
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
		cout<<"����s1�ɹ�"<<endl;
	}
	else
	{
		cout<<"����s1ʧ��"<<endl;
	}
	
	pair<set<Student,FuncStudent>::iterator,bool>pair5=set2.insert(s5);
	if(pair5.second==true)
	{
		cout<<"����s5�ɹ�"<<endl;
	}
	else
	{
		cout<<"����s5ʧ��"<<endl;
	}
}
//set�Ĳ��� find erase equal_range   ���ؽ��pair
void main95()
{
	set<int> set1;//Ĭ�����

	for(int i=0;i<10;i++)
	{
		set1.insert(i+1);
	}
	//�Ӵ�С
	for(set<int>::iterator it=set1.begin();it!=set1.end();it++)
	{
		cout<<*it<<"  ";
	}
	cout<<endl;
	set<int>::iterator it0=set1.find(5);
	cout<<"it0:"<<*it0<<endl;

	int num1=set1.count(5);
	cout<<"num1:"<<num1<<endl;
	set<int>::iterator it1=set1.lower_bound(5);//���ڵ���5Ԫ�صĵ�����
	cout<<"it1:"<<*it1<<endl;
	set<int>::iterator it2=set1.upper_bound(5); //����5Ԫ�صĵ�����
	cout<<"it2:"<<*it2<<endl;

	/*
	typedef pair<iterator, bool> _Pairib;
	typedef pair<iterator, iterator> _Pairii;
	typedef pair<const_iterator, const_iterator> _Paircc;
	*/
	//��5Ԫ��ɾ��
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