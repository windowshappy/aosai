#include<iostream>
#include<cstdio>
using namespace std;
int month(int m,int y)//m�µ�����
{
	if(m==1||m==3||m==5||m==7||m==8||m==10||m==12)
	return 31;
	else if(m==2)
	{
		if(y%400==0
			||(y%100&&y%4==0))
		return 29;
		else
		return 28;
	}
	else
	return 30;
}
bool check(int x) //�ж������Ƿ�Ϸ�
{
	int y=x/1000,m=x/100%100,d=x%100; //���������
	if(y>1000&&m&&d
		&&m<=12&&d<=month(m,y))
	return 1;
	else
	return 0;
}
bool hw(int x) //�ж��Ƿ����
{
	int i,t=0;
	for(i=1;i<=4;i++)
	{
		t=t*10+x%10;
		x/=10;
	}
	if(t==x)
	return 1;
	else
	return 0;
}
int main()
{
	freopen("date.in","r",stdin);
	freopen("date.out","w",stdout);
	int start,end;
	int i;
	int ans=0;
	
	cin>>start>>end;
	for(i=start;i<=end;i++) //�������
	 if(check(i)&&hw(i))
	  ++ans;
	cout<<ans;
	
	fclose(stdin); fclose(stdout);
	return 0;
}
