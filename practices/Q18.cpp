#include<iostream>
#include<cstdlib>
using namespace std;
#define MAX(a,b,c) (a>b?a:b)>c?(a>b?a:b):c 
int main()
{
	int a;
	cin>>a;
	for(int b=0;b<a;b++)
		{
			int i,j,k,n;
			cin>>i>>j>>k;
			n=MAX(i,j,k);
			cout<<n<<endl;	
		}	
	
	
	return 0;
}
