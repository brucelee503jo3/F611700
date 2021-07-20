#include<iostream>
#include<cstdlib>
using namespace std;
bool isPrime(int m)
{
	if(m==0)
		return 0;
	if(m==1)
		return 0;
	int status=1;
	for(int i=2;i<m;i++)
		{
			if(m%i==0)
				{
					status=0;	
					break;
				}
		}
	return status;	
}
int main()
{
	int n;
	cin>>n;
	for(int i=0;i<n;i++)
		{
			int k,status;
			cin>>k;
			status=isPrime(k);
			if(status==1)
			cout<<"yes"<<endl;
			else
			cout<<"no"<<endl;
		}
	
	
	return 0;
}
