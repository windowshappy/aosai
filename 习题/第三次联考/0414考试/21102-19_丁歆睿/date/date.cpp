#include <cstdio>
#include <iostream>

using namespace std;

int a,b;
int cnt;

bool is_fine(int y) {
	if((y%400 == 0) or (y%100 != 0 and y%4 == 0)) {
		return true;
	}
	return false;
}

bool is_ok(int date) {
	int y = date/10000;
	int m = date%10000/100;
	int d = date%100;
	
	if(d < 1) {
		return false;
	}
	
	if(m < 1 or m > 12) {
		return false;
	}
	
	if(m == 2) {
		if(is_fine(y) and d > 29) {
			return false;
		} else if(!is_fine(y) and d > 28) {
			return false;
		}
	}
	if(m == 1 or m == 3 or m == 5 or m == 7 or m == 8 or m == 10 or m == 12) {
		if(d > 31) {
			return false;
		}
	}
	if(m == 4 or m == 6 or m == 9 or m == 11) {
		if(d > 30) {
			return false;
		}
	}
	return true;
}

void inp() {
	scanf("%d%d",&a,&b);
}

void work() {
	for(register int i=a/10000; i<=b/10000; i++) {
		int s = i*10000+i%10*1000+i%100/10*100+i%1000/100*10+i/1000;		
		if(is_ok(s) and s >= a and s <= b) {
			cnt++;
		}
	}
}

int main() {
	freopen("date.in","r",stdin);
	freopen("date.out","w",stdout);
	
	inp();
	work();
	
	printf("%d",cnt);
	fclose(stdin);
	fclose(stdout);
	return 0;
}
