#include<iostream>
using namespace std;
int main()
{
	int b[20]={},num;
	cin>>num;
	for(int i=0;i<num;i++)
		cin>>b[i];
	for(int i=0;i<num;i++)
		{
			if(i%2==0)
				cout<<((b[i]+1)/2)<<endl;
			else
				cout<<((b[i]+1)/2)*(-1)<<endl;		
		}	
	return 0;
}
