#include <bits/stdc++.h>

using namespace std;

int maxdeep,maxtime, nowtime, sum, a[1111];

void dfs(int x){
    if(x > maxdeep){ // 所有作业枚举完毕，达到了最大递归层数
    maxtime = max(maxtime, nowtime); // 如果解更优，更新答案。
    return;
    }
    if(nowtime + a[x] <= sum / 2){ // 如果放入这个作业是合法的，选择它
    nowtime += a[x]; // 增加子集中这道题目的时间
    dfs(x + 1); // 下一层递归
    nowtime -= a[x]; // 去除掉子集中这道题目的时间
    }
    dfs(x + 1); // 不选这个题目，直接进行下一层递归
}
