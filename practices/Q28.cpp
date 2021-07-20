#include <iostream>
#include <cstdlib>
#include <string>
using namespace std;
int mid3(int arr[], int m)
{
	int i,j,temp;
	for(i=1;i<m;i++)	
		{
			for(j=0;j<(m-i);j++)
				{
					if(arr[j]>arr[j+1])
						{
							temp=arr[j];
							arr[j]=arr[j+1];
							arr[j+1]=temp;
						}
				}
		}	
	return arr[m/2];	
}
int main(void)
{
	int n;
	cin>>n;
	for(int i=0;i<n;i++)
		{
			int s;
			cin>>s;
			int a[s];
			for(int j=0;j<s;j++)
				{
					cin>>a[j];
				}
			cout<<mid3(a,s)<<endl;	
		}
	return 0;
}
