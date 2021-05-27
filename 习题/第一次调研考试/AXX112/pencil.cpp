#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;
int main()
{
	freopen("pencil.in,","r",stdin);
	freopen("pencil.out","w",stdout);
 	double n;
	int w,x,y;
  	int h=100000000;
	double a,b;
 	cin>>n;
 	for(int i=1;i<=3;i++)
 	{
 		cin>>a>>b;
 		w=(ceil(n/a))*b;
 		if(w<h)
 		{
 			h=w;
 		}
 	}
 	cout<<h;
	fclose(stdin);
	fclose(stdout);
	return 0;
}
