//111_5
#include<iostream>
#include<string>
using namespace std;
int main()
{
	int n;
	cin>>n;
	for(int i=0;i<n;i++)
		{
			string s;
			cin>>s;
			int x=0,y=0;
			int dir=0;
			for(int j=0;j<s.length();j++)
				{
					char ch=s.at(j);
					if(ch=='L')
						dir+=1;
					else if(ch=='R')
						dir-=1;
					else	
						{
							switch(dir)
								{
									case 0:
										x+=1;
										break;		
									case 1:
										y+=1;
										break;
									case 2:
										x-=1;
										break;
									case 3:
										y-=1;
										break;																														
								}		
						}
					if(dir>3)
						dir-=4;
					if(dir<0)
						dir+=4;				
				}
		cout<<"("<<x<<","<<y<<")"<<endl;		
		}
	return 0;	
}
