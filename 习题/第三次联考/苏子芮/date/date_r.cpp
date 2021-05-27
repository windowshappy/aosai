#include <iostream>
using namespace std;
//2012 2102j
int main(){
	int d1,d2,ans=0;
	cin>>d1>>d2;

	for (int i = d1/10000; i <= d2/10000; ++i)
	{
		int m = i%100/10+i%10*10,d = i/100%10*10+i/1000;
		if(m>12||m<=0) continue;
		if(d>31||d==0) continue;
		if(((m==4)||(m==6)||(m==9)||(m==11))&&d>30) continue;
		if(m==2&&d>29) continue;

		if(i*10000+m*100+d>=d1&&i*10000+m*100+d<=d2) ans++;
	}
	cout<<ans;
	return 0;
}