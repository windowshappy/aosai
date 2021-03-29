#include<iostream>
#include<cmath>
#include<cstdio>
#include<cstdlib>

using namespace std;

/*
伦敦奥运会要到了， 小鱼在拼命练习游泳准备参加游泳比赛， 可
怜的小鱼并不知道鱼类是不能参加人类的奥运会的。
这一天， 小鱼给自己的游泳时间做了精确的计时（本题中的计时
都按 24 小时制计算）， 它发现自己从 a 时 b 分一直游泳到当天的
c 时 d 分， 请你帮小鱼计算一下， 它这天一共游了多少时间呢？
小鱼游的好辛苦呀， 你可不要算错了哦。
输入输出格式
输入格式：
一行内输入 4 个整数， 分别表示 a, b, c, d。
输出格式：
一行内输出 2 个整数 e 和 f， 用空格间隔， 依次表示小鱼这天
一共游了多少小时多少分钟。 其中表示分钟的整数 f 应该小于 60。
输入输出样例
输入样例#1： 12 50 19 10
输出样例#1： 6 20
*/

int main(){
	freopen("swimming.in", "r", stdin);
	freopen("swimming.out", "w", stdout);
	int a,b,c,d,e,f;
	cin>>a>>b>>c>>d;
	e = c-a;
	f = d-b;
	if(f<0){
		f = 60+f;
		e-=1;
	}
	cout<<e<<" "<<f;
	fclose(stdin);
	fclose(stdout);
	return 0;
}

