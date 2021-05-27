#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
	freopen("isbn.in","r",stdin);
	freopen("isbn.out","w",stdout);
	int a[13],ans;
	cin>>a[13];
	ans=a[0]*1+a[2]*2+a[3]*3+a[4]*4+a[6]*5+a[7]*6+a[8]*7+a[9]*8+a[10];
	ans=ans%10;
	if(ans==a[13]){
		cout<<"Right";
	}
	else{
		cout<<a[0]<<a[1]<<a[2]<<a[3]<<a[4]<<a[5]<<a[6]<<a[7]<<a[8]<<a[9]<<a[10]<<a[11]<<a[12]<<ans;
	}
	fclose(stdin);
	fclose(stdout);
	return 0;
}
