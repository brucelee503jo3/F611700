#include<iostream>
#include<cstdlib>
using namespace std;
int f(int m)
{
	if(m==2||m==1)
		return 1;
	else 
		return f(m-1)+f(m-2);	
}
int main()
{
	int n;
	cin>>n;
	for(int i=0;i<n;i++)
		{
			int k;
			cin>>k;
			cout<<f(k)<<endl;
		}
	return 0;
}
