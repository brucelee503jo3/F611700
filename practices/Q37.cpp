#include<iostream>
using namespace std;
int main()
{	int n;
	cin>>n;
	cin.get();
	for(int i=0;i<n;i++)
		{
			char c[101];
			cin.getline(c,100);
			char *ch=c;
			int end;
			for(int i=0;*(ch+i)!='\0';i++)
				end=i;	
			for(int i=end;i>=0;i--)
				cout<<*(ch+i);
			cout<<endl;		 
		}
	return 0;
}
