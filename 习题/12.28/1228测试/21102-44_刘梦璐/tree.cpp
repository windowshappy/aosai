#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
	freopen("tree.in","r",stdin);
	freopen("tree.out","w",stdout);
	int l;
	cin>>l;
	int x1,y1,x2,y2;
	cin>>x1>>y1;
	int sum;
	sum=l+1-(y1-x1+1);
	cin>>x2>>y2;
	if(x2>=x1&&x2<=y1&&y2>=y1)
		sum=sum-(y2-y1);
	else if(x2<=x1&&y2<=y1)
		sum=sum-(x1-x2);
	else if(x2>=x1&&x2<=y1&&y2<=y1)
		sum=sum;
	else
		sum=sum-(y2-x2+1);
	cout<<sum;
	fclose(stdin);
	fclose(stdout);
	return 0;
}
