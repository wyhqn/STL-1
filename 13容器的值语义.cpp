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
	//重载operator=操作符
	//t3=t2=t1
	 Teacher&operator=(const Teacher &obj)
	 {
		 //先把obj的内存给释放掉
		 if(obj.m_pname!=NULL)
		 {
			 delete[]m_pname;
			 m_pname=NULL;
			 m_age=0;
		 }
		 //根据t1的大小分配内存
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
	v1.push_back(t1); //把t1拷贝了一份存入到容器中了(浅拷贝)-->自己写一个深拷贝
	t1.printT();
}
int main()
{
	main1301();
	system("pause");
	return 0;
}