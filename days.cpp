#include<iostream>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string day[]={"mon","tues","wed","thurs","fri","sat","sun"};
		int count[]={4,4,4,4,4,4,4};
		int n,i,id;
		string s;
		cin>>n>>s;
		for(i=0;i<7;i++)
		{
			if(s.compare(day[i])==0)
			{
				id=i;
				break;
			}
		}
		for(i=0;i<(n%7);i++)
		{
			count[id]++;
			id++;
			if(id==7)
				id=0;
		}
		for(i=0;i<7;i++)
			cout<<count[i]<<" ";
		cout<<endl;
	}
}
