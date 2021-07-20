#include <iostream>
#include <cstdlib>
#include <string>
using namespace std;
int mid2(int arr[5])
{
	int i,j,temp;
	for(i=1;i<5;i++)	
		{
			for(j=0;j<(5-i);j++)
				{
					if(arr[j]>arr[j+1])
						{
							temp=arr[j];
							arr[j]=arr[j+1];
							arr[j+1]=temp;
						}
				}
		}
	return arr[2];	
}
int main(void)
{
	int n;
	cin>>n;
	int a[5];
	for(int i=0;i<n;i++)
		{
			for(int j=0;j<5;j++)
				{
					cin>>a[j];
				}
			cout<<mid2(a)<<endl;	
		}
	return 0;
}
/*	
	int i,j,temp;
	for(i=1;i<size;i++)	
		{
			for(j=0;j<(size-i);j++)
				{
					if(a[j]>a[j+1])
						{
							temp=a[j];
							a[j]=a[j+1];
							a[j+1]=temp;
						}
				}
		}
*/

