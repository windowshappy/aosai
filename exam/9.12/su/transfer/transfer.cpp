#include<bits/stdc++.h>

using namespace std;
struct ticket{
	int time, maxPrice;
	bool used;
};

ticket make_ticket(int time, int maxPrice){
	ticket a;
	a.time = time;
	a.maxPrice = maxPrice;
	a.used = 0;
	return a;
}
int main(){
	freopen("transfer.in", "r", stdin);
	freopen("transfer.out", "w", stdout);
	int n, a,b,c, price = 0, i=0;
	vector<ticket> T;
	cin>>n;
	while(n--){
		scanf("%d%d%d", &a,&b,&c);
		if(a == 0){
			price += b;
			T.push_back(make_ticket(c, b));
			
		}
		else{
			bool flag = false;
			for(register int j=i;j<T.size();j++){
				if(c-T[j].time<=45&&T[j].maxPrice>=b&&!T[j].used){
					T[j].used = 1;
					flag = 1;
					break;
				}
				//!!!!
				else if(c-T[j].time>45)
					i++;
				//!!!!
			}
			if(flag == 0)
				price += b;
		}
	}
	cout<<price;
	fclose(stdin);
	fclose(stdout);
	return 0;
}
