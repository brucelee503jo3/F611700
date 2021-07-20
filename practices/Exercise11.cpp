#include<iostream>
#include<cstdlib>
using namespace std;
int main()
{
	int a;
	cin>>a;
	for(int i=1;i<=100;i++)
		{
			if(i%a==0)
				{
					cout<<i<<" ";
				}
		}

	
	return 0;
}
