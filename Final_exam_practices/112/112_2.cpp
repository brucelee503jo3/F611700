//112_2
#include<iostream>
using namespace std;
int main()
{
	int a,b,num;
	cin>>num;
	for(int j=0;j<num;j++)
		{
			cin>>a>>b;
			int c=a/b;
			a=a-b*c;
			for(int i=a;i>1;i--)
				{
					if(a%i==0&&b%i==0)
						{
							a=a/i;
							b=b/i;
							break;
						}
				}
			if(c==0&&a==0)
				cout<<"0"<<endl;
			else if(c==0&&a!=0)
				cout<<a<<"/"<<b<<endl;
			else if(c!=0&&a==0)
				cout<<c<<endl;
			else
				cout<<c<<" "<<a<<"/"<<b<<endl;
		}
	return 0;	
} 
