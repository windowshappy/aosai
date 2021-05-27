#include<iostream>
#include<cstdio>

using namespace std;

char a[10],b[10];
int a1[10],b1[10],n;
int a2,b2,y,z=8,d,f;
int year,month,date;
int j,sum,day[10000001][10];
int year1;

int main()
{
	freopen("date.in","r",stdin);
	freopen("date.out","w",stdout);
	scanf("%s",a);
	getchar();
	scanf("%s",b);
	for (int i=0;i<=7;i++)
	{
		a1[i]=a[i]-'0';
		b1[i]=b[i]-'0';
		a2*=10;
		b2*=10;
		a2+=a1[i];
		b2+=b1[i];
		
	}
	year=a2/10000;
	month=a1[4]*10+a1[5];
	date=a1[6]*10+a1[7];
	for (int i=a2;i<=b2;i++)
	{
		j++;
		date++;
		if ((((year%100!=0)&&(year%4==0))||(year%400==0))&&(month==2)&&(date==30))
		{
			date=1;
			month+=1;
		}
		else switch(month)
		{
		case 1:
		if (date==32)
		{
			month++;
			date=1;
		}
		break;
		case 2:
		if (date==28)
		{
			month++;
			date=1;
		}
		break;
		case 3:
		if (date==32)
		{
			month++;
			date=1;
		}
		break;
		case 4:
		if (date==31)
		{
			month++;
			date=1;
		}
		break;
		case 5:
		if (date==32)
		{
			month++;
			date=1;
		}
		break;
		case 6:
		if (date==31)
		{
			month++;
			date=1;
		}
		break;
		case 7:
		if (date==32)
		{
			month++;
			date=1;
		}
		break;
		case 8:
		if (date==32)
		{
			month++;
			date=1;
		}
		break;
		case 9:
		if (date==31)
		{
			month++;
			date=1;
		}
		break;
		case 10:
		if (date==32)
		{
			month++;
			date=1;
		}
		break;
		case 11:
		if (date==31)
		{
			month++;
			date=1;
		}
		break;
		case 12:
		if (date==32)
		{
			month++;
			date=1;
		}
		break;
		}
		i=year*10000+month*100+date;
		d=i;
		while (d!=0)
		{
			n++;
			f=d%10;
			d/=10;
			day[j][n]=f;
		}
		for (int x=8;x>=4;x--)
		{
			z--;
			y++;
			if (day[j][x]==day[j][y])
			{
				continue;
			}
			else break;
		}
		if (z==y)
		{
			sum++;
		}
		y=0;
		z=8;
	}
	printf("%d",sum);	
	fclose(stdin);
	fclose(stdout);
	return 0;
}
