#include<iostream>
#include<cstdlib>
#include<string>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int a[n]={};
	for(int i=0;i<n;i++)
		{
			int x,y;
			cin>>x>>y;
			a[i]+=x;
			if(i!=0)
				y/=i;
			for(int j=0;j<i;j++)
				a[j]+=y;
		}
	for(int i=0;i<n;i++)	
		cout<<a[i]<<endl;
	return 0;
} 
