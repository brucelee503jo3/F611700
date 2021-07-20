//110_4
#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
	int num;
	cin>>num;
	for(int i=0;i<num;i++)
		{
			float a=0.0f,b=0.0f,c=0.0f,d=0.0f,e=0.0f;
			cin>>a>>b>>c>>d>>e;
			float grade=0.0f;
			if(a<=b&&a<=c)
				grade=(b+c)*0.6/2;
			else if(b<=a&&b<=c)
				grade=(a+c)*0.6/2;
			else
				grade=(a+b)*0.6/2;	
			float min=d,max=e;
			if(d>e)
				{
					max=d;
					min=e;
				}
			grade=grade+max*0.6*0.4+min*0.4*0.4;
			printf("%.2f",grade);
			cout<<endl;
		}
	return 0;
}
