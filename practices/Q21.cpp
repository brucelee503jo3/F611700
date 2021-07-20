#include<iostream>
#include<cstdlib>
using namespace std;
void rec(int l, int w, int &area, int &peri)
{
	area=l*w;
	peri=(l+w)*2;
}
int main()
{
	int a,b,n;
	cin>>n;
	for(int i=0;i<n;i++)
		{
			cin>>a>>b;
			rec(a,b,a,b);
			cout<<a<<" "<<b<<endl;
		}
	cout<<n<<endl; 
	
	return 0;
}
