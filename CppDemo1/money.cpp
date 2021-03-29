#include<iostream>
#include<cmath>
#include<cstdio>
#include<cstdlib>

using namespace std;

/*
夏天到了， 各家各户的用电量都增加了许多， 相应的电费也交的
更多了。 小玉家今天收到了一份电费通知单。 小玉看到上面写： 据闽
价电[2006]27 号规定， 月用电量在 150 千瓦时及以下部分按每千瓦
时 0.4463 元执行， 月用电量在 151~400 千瓦时的部分按每千瓦时
0.4663 元执行， 月用电量在 401 千瓦时及以上部分按每千瓦时
0.5663 元执行;小玉想自己验证一下， 电费通知单上应交电费的数目
到底是否正确呢。 请编写一个程序， 已知用电总计， 根据电价规定，
计算出应交的电费应该是多少。
输入输出格式
输入格式：
输入一个整数， 表示用电总计（单位以千瓦时计）， 不超过 10000。
输出格式：
输出一个数， 保留到小数点后 1 位（单位以元计， 保留到小数
点后 1 位）。
输入输出样例
输入样例#1： 267
输出样例#1： 121.5
*/ 

int main(){
	freopen("money.in", "r", stdin);
	freopen("money.out", "w", stdout);
	int a;
	double money;
	cin>>a;
	if(a>=151&&a<=400){
		money=(a-150)*0.4663+150*0.4463;
	}
	if(a<=150){
		money*=0.4463;
	}
	if(a>=401){
		money=(a-150-(a-400))*0.4663+150*0.4463+(a-400)*0.5663;
	}
	printf("%.1lf", money);
	fclose(stdin);
	fclose(stdout);
	return 0;
}

