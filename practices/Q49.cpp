#include<iostream>
#include<string>
using namespace std;
class student
{
	public:
		void setdata(string,string,int);
		string getname();
		string getgender();
		int getgrade();
	private:
		string name;
		string gender;
		int grade;		
};
void student::setdata(string n,string ge,int gr) 
{
	name=n;
	gender=ge;
	grade=gr;
}
string student::getname()
{
	return name;
}
string student::getgender()
{
	return gender;
}
int student::getgrade()
{
	return grade;
}
int main()
{
	int n;
	cin>>n;
	student students[n];
	for(int i=0;i<n;i++)
		{
			string name;
			string gender;
			int grade;
			cin>>name>>gender>>grade;
			students[i].setdata(name,gender,grade);
		}
	for(int i=0;i<n;i++)
		{
			cout<<students[i].getname()<<" "<<students[i].getgender()<<" "<<students[i].getgrade()<<endl;
		}		
	for(int i=1;i<n;i++)
		for(int j=0;j<n-i;j++)
			if(students[j].getname()>students[j+1].getname()) 
				{
					student temp;
					temp=students[j];
					students[j]=students[j+1];
					students[j+1]=temp;
				}			
	for(int i=0;i<n;i++)
		{
			cout<<students[i].getname()<<" "<<students[i].getgender()<<" "<<students[i].getgrade()<<endl;
		}		
} 
/*
10
Johnny M 72
Johnson M 83
Wei M 62
Amy F 75
Mary F 96
Mannie F 83
Wang M 53
Catilyn F 93
Cathie F 63
Aminie F 23
*/
