//111_3 
#include<iostream>
using namespace std;
int main()
{
	int num;
	cin>>num;
	for(int i=0;i<num;i++)
		{
			int a,b,c;
			cin>>a;	
			for(int k=2;k<=a/2;k++)
				{	
					int flag1=1,flag2=1;
					b=k;
					c=a-k;
					if(b==2)
						flag1=1;
					else
						for(int j=2;j<b;j++)
							{
								if(b%j==0)
									{
										flag1=0;
										break;
									}
							}
					if(c==2)
						flag2=1;
					else
						for(int j=2;j<c;j++)
							{
								if(c%j==0)
									{
										flag2=0;
										break;
									}
									
							}
					if(flag1==1&&flag2==1)
						{
							cout<<b<<"+"<<c<<endl;
							break;
						}	
					else 
						continue;	
				}	
		}
	return 0;
} 
