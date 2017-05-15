#include<iostream>
using namespace std;
#include"vector"

class Teacher
{
public:
	Teacher(char*name,int age)
	{
		m_pname=new char[strlen(name)+1];
		strcpy(m_pname,name);
		m_age=age;
	}
	~Teacher()
	{
		if(m_pname!=NULL)
		{
			delete []m_pname;
			m_pname=NULL;
			m_age=0;
		}
	}
	Teacher(const Teacher&obj)
	{
		int len=strlen(obj.m_pname);
		m_pname=new char[len+1];
		strcpy(m_pname,obj.m_pname);
		m_age=obj.m_age;
	}
	//����operator=������
	//t3=t2=t1
	 Teacher&operator=(const Teacher &obj)
	 {
		 //�Ȱ�obj���ڴ���ͷŵ�
		 if(obj.m_pname!=NULL)
		 {
			 delete[]m_pname;
			 m_pname=NULL;
			 m_age=0;
		 }
		 //����t1�Ĵ�С�����ڴ�
		 m_pname=new char(strlen(obj.m_pname)+1);
		 //copy
		 strcpy(m_pname,obj.m_pname);
		 m_age=obj.m_age;
	 }
	void printT()
	{
		cout<<m_pname<<"\t"<<m_age<<endl;
	}
private:
	char*m_pname;
	int m_age;
};

void main1301()
{
	Teacher t1("t1",31);
	vector<Teacher>v1;
	v1.push_back(t1); //��t1������һ�ݴ��뵽��������(ǳ����)-->�Լ�дһ�����
	t1.printT();
}
int main()
{
	main1301();
	system("pause");
	return 0;
}