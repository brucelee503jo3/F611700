#include<iostream>
#include<cstdlib>
using namespace std;
char letter(int);
int main()
{
	int a;
	cin>>a;
	int b[a];
	for(int i=0;i<a;i++)
		{
			cin>>b[i];
		}
	for(int i=0;i<a;i++)
		{
			letter(b[i]);
			cout<<endl;
		}
	
	
	return 0;
}
char letter(int m)
{
	cout<<(char)(m+64);
}
