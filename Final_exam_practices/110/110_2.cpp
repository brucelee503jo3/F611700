//110_2 
#include<iostream>
using namespace std;
struct rational
{
	int numerator;
	int denominator;
};
struct rational process(struct rational r)
{
	if(r.numerator>0)
		{
			if(r.denominator<0)
				{
					r.denominator*=-1;
					r.numerator*=-1;
				}
		}
	else
		{
			if(r.denominator>0)
				{
				}
			else
				{
					r.denominator*=-1;
					r.numerator*=-1;						
				}
		}
	for(int i=r.denominator;i>0;i--)//Óf§A¶ý­t¼Æ 
		{
			if(r.numerator%i==0&&r.denominator%i==0)
				{
					r.denominator/=i;
					r.numerator/=i;
					break;
				}
		}
	return r;		
}
struct rational addition(struct rational r1,struct rational r2)
{
	int newn=r1.numerator*r2.denominator+r1.denominator*r2.numerator;
	int newd=r1.denominator*r2.denominator;
	struct rational r;
	r.numerator=newn;
	r.denominator=newd;
	return r;
}
void print(struct rational r)
{
	
	if(r.numerator%r.denominator==0)
		cout<<r.numerator/r.denominator<<endl;
	else
		{
			if(r.numerator>0)
				{
					int integer=r.numerator/r.denominator;
					if(integer==0)
						cout<<r.numerator-r.denominator*integer<<"/"<<r.denominator<<endl;
					else
						cout<<integer<<" "<<r.numerator-r.denominator*integer<<"/"<<r.denominator<<endl;
				}
			else
				{
					r.numerator*=-1;
					int integer=r.numerator/r.denominator;
					if(integer==0)
						cout<<"-"<<r.numerator-r.denominator*integer<<"/"<<r.denominator<<endl;
					else
						cout<<"-"<<integer<<" "<<r.numerator-r.denominator*integer<<"/"<<r.denominator<<endl;					
				}		
		}	
}
void printrational(struct rational r)
{
	cout<<r.numerator<<"/"<<r.denominator<<endl;
}
int main()
{
	int n;
	cin>>n;
	for(int i=0;i<n;i++)
		{
			struct rational r1,r2;
			cin>>r1.numerator>>r1.denominator>>r2.numerator>>r2.denominator;
			r1=process(r1);
		//	printrational(r1);			
			r2=process(r2);
		//	printrational(r2);
			struct rational r3=addition(r1,r2);
			r3=process(r3);
		//	printrational(r3);
			print(r3);
		}
	return 0;
}
