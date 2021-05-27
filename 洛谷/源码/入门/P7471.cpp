#include<bits/stdc++.h>

using namespace std;

int main() {
	int T,a[3];
	scanf("%d",&T);
	while(T--) {
		scanf("%d%d%d",a,a+1,a+2),sort(a,a+3);
		printf("%d\n",(a[0]==0?(a[1]==0?0:(a[1]==a[2]?1:2)):(a[0]+a[1]==a[2]||a[0]==a[1]||a[1]==a[2]?2:3)));
	}
}
