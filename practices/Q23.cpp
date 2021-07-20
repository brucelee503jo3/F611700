#include<iostream>
#include<cstdlib>
using namespace std;
int lcm(int a, int b)
{
	int n;
	for(int i=a;i>0;i++)
		{
			if(i%a==0&&i%b==0)
				{
					n=i;
					break;
				}
		}
	return n;
}
int main()
{
	int n;
	cin>>n;
	for(int i=0;i<n;i++)
		{
			int k,l;
			cin>>k>>l;
			cout<<lcm(k,l)<<endl;
		}
		
	
	return 0;
}
