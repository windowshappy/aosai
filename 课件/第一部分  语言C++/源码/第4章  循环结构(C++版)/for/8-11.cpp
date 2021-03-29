#include<iostream>
#include<cmath>
#include<cstdio>
#include<cstdlib>

using namespace std;

void t8(){
	int m,n,ans=0;
	cin>>m>>n;
	if(m%17!=0) m+=(17-m%17);
	if(n%17!=0) n-=(17-n%17);
	for(int i=0;i<(n-m)/17+1;i++) {
		ans+=m+i*17;
	}
	cout<<ans;
}

void t9(){
	int k,a,c1=0,c5=0,c10=0;
	cin>>k;
	for(int i=0;i<k;i++){
		cin>>a;
		switch(a) {
			case 1:
				c1++;
				break;
			case 5:
				c5++;
				break;
			case 10:
				c10++;
				break;
		}

	}
	cout<<c1<<endl<<c5<<endl<<c10<<endl;
}

void t10(){
	int n,m,a,c=0;
	cin>>n>>m;
	for(int i=0;i<n;i++){
		cin>>a;
		if(a==m) c++;
		
	}
	cout<<c;
}

void t11();

int main(){
	//freopen(".in", "r", stdin);
	//freopen(".out", "w", stdout);
	t11();
	//fclose(stdin);
	//fclose(stdout);
	return 0;
}
void t11(){
	int a,n,b=0;
	cin>>a>>n;
	b=a;
	for(int i=1;i<n;i++){
		b*=a;
	}
	cout<<b;
}

