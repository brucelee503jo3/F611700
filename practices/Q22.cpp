#include<iostream>
#include<cstdlib>
using namespace std;
int digtal(int m)
{
	if(m<10)
		return 1;
	else 
		return digtal(m/10)+1;
}
int main()
{
	int n;
	cin>>n;
	for(int i=0;i<n;i++)
		{
			int a;
			cin>>a;
			cout<<digtal(a)<<endl;
		}	
	return 0;
}
