#include<iostream>
#include<cstdio>
using namespace std;
int y1,m1,d1,y2,m2,d2,num1,num2,ans;
int month[15]={0,31,28,31,30,31,30,31,31,30,31,30,31};
int run(int a){//判断是否闰年 
	if((a%4==0&&a%100!=0)||(a%400==0))
	return true;
	return false;
}
int hui(int b){//判断是否回文 
	int p[15]={},u=0;
	while(b>0){
		++u;p[u]=b%10;b/=10;
	}
	for(int i=1;i<=u/2;++i){
		if(p[i]!=p[u-i+1])return false;
	}return true;
}
int main()
{
	freopen("date.in","r",stdin);
	freopen("date.out","w",stdout);
	cin>>num1>>num2;
	int lin=num2;//下面的运算会让num1和num2的数值变为0，需要用lin储存num2 
	y1=num1/10000;y2=num2/10000;
	m1=(num1-10000*y1)/100;m2=(num2-10000*y2)/100;
	d1=num1%100;d2=num2%100;//m1,m2,d1,d2,y1,y2储存两个日期的年月日 
	//cout<<y1<<" "<<m1<<" "<<d1<<endl<<y2<<" "<<m2<<" "<<d2<<endl<<endl;
	for(int i=y1;i<=y2;++i){//遍历每一年 
		int j,k;if(i==y1)j=m1;else j=1;//判断初始月份 
		if(run(i))month[2]=29;
		else month[2]=28;//判断闰年 
		
		for(;j<=12;++j){//遍历每一月 
			if(j==m1&&i==y1)k=d1;else k=1;//判断初始日
			for(;k<=month[j];++k){//遍历每一日 
				if(hui(i*10000+j*100+k))++ans;
				//cout<<i*10000+j*100+k<<" "<<hui(i*10000+j*100+k)<<" "<<run(i)<<endl;
				if(i*10000+j*100+k==lin)break;//如果到了规定日期，停止 
			}
			if(i*10000+j*100+k==lin)break;//如果到了规定日期，停止 
		}
		if(i*10000+j*100+k==lin)break;//如果到了规定日期，停止 
	}
	cout<<ans<<endl;
	fclose(stdin);fclose(stdout);
	return 0;
}
