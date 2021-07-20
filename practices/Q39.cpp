#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	for(int i=0;i<n;i++)
		{
			int n1,n2;
			char test;
			cin>>n1>>test>>n2;
			switch(test)
				{
					case '+':
						cout<<n1+n2<<endl;
						break;
					case '-':
						cout<<n1-n2<<endl;
						break;
					case '*':
						cout<<n1*n2<<endl;
						break;	
					default:
						break;	
				}				
		}
	return 0;	
}	
