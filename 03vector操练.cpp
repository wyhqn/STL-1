#include<iostream>
using namespace std;
#include"vector"
#include"algorithm"
#include"string"
//����Ԫ�صĵ�����Ӻ�ɾ��
void main31()
{
	vector<int> v1;
	cout<<"length"<<v1.size()<<endl;
	v1.push_back(1);
	v1.push_back(2);
	v1.push_back(3);
	cout<<"length"<<v1.size()<<endl;
	cout<<"��ȡͷ��Ԫ��"<<v1.front()<<endl;
	//�޸�ͷ��Ԫ�ص�ֵ
	v1.front()=11;  //��������ֵ����ֵӦ�÷�������
	v1.back()=55;    //��������ֵ����ֵӦ�÷�������
	while(v1.size()>0)
	{
		cout<<"��ȡβ��Ԫ�أ�"<<v1.back();  //��ȡβ��Ԫ��
		v1.pop_back();//ɾ��β��Ԫ��
	}
}
//vector�ĳ�ʼ��
void main32()
{
	vector<int> v1;
	v1.push_back(1); //��β����������
	v1.push_back(3);
	v1.push_back(5);
	v1.push_back(7);
	v1.push_back(9);

	vector<int>v2=v1;//�����ʼ��
	vector<int>v3(v1.begin(),v1.begin()+2);//�����ʼ��
	vector<int>v4(3,9);//���3��Ԫ�أ�ÿ��Ԫ�ض���9
	cout<<"���v1"<<endl;
	for(vector<int>::iterator it=v1.begin();it<v1.end();it++)
	{
		cout<<*it<<endl;
	}
	cout<<"���v2"<<endl;
	for(vector<int>::iterator i=v2.begin();i<v2.end();i++)
	{
		cout<<*i<<endl;
	}
	cout<<"���v3"<<endl;
	for(vector<int>::iterator it=v3.begin();it<v3.end();it++)
	{
		cout<<*it<<endl;
	}
	cout<<"���v4"<<endl;
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
//vector�ı���  ͨ������ķ�ʽ
void main33()
{
	vector<int> v1(10);  //ͨ���ȺŲ����������渳ֵʱһ��Ҫ��ǰ���ڴ�׼����
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

//push_back��ǿ������
void main34()
{
	vector<int> v1(10);
	v1.push_back(100);
	v1.push_back(200);
	v1.push_back(300);
	cout<<"size:"<<v1.size()<<endl; //��С�����ˣ���
	printV(v1);
}

//������
//1  3  5 
//��      ----begin
//1  3  5 
//       ��  ----end
//��it=v1.end()��ʱ��˵����������Ѿ���������ˡ�
//end()��5 �ĺ���

//2 ������������

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
	//���������  --�������
	for(vector<int>::reverse_iterator rit=v1.rbegin();rit!=v1.rend();rit++)
	{
		cout<<*rit<<"  ";
	}
}
//vector��ɾ��
void main36()
{
	vector<int>v1(10);
	for(int i=0;i<10;i++)
	{
		v1[i]=i+1;
	}
	//����ɾ��
	v1.erase(v1.begin(),v1.begin()+3);
	printV(v1);

	//����Ԫ�ص�λ�ã�ָ��λ��ɾ��
	v1.erase(v1.begin());  //��ͷ��ɾ��һ��Ԫ��
	printV(v1);

	//����Ԫ�ص�ֵ
	v1[1]=2;
	v1[3]=2;
	printV(v1);
	for(vector<int>::iterator it=v1.begin();it!=v1.end();)
	{
		if(*it==2)
		{
			it=v1.erase(it); //�� ɾ����������ָ���Ԫ�ص�ʱ�� eraseɾ�����õ������Զ�����
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