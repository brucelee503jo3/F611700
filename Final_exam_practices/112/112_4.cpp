//112_4
#include<iostream>
using namespace std;
int main()
{
	int num;
	cin>>num;
	for(int count=0;count<num;count++)
		{
			int a,b;
			cin>>a>>b;
			int flag=0;
			for(int i=a;i<=b;i++)
				{
					for(int j=a;j<i;j++)
						{
							int flag2=1;
						//	cout<<"{"<<j<<","<<i<<"}";
							for(int k=j;k>0;k--)
								{
									if(i%k==0&&j%k==0)
										{
											flag2=k;
											break;
										}
								}
							if(flag2==1)
								{
									flag++;	
								}	
						}
				//	cout<<endl;
				}
			cout<<flag<<endl;
		}	
	
	
	
	return 0;
}
