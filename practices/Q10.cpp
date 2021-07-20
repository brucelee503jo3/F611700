#include<iostream>
using namespace std;
int main()
{
	int e[20]={},num;
	cin>>num;
	for(int i=0;i<num;i++)
		{
			cin>>e[i];
		}
	for(int i=0;i<num;i++)//¦¸¼Æ 
		{
			if(e[i]!=1)
				{	
					int flag=0;
					for(int j=2;j<e[i]-1;j++)
						{
							if(e[i]%j==0)
								{
									flag=1;
								}
						}
					if(flag==0)
						cout<<"Yes"<<endl;
					else
						cout<<"No"<<endl;		
				}
			else 
				{
					cout<<"No"<<endl;
				}
		}	
	return 0;
}
