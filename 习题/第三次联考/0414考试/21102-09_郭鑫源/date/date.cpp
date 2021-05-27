#include<iostream>
#include<cstdio>
#include<algorithm>
#include<string>
using namespace std;
string a,b;
int aa[4],bb[4],ans,tot;
char c[9]; 
int x[14]={0,31,28,31,30,31,30,31,31,30,31,30,31};
void cun(string s,bool f)
{
	int year=0,month=0,day=0;
	for(int i=0;i<s.size();i++)
	{
		if(i<=3)
		{
			year=year*10+(s[i]-'0');
		}
		else if(i>3&&i<6)
		{
			month=month*10+(s[i]-'0');
		}
		else
		{
			day=day*10+(s[i]-'0');
		}
	}
	if(f)
	{
		aa[1]=year;aa[2]=month;aa[3]=day;
	}
	else
	{
		bb[1]=year;bb[2]=month;bb[3]=day;
	}
}
bool pan(int a)
{
	if(a%4==0&&a%100!=0)
	{
		return 1;
	}
	if(a%400==0)
	{
		return 1;
	}
	return 0;
}
int main()
{
	freopen("date.in","r",stdin);
	freopen("date.out","w",stdout);
    cin>>a;
    cin>>b;
    cun(a,1);cun(b,0);
    int n=bb[1]-aa[1]+1;
    while(n>0)
    {
    	n--;
    	int year=aa[1]+tot;
    	tot++;//2011,1102
    	c[0]=(year/1000)+'0';c[1]=((year/100)%10)+'0';c[2]=((year/10)%10)+'0';c[3]=(year%10)+'0';
    	c[4]=c[3];c[5]=c[2];c[6]=c[1];c[7]=c[0];
    	int month=(c[4]-'0')*10+(c[5]-'0'),day=(c[6]-'0')*10+(c[7]-'0');
    	if(year==aa[1])
    	{
    		if(month<aa[2])
    		{
    			continue;
    		}
    		if(month==aa[2])
    		{
    			if(day<aa[3])
    			{
    				continue;
    			}
    		}
    	}
    	if(pan(year))
    	{
    		x[2]=29;
    	}
    	else
    	{
    		x[2]=28;
    	}
    	if(month>0&&month<13&&day>0&&day<=x[month])
    	{
    		if(year<bb[1])
    		{
    			ans++;
    		}
    		if(year==bb[1]&&month<bb[2])
    		{
    			ans++;
    		}
    		if(year==bb[1]&&month==bb[2]&&day<bb[3])
    		{
    			ans++;
    		}
    		if(year==bb[1]&&month==bb[2]&&day==bb[3])
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
