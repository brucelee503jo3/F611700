#include <iostream>
#include <cstdlib>
#include <string>
#include<stdio.h>
using namespace std;
void circle(int r, double *area, double *peri)
{
	double pi=3.1416;
	*area=r*r*pi;
	*peri=r*2*pi;
}
int main(void)
{
	int n;
	double area,peri;
	cin>>n;
	for(int i=0;i<n;i++)
		{
			int r;
			cin>>r;
			circle(r,&area,&peri);
			printf("%.2f %.2f",area,peri);
			cout<<endl;		
		}



return 0;
}

