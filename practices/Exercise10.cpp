#include<iostream>
#include<cstdlib>
using namespace std;
int main()
{
	int a,pow=1;
	cin>>a;
	for(int i=1;i<=a;i++)
		{
			pow*=2;
		}
	cout<<pow<<endl;
	
	return 0;
}
