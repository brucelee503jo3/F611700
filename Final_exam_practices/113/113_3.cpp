#include<iostream>
#include<cstdlib>
#include<string>
using namespace std;
int main()
{
	int n;
	cin>>n;
	for(int i=0;i<n;i++)
		{
			int m;
			cin>>m;
			int a[m];
			for(int j=0;j<m;j++)
				cin>>a[j];
			int as=0,ds=0;
			int statusnow=0,statusbefore=0;
			if(a[1]>a[0])
				{
					statusbefore=1;		
					as++;
				}		
			if(a[1]<a[0])
				{
					statusbefore=0;
					ds++;	
				}			
			for(int j=2;j<m;j++)
				{
					//cout<<"statusnow:"<<statusnow<<",statusbefore"<<statusbefore<<endl;
					if(a[j]>a[j-1])
						{
							statusnow=1;		
						}		
					if(a[j]<a[j-1])
						{
							statusnow=0;	
						}	
					//cout<<"statusnow:"<<statusnow<<",statusbefore"<<statusbefore<<endl;						
					if(statusnow!=statusbefore)
						{
							if(statusnow==0)
								ds++;
							else 
								as++;		
						}	
					statusbefore=statusnow;
					//cout<<"test:"<<as<<" "<<ds<<endl;
				}
			cout<<as<<" "<<ds<<endl;			
		}	
	return 0;
} 
