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
int main(void)
{
	int n;
	cin>>n;
	for(int i=0;i<n;i++)
		{
			int sum=0;
			int num;
			cin>>num;
			sumFactor(num,&sum);
			cout<<sum<<endl;
		}



return 0;
}

