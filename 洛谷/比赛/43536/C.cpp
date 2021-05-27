#include <bits/stdc++.h>

using namespace std;

void right() {
	int a,b,c,x,y, ans=0;
	cin>>a>>b>>c>>x>>y;
	while (a>0 or b>0) {
		if(a>c){
			a-=c;
			ans+=x;
		}
		else{
			if(a>0){
				b-=c-a;
				a=0;
				ans+=x;
			}
			else{
				b-=c;
				ans+=min(x,y);
			}
		}
	}
	cout<<ans;
}

int main()
{
	// int a,b,c,x,y;
	// long long money = 0;
	// cin>>a>>b>>c>>x>>y;
	// if(x<=y)
	// {
	// 	money+=ceil(a*1.0/c+b*1.0+c)*x;
	// }
	// else if(x>y)
	// {
	// 	int t = ceil(a*1.0/c);
	// 	double t1 = b*1.0/c+a*1.0/c-t;
	// 	money+= t*x+(ceil(b*1.0/c-t1))*y;
	// }
	// cout<<money;
	right();
	return 0;
}
