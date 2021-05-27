#include<bits/stdc++.h>

using namespace std;

struct student{
	string name;
	int a,b,c;
	char g,w;
} s[200];

//int main(){
//	freopen("P1051_1.in", "r", stdin);
//	int n;
//	string name,n1;
//	int a,b,c;
//	char g,w;
//	cin>>n;int ma = -100,mb = 0;
//	for(int i=0;i<n;i++){
//		cin>>name>>a>>b>>g>>w>>c;
//		s[i].name = name;
//		s[i].a = a;
//		s[i].b = b;
//		s[i].g = g;
//		s[i].w = w;
//		s[i].c = c;
//		int t = 0;
//		if(a>80&&c>=1){
//			t+=8000;
//		}
//		if(a>85&&b>=80){
//			t+=4000;
//		}
//		if(a>90){
//			t+=2000;
//		}
//		if(a>85&&w == 'Y'){
//			t+=1000;
//		}
//		if(b>80&&g == 'Y'){
//			t+=850;
//		}
//		if(t>ma){
//			ma=t;
//			n1 = name;
//		}
//		mb+=t;
//	}
////	int ma = -100,mb = 0;
////	for(int i=0;i<n;i++){
////		int t = 0;
////		if(s[i].a>80&&s[i].c>=1){
////			t+=8000;
////		}
////		if(s[i].a>85&&s[i].b>=80){
////			t+=4000;
////		}
////		if(s[i].a>90){
////			t+=2000;
////		}
////		if(s[i].a>85&&s[i].w == 'Y'){
////			t+=1000;
////		}
////		if(s[i].b>80&&s[i].g == 'Y'){
////			t+=850;
////		}
////		if(t>ma){
////			ma=t;
////			name = s[i].name;
////		}
////		mb+=t;
////	}
//	cout<<n1<<endl;
//	cout<<ma<<endl;
//	cout<<mb;
//	return 0;
//}

int main()
{
	freopen("P1051_1.in", "r", stdin);
    int n,score1,score2,sum=0,max=0,total=0,x,i;
    char a,b;
    string name,maxn;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        cin>>name>>score1>>score2>>a>>b>>x;
        if(score1>80 && x>0)
            sum+=8000;
        if(score1>85 && score2>80)
            sum+=4000;
        if(score1>90)
            sum+=2000;
        if(score1>85 && b=='Y')
            sum+=1000;
        if(score2>80 && a=='Y')
            sum+=850;
        total+=sum;
        if(sum>max)
            maxn=name,max=sum;
        sum=0;
    }
    cout<<maxn<<endl<<max<<endl<<total;
    return 0;
}
