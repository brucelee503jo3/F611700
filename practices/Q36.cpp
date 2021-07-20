#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	cin.get();
	for(int i=0;i<n;i++)
		{
			int count=0;
			char c[101]={};
			cin.getline(c,100);
			char *ch=c;
			for(int i=0;i<101;i++)
				{
					if((*(ch+i)>=65&&*(ch+i)<=90)||(*(ch+i)>=97&&*(ch+i)<=122))
						count++;
				}
		cout<<count<<endl;
		}
	return 0;	
}
