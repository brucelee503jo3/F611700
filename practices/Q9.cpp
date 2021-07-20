#include<iostream>
using namespace std;
int main()
{
	int d[20]={},num;
	cin>>num;
	for(int i=0;i<num;i++)
		{
			cin>>d[i];
		}
	for(int i=0;i<num;i++)
		{
			for(int j=d[i];j>0;j--)
				{
					for(int k=1;k<=j;k++)
						{
							cout<<"*";
						}
					cout<<endl;	
				}	
		}	
	return 0;
}
