//110_6
#include<iostream>
using namespace std;
int main()
{
	int num;
	cin>>num;
	for(int i=0;i<num;i++)
		{
			int a[5];
			for(int j=0;j<5;j++)
				cin>>a[j];
			for(int count=1;count<=4;count++)
				{
					for(int count2=1;count2<=5-count;count2++)
						{
							if(a[count2-1]>a[count2])
								{
									int i;
									i=a[count2];
									a[count2]=a[count2-1];
									a[count2-1]=i;
								}
						}
				}//由小排到大
			int avg=(a[0]+a[1]+a[2]+a[3]+a[4])/5;
			if((avg==(a[0]+2))&&(avg==(a[1]+1))&&(avg==a[2])&&(avg==(a[3]-1))&&(avg==(a[4]-2)))
				cout<<"YES"<<endl;
			else if(a[0]==1&&a[1]==10&&a[2]==11&&a[3]==12&&a[4]==13)
				cout<<"YES"<<endl;
			else
				cout<<"NO"<<endl;
		} 
	return 0;
}
