//110_1 
#include<iostream>
using namespace std;
int main()
{

	int num=0;
	cin>>num;
	for(int i=0;i<num;i++)
		{
			int a,b,c;
			cin>>a>>b>>c;
			int e=a*b,f=b*c,g=a*c;
			int max=e;
			if(f>max)
				max=f;
			if(g>max)
				max=g;
			cout<<max<<endl;
		}

	return 0;
}
