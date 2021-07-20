#include<iostream>
#include<cstdlib>
using namespace std;
int main ()
{
	int a=0,b=0;
	cin>>a;cout<<endl;
	cin>>b;cout<<endl;
	if(a%b<(float)b*0.5)
	{
		cout<<a/b<<endl;
	}
	if(a%b>=(float)b*0.5)
	{
		cout<<(a/b)+1<<endl;
	}
	return 0;	
} 
