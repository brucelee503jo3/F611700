#include<iostream>
using namespace std;
int main()
{

	char ch[5][5];
	for(int i=0;i<5;i++)
		for(int j=0;j<5;j++)
			cin>>ch[i][j];		
	for(int i=0;i<5;i++)
		for(int j=0;j<5;j++)
			if(ch[i][j]!='*')
				ch[i][j]=48;
/*	for(int i=0;i<5;i++)
		for(int j=0;j<5;j++)
			cout<<ch[i][j];	
	cout<<endl;	*/							
	for(int i=0;i<5;i++)
		for(int j=0;j<5;j++)
			if(ch[i][j]!='*')
				{
					if((i-1>=0&&i-1<5)&&(j-1>=0&&j-1<5))
					if(ch[i-1][j-1]=='*')
						ch[i][j]++;
					if((i-1>=0&&i-1<5)&&(j>=0&&j<5))						
					if(ch[i-1][j]=='*')
						ch[i][j]++;
					if((i-1>=0&&i-1<5)&&(j+1>=0&&j+1<5))						
					if(ch[i-1][j+1]=='*')
						ch[i][j]++;
					if((i>=0&&i<5)&&(j-1>=0&&j-1<5))						
					if(ch[i][j-1]=='*')
						ch[i][j]++;
					if((i>=0&&i<5)&&(j+1>=0&&j+1<5))						
					if(ch[i][j+1]=='*')
						ch[i][j]++;						
					if((i+1>=0&&i+1<5)&&(j-1>=0&&j-1<5))						
					if(ch[i+1][j-1]=='*')
						ch[i][j]++;
					if((i>=0&&i<5)&&(j>=0&&j<5))						
					if(ch[i+1][j]=='*')
						ch[i][j]++;
					if((i+1>=0&&i+1<5)&&(j+1>=0&&j+1<5))						
					if(ch[i+1][j+1]=='*')
						ch[i][j]++;																																								
				}
	for(int i=0;i<5;i++)
		{
			for(int j=0;j<5;j++)
				{
					cout<<ch[i][j];	
				}
			cout<<endl;			
		}
/*	char c[25]={0};
	for(int i=0;i<25;i++)
		cin>>c[i];
	for(int i=0;i<25;i++)	
		if(c[i]!='*')
			c[i]=48;
	for(int i=0;i<25;i++)
		{
			if(c[i]!='*')
				{
					if(c[i-6]=='*') 
						c[i]++;
					if(c[i-5]=='*') 
						c[i]++;
					if(c[i-4]=='*') 
						c[i]++;	
					if(c[i-1]=='*') 
						c[i]++;	
					if(c[i+1]=='*') 
						c[i]++;
					if(c[i+4]=='*') 
						c[i]++;				
					if(c[i+5]=='*') 
						c[i]++;				
					if(c[i+6]=='*') 
						c[i]++;				
				} 
		}
	for(int i=0;i<25;i++)
		{
			cout<<c[i];
			if((i+1)%5==0)
				cout<<endl;
		}	*/
	return 0;	
}	
