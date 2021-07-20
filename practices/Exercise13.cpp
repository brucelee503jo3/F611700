#include<iostream>
#include<cstdlib>
using namespace std;
int main()
{
	float a;
	cin>>a;
	for(int i=1;i>0;i++)
		{
			a/=2;
			if(a<=1)
				{
					cout<<i;
					break;
				}
		}
	return 0;
}
