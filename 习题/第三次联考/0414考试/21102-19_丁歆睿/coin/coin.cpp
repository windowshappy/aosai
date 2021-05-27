#include <cstdio>
#include <iostream>

using namespace std;

int k;
int ans;

void inp() {
	scanf("%d",&k);
}

void work() {
	
	int cnt = 0;
	
	for(register int i=1; ; i++) {
		for(register int j=1; j<=i; j++) {
			if(cnt < k) {
				ans+=i;
				cnt++;
			} else {
				return ;
			}
		}
	}
}

int main() {
	freopen("coin.in","r",stdin);
	freopen("coin.out","w",stdout);
	
	inp();
	work();
	
	printf("%d",ans);
	
	fclose(stdin);
	fclose(stdout);
	return 0;
}
