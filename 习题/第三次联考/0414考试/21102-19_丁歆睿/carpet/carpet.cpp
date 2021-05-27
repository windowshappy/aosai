#include <cstdio>

using namespace std;

int n;
int x1[100005],y1[100005],x2[100005],y2[100005];
int x,y;

void inp() {
	scanf("%d",&n);
	for(register int i=1; i<=n; i++) {
		scanf("%d%d%d%d",&x1[i],&y1[i],&x2[i],&y2[i]);
	}
	scanf("%d%d",&x,&y);
}

void work() {
	for(register int i=n; i>=1; i--) {
		if(x <= x2[i] and x >= x1[i] and y <= y2[i] and y >= y1[i]) {
			printf("%d",i);
			return ;
		}
	}
	printf("-1");
}

int main() {
	freopen("carpet.in","r",stdin);
	freopen("carpet.out","w",stdout);
	
	inp();
	work();
	
	fclose(stdin);
	fclose(stdout);
	return 0;
}
