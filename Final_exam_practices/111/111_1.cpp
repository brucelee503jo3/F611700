//111_1 
#include<iostream>
using namespace std;
int main()
{
	int num;
	cin>>num;
	for(int i=0;i<num;i++)
		{
			int a,b,c;
			cin>>a>>b>>c;
			int flag1,flag2;	
			for(int k=a;k<=a*b;k++)
				{
					if(k%a==0&&k%b==0)
						{
							flag1=k;
							break;
						}
				}
			for(int k=flag1;k<=flag1*c;k++)
				{
					if(k%flag1==0&&k%c==0)
						{
							flag2=k;
							break;		
						}
				}	
			cout<<flag2<<endl;
		}
} 
