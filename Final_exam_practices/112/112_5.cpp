//112_5
#include<iostream>
using namespace std;
int main()
{
	int a[4]={};
	int lottery,num;
	cin>>lottery>>num;
	a[0]=lottery%10000/1000;
	a[1]=lottery%1000/100;
	a[2]=lottery%100/10;
	a[3]=lottery%10;
	for(int i=0;i<num;i++)
		{
			int b[4]={};
			int A=0,B=0,test;
			cin>>test;
			b[0]=test%10000/1000;
			b[1]=test%1000/100;
			b[2]=test%100/10;
			b[3]=test%10;
			for(int j=0;j<4;j++)
				{
					if(b[j]==a[0]||b[j]==a[1]||b[j]==a[2]||b[j]==a[3])
						B++;
					if(b[j]==a[j])
						{
							B--;					
							A++;
						}
				}				
			cout<<A*100+B*10<<endl;	
		} 
	return 0;	
} 
