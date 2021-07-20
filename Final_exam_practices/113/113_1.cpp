#include<iostream>
#include<cstdlib>
#include<string>
#include<stdio.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	cin.get();
	int a[10]={};
	int b[10]={};	
	for(int i=0;i<n;i++)
		{
			string s;
			cin>>s;
			int x=s.at(0)-65;
			//cout<<(int)b[s.at(0)-65]++<<endl;
			b[x]++;
			int c;
			cin>>c;
			cin.get();
			//int y=s.at(0)-48;
			a[x]+=c;
		}
	for(int i=0;i<10;i++)
		{
//			cout<<a[i]<<" "<<b[i]<<endl;	
		}	
	for(int i=0;i<10;i++)
		{
			cout<<(char)(i+65)<<" "<<a[i]<<" ";
			if(b[i]==0)
				{
					cout<<"0"<<endl;
					continue;
				}
			double h=(double)a[i]/b[i];
			printf("%.1f",h);
			cout<<endl;
		}	
	return 0;
} 
