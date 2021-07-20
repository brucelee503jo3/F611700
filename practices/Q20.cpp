#include<iostream>
#include<cstdlib>
using namespace std;
int f(int );
int main()
{
	int a;
	cin>>a;
	for(int i=0;i<a;i++)
		{
			int b,n;
			cin>>b;
			n=f(b);
			cout<<n<<endl;
		}
	return 0;
}
int f(int m)
{
	if(m==0)
		{
			return 3;
		}
	else if(m>0)
		{
			return 2*f(m-1)-5;
		}	
}
