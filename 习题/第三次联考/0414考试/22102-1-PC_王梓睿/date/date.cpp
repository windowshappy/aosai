#include<iostream>
#include<cstdio>
using namespace std;
int a[10],b[10];
int main()
{
	freopen("date.in","r",stdin);
	freopen("date.out","w",stdout);
	int date1,date2;
	int sum=0;
	int year,month,day;
	cin>>date1>>date2;
	year=date1/10000;
	month=(date1-year*10000)/100;
	day=date1%100;
	for(int i=1;i<=8;i++)
	{
		a[i]=date1%10;
		date1/=10;
		b[9-i]=a[i];
	}
	for(int i=1;i<=8;i++)
	{
		if(a[i]==b[i])
		{
			sum=1;
			continue;
		}
		else
		{
			sum=0;
			break;
		}
	}
	cout<<sum;
	fclose(stdin);
	fclose(stdout);
	return 0;
}
