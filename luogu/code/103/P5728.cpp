#include<bits/stdc++.h> 
using namespace std;
int main()
{
	freopen("P5728_5.in","r",stdin);
	int l[1001][4],m[1001],n,ans=0;
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>l[i][1]>>l[i][2]>>l[i][3];
		m[i] = l[i][1]+l[i][2]+l[i][3];
	}
	for(int i=1;i<=n;i++){
		for(int j=i+1;j<=n;j++){
			if(abs(l[i][1]-l[j][1])<=5&&
			abs(l[i][2]-l[j][2])<=5&&
			abs(l[i][3]-l[j][3])<=5&&
			abs(m[i]-m[j])<=10)
				ans++;
		}
	}
	cout<<ans<<endl;
	return 0;
	
}
 
