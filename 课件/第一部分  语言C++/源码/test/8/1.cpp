#include<iostream>
#include<algorithm>
using namespace std;
int a[10];
int comp(const int & a,const int & b)  
{
	return a>b;
}  
int main()
{
	for (int i=0;i<10;++i) cin>>a[i];
	sort(a+0,a+10,comp);
	for (int i=0;i<10;++i) cout<<a[i]<<' ';
	cout<<endl;
	return 0;
}
