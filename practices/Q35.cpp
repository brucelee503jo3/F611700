#include <iostream>
#include <cstdlib>
#include <string>
using namespace std;
bool poker(int *card)
{
	int i,j,temp;
	for(i=1;i<5;i++)
		{
			for(j=0;j<5-i;j++)
				{
					if(*(card+j)>*(card+j+1))
						{
							temp=*(card+j);
							*(card+j)=*(card+j+1);
							*(card+j+1)=temp;	
						}	
				}	
		}
//	for(int i=0;i<5;i++)
	//	cout<<*(card+i)<<" ";
	//	cout<<endl;	
	int min=*card,max=*(card+4);	 
	if((min==*(card+1)&&max==*(card+3))&&(min==*(card+2)||max==*(card+2)))
		return 1;
	else 
		return 0;	
}
int main(void)
{
	int n;
	cin>>n;
	int a[5];
	for(int i=0;i<n;i++)
		{
			for(int i=0;i<5;i++)
				cin>>a[i];
			if(poker(a)==1)
				cout<<"Yes"<<endl;
			else
		    	cout<<"No"<<endl;
		}



return 0;
}

