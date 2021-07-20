#include<iostream>
#include<cstdlib>
using namespace std;
int gcd(int, int);
int main()
{
	int a;
	cin>>a;
	for(int i=0;i<a;i++)
		{
			int b,c,e;
			cin>>b>>c;
			e=gcd(b,c);
			cout<<e<<endl;
		}
	
	
	
	return 0;
}
int gcd(int a, int b)
{
	int n;
	for(int i=a;i>0;i--)
		{
			if(a%i==0&&b%i==0)
				{
					n=i;
					break;			
				}
		}
	return n;
}
