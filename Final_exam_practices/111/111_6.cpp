//111_6 
#include<iostream>
using namespace std;
int main()
{
	int num,count;
	cin>>num>>count;
	int c=0,d=0;
	int a[4];
	a[0]=num/1000;
	a[1]=num%1000/100;
	a[2]=num%100/10;
	a[3]=num%10;
	for(int i=0;i<count;i++)
		{
			int test;
			cin>>test;
			int b[4];
			b[0]=test/1000;
			b[1]=test%1000/100;
			b[2]=test%100/10;
			b[3]=test%10;
			for(int j=0;j<4;j++)
				{
					if(b[j]==a[0]||b[j]==a[1]||b[j]==a[2]||b[j]==a[3])
						c++;
					if(b[j]==a[j])
						{
							c--;
							d++;
						} 
				}
			cout<<d<<"A"<<c<<"B"<<endl;			
			c=0;
			d=0;
		}
		
} 
