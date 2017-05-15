#include<iostream>
using namespace std;
#include<set>

void main1001()
{
	multiset<int>set1;
	cout<<"请输入 multiset集合的值:"<<endl;
	int tmp;
	cin>>tmp;
	while(tmp!=0)
	{
		set1.insert(tmp);
		cout<<"请输入 multiset集合的值:"<<endl;
		cin>>tmp;
	}
	for(multiset<int>::iterator it=set1.begin();it!=set1.end();it++)
	{
		cout<<*it<< "  ";
	}
	cout<<endl;
	while(!set1.empty())
	{
		multiset<int>::iterator it=set1.begin();
		cout<<*it<<"  ";
		set1.erase(it);
	}
}
int main()
{
	main1001();
	system("pause");
	return 0;
}