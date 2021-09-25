#include <algorithm>
#include <cstdio>
#include <iostream>

using namespace std;

struct mark
{
    int number, z, Chinese, math, English;
} student[311];

bool cmp(mark a, mark b)
{
    if (a.z != b.z)
        return a.z > b.z;
    if (a.Chinese != b.Chinese)
        return a.Chinese > b.Chinese;
    return a.number < b.number;
}

int main()
{
    freopen("scholar.in", "r", stdin);
    freopen("scholar.out", "w", stdout);
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> student[i].Chinese >> student[i].math >> student[i].English;
        student[i].z = student[i].Chinese + student[i].math + student[i].English;
        student[i].number = i;
    }
    sort(student + 1, student + n + 1, cmp);
    for (int i = 1; i <= 5; i++)
    {
        cout << student[i].number << " " << student[i].z << endl;
    }

    fclose(stdin);
    fclose(stdout);
    return 0;
}
