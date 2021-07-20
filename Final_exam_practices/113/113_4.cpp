#include<iostream>
#include<cstdlib>
#include<string>
using namespace std;
int main()
{
	int n;
	cin>>n;
	cin.get();
	string s[n][n+1];
	for(int i=0;i<n;i++)
		{
			cin>>s[i][0];
			//s[i]+="  ";
		}
	int m;	
	cin>>m;
	cin.get();
	string s1[m],s2[m];
	for(int i=0;i<m;i++)
		{
			cin>>s1[i]>>s2[i];
			//cout<<s1<<" "<<s2<<endl;
		}
	int count[n]={};	
	for(int i=0;i<n;i++)
		{
			int count=0;
			for(int j=0;j<m;j++)
				{
					if(s1[j]==s[i][0])
						{
							s[i][count+1]=s2[j];
							count++;
						}
					if(s2[j]==s[i][0])
						{
							s[i][count+1]=s1[j];					
							count++;	
						}
				}
			count=0;	
		}
/*	for(int count=0;count<n;count++)
		{
			for(int count2=0;count2<n+1;count2++)
				cout<<s[count][count2]<<" ";
			cout<<endl;	
		}	*/	
	for(int count2=0;count2<n;count2++)
		{
			for(int i=2;i<n;i++)
				{
					for(int j=1;j<n-i;j++)
						{
							if(s[count2][j+1].empty())
								break;
							if(s[count2][j]>s[count2][j+1])
								{
									string temp=s[count2][j];
									s[count2][j]=s[count2][j+1];
									s[count2][j+1]=temp;
								}
						}			
				}			
		}			
	for(int i=0;i<n;i++)
		{
			cout<<s[i][0]<<":";
			for(int j=1;j<n+1;j++)
				{
					if(s[i][j].empty())
						break;
					else 
						cout<<" "<<s[i][j];	
				}
			cout<<endl;	
		}	
	return 0;
} 
