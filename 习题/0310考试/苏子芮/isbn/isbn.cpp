#include<iostream>
#include<cstdio>

using namespace std;

int main(){
	freopen("isbn.in", "r", stdin);
	freopen("isbn.out", "w", stdout);
	int isbnl[15], t=0;
	char s[30];
	
	//scanf("%d-%d%d%d-%d%d%d%d%d-%c", &isbnl[0], &isbnl[1], &isbnl[2], &isbnl[3], &isbnl[4], &isbnl[5], &isbnl[6], &isbnl[7], &isbnl[8], &s);
	cin>>s;
	
	//printf("%d-%d%d%d-%d%d%d%d%d-%c", isbnl[0], isbnl[1], isbnl[2], isbnl[3], isbnl[4], isbnl[5], isbnl[6], isbnl[7], isbnl[8], isbnl[9]);
	for(int i=0;i<12;i++){
		if(s[i]!='-'){
			isbnl[t] = s[i]-48;
			t++;
		}
	}
	if(s[12]=='X'||s[12]=='x') isbnl[9] = 10;
	else isbnl[9] = (int)s[12]-48;
	t=0;
	for(int i=1;i<=9;i++){
		t+=isbnl[i-1]*i;
	}
	t%=11;
	if(t==isbnl[9]){
		cout<<"Right";
	}else{
		if(t!=10) s[12] = t+48;
		else s[12] = 'X';
		cout<<s;
		//printf("%d-%d%d%d-%d%d%d%d%d-%c", isbnl[0], isbnl[1], isbnl[2], isbnl[3], isbnl[4], isbnl[5], isbnl[6], isbnl[7], isbnl[8], s);
	}
	fclose(stdin);
	fclose(stdout);
	return 0;
}
