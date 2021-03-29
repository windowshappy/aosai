#include<iostream>
#include<cstdio>
using namespace std;
int a[15],jin,mother,cun;
int main()
{
	freopen("save.in","r",stdin);
	freopen("save.out","w",stdout);
	for(int i=1;i<=12;++i)
		cin>>a[i];
	for(int i=1;i<=12;++i){
		jin+=300;
		jin-=a[i];
		if(jin>=0){
			cun=(jin/100*100);
		mother+=cun;
		jin-=cun;
		}
		if(jin<0){
			cout<<'-'<<i;break;
		}
		if(i==12&&jin>=0){
			cout<<mother*1.20+jin;
		}
	}
	fclose(stdin);fclose(stdout);
	return 0;
}
