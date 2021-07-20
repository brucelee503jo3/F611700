#include <iostream>
#include <cstdlib>
#include <string>
using namespace std;
int mid1(int a, int b, int c)
{
	if(a>=b&&b>=c)
		return b;
	else if(a>=c&&c>=b)
		return c;
	else if(b>=a&&a>=c)
		return a;
	else if(b>=c&&c>=a)
		return c;
	else if(c>=a&&a>=b)
		return a;
	else
		return b;		
}
int main(void)
{
	int n;
	cin>>n;
	for(int i=0;i<n;i++)
		{
			int a,b,c;
			cin>>a>>b>>c;
			cout<<mid1(a,b,c)<<endl;
		}
	return 0;
}


