#include<iostream>
#include<cstdlib>
#include<string>
using namespace std;
int main()
{
	//construct two string objects
	string p,q;
	cout<<"½Ğ¿é¤J¦r¦êP:"; 
	getline(cin,p);
	cout<<"½Ğ¿é¤J¦r¦êQ:";
	getline(cin,q);
	
	//A
	cout<<"A:  "; 
	
	cout<<p<<endl;
	
	//B
	cout<<"B:  ";
	
	for(int i=0;i<p.length();i++)
		if(p.at(i)>=65&&p.at(i)<=90)
			cout<<p.at(i);
	cout<<endl;
	
	//C
	cout<<"C:  ";
	
	cout<<p+q<<endl;
	
	//D
	cout<<"D:  ";
	
	string str;
	str=p+q;
	for(int i=str.length()-1;i>=0;i--)
		cout<<str.at(i);
	cout<<endl;
	
	//E
	cout<<"E:  ";

	int count=0;
	for(int i=0;i<str.length();i++)
		if(str.at(i)>=97&&str.at(i)<=122)
			count++;
	cout<<count<<endl;
	
	//F
	cout<<"F:  ";
	
	count=0;	//Âk¹s 
	for(int i=0;i<str.length();i++)
		if(str.at(i)>=48&&str.at(i)<=57)
			count+=(str.at(i)-48);
	cout<<count<<endl;
				
	//G
	cout<<"G:  ";

	for(int i=0;i<p.length();i++)	
		for(int j=0;j<q.length();j++)
			if(p.at(i)==q.at(j))
				cout<<p.at(i);
	cout<<endl;
		
	//H
	cout<<"H:  ";
	
	cout<<p;
	int status;
	for(int i=0;i<q.length();i++)
		{
			status=0;
			for(int j=0;j<p.length();j++)
				if(q.at(i)==p.at(j))
					status=1;
			if(status==0)
				cout<<q.at(i);	
		}
	cout<<endl;	
	
	//I
	cout<<"I:  ";
	
	str=q;
	for(int i=0;i<str.length();i++)
		{
			if(str.at(i)>=65&&str.at(i)<=90)
				str.at(i)+=32;
			else if(str.at(i)>=97&&str.at(i)<=122)
				str.at(i)-=32;					
		}
	cout<<str<<endl;
		
	//J
	cout<<"J:  ";	
	
	str=p;
	for(int i=1;i<str.length();i++)
		for(int j=0; j < str.length() - i ;j++)
			if(str.at(j)>str.at(j+1))
				{
					char ch=str.at(j+1);
					str.at(j+1)=str.at(j);
					str.at(j)=ch;					
				}
	cout<<str<<endl;
				
	return 0;
} 
