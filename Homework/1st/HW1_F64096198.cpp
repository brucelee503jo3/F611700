#include<iostream>
#include<ctime> 
using namespace std;
int main() 
{
	int time1,time2;
	time1=clock();
	int n,m;
	cin>>n>>m;
	//A
	for(int i=1;i<=n;i++)
		{
			cout<<"#";
		}
	cout<<endl;
	//B
	if(n<=m)
		{
			for(int i=n;i<=m;i++)
				{
					cout<<i<<" ";
				}
			cout<<endl;
		} 
	else
		{
			for(int i=m;i<=n;i++)
				{
					cout<<i<<" ";
				}
			cout<<endl;
		}
	//C
	char ch=65;
	for(int i=0;i<m;i++)
	{
		cout<<(char)(ch+i);
	}
	cout<<endl;
	//D
	ch=122;
	for(int i=0;i<n;i++)
	{
		cout<<(char)(ch-i);
	}
	cout<<endl;	
	//E
	if(m%2==0)
		{
			for(int i=0;i<m;i+=2)
				{
					cout<<m-i<<" ";
				}
				cout<<endl;
		}
	else
		{
			for(int i=1;i<=m;i+=2)
				{
					cout<<i<<" ";
				}
				cout<<endl;
		}	
	//F
	int sum=0;
	if(n<=m)
	{
		for(int i=3;i<=m;i+=3)
			{
				if(i>=n)
				{
					sum+=i;
				}
			}
		cout<<sum<<endl;
	}
	else
	{
		for(int i=3;i<=n;i+=3)
			{
				if(i>=m)
				{
					sum+=i;
				}
			}
		cout<<sum<<endl;
	}	
	//G
	int mul=n*m;
	for(int i=1;i<=mul;i++)
		{
			if(mul%i==0)
				{
					cout<<i<<" "; 
				}
		}
	cout<<endl;
	//H
	for(int i=1;i<=100;i++)
		{
			if(i%n==0&&i%m==0)
				{
					cout<<i<<" ";
				}
		}
	cout<<endl;	
	//I
	for(int i=n;i>=1;i--)
		{
			if(n%i==0&&m%i==0)
				{
					cout<<i<<endl;
					break;
				}
		}
	//J
	for(int i=n;i<=n*m;i++)
		{
			if(i%n==0&&i%m==0)
				{
					cout<<i<<endl;
					break;
				}
		}
	time2=clock();
	cout<<time2-time1<<endl;
	return 0;
}
