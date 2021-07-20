#include<iostream>
using namespace std;
int main()
{
	int c[20]={},sum=0,num;
	cin>>num;
	for(int i=0;i<num;i++)
		cin>>c[i];
	for(int i=0;i<num;i++)
		{
			for(;c[i]>0;)
				{
					if(c[i]>0)
						{
							sum+=c[i]%10;
							c[i]=c[i]/10;
						}
				}
			cout<<sum<<endl;
			sum=0;	
		}	
	return 0;
}
