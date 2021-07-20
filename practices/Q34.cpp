#include <iostream>
#include <cstdlib>
#include <string>
using namespace std;
void rf(int *a, int *b)
{
	for(int i=*a;i>1;i--)
		{
			if(*a%i==0&&*b%i==0)
				{
					*a/=i;
					*b/=i;
					break;		
				}		
		}	
	cout<<*a<<"/"<<*b<<endl;	
}
int main(void)
{
	int n;
	cin>>n;
	for(int i=0;i<n;i++)
		{
			int numerator,denominator;
			cin>>numerator>>denominator;
			rf(&numerator,&denominator);
		}



return 0;
}

