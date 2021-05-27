#include<cstdio>
#include<iostream>
#include<cstring>
using namespace std;
int year1,month1,day1;
int year2,month2,day2;
string date1,date2;
int ans;
bool run(int x)
{
	if(x%4==0&&x%100!=0)
	{
		return 1;
	}
	if(x%400==0)
	{
		return 1;
	}
	return 0;
}
 bool pick(int x)
{
	int year=x/10000;
	int month=(x%10000)/100;
	int day=x%100;
	if(month>12)
	{
		return false;
	}
	if(day>31)
	{
		return false;
	}
	if(run(year))
	{
		if((month!=1&&month!=3&&month!=5&&month!=7&&month!=8&&month!=10&&month!=12)&&day==31)
		{
			return false;
		}
		if(month==2&&day>29)
		{
			return false;
		}
		if(month==4&&day>30)
		{
			return false;
		}
		if(month==6&&day>30)
		{
			return false;
		}
		if(month==9&&day>30)
		{
			return false;
		}
		if(month==11&&day>30)
		{
			return false;
		}
	}
	else
	{
		if((month!=1&&month!=3&&month!=5&&month!=7&&month!=8&&month!=10&&month!=12)&&day==31)
		{
			return false;
		}
		if(month==2&&day>28)
		{
			return false;
		}
		if(month==4&&day>30)
		{
			return false;
		}
		if(month==6&&day>30)
		{
			return false;
		}
		if(month==9&&day>30)
		{
			return false;
		}
		if(month==11&&day>30)
		{
			return false;
		}
	}
	return true;
}
bool hui(int x)
{
	int a[10];
	for(int i=1; i<=8;i++)
	{
		a[i]=x%10;
		x/=10;
	}
	if((a[1]==a[8])&&(a[2]==a[7])&&(a[3]==a[6])&&(a[4]==a[5]))
	{
		return 1;
	}
	return 0;
}
int main()
{
	freopen("date.in","r",stdin);
	freopen("date.out","w",stdout);
	cin>>date1>>date2;
	year1=(date1[0]-'0')*1000+(date1[1]-'0')*100+(date1[2]-'0')*10+date1[3]-'0';
	year2=(date2[0]-'0')*1000+(date2[1]-'0')*100+(date2[2]-'0')*10+date2[3]-'0';
	month1=(date1[4]-'0')*10+(date1[5]-'0');
	month2=(date2[4]-'0')*10+(date2[5]-'0');
	day1=(date1[6]-'0')*10+(date1[7]-'0');
	day2=(date2[6]-'0')*10+(date2[7]-'0');
	int datea=year1*10000+month1*100+day1;
	int dateb=year2*10000+month2*100+day2;
	for(register int i=datea;i<=dateb;i++)
	{
		if(pick(i))
		{
			if(hui(i))
			{
				ans++;
			}
		}
	}
	cout<<ans;
	fclose(stdin);
	fclose(stdout);
	return 0;
}
