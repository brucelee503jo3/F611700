#include <iostream>
#include <cstdlib>
#include <string>
using namespace std;
void sumFactor(int m, int *sum)
{
	int s=0;
	for(int i=1;i<m;i++)
		{
			if(m%i==0)
				*sum+=i;
			}	
}
bool isPerfect(int m)
{
	int sum=0;
	sumFactor(m,&sum);
	if(sum==m)
		return 1;
	else
		return 0;	
}
int main(void)
{
	int n;
	cin>>n;
	for(int i=0;i<n;i++)
		{
			int num;
			cin>>num;
			if(isPerfect(num)==0)
				cout<<"No"<<endl;
			else
				cout<<"Yes"<<endl;	
		}



return 0;
}

