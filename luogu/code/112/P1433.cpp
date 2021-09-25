#include<iostream>
#include<cmath>

using namespace std;

struct position
{
    int x, y;
} mouse[30];

double distance(double x1, double x2, double y1, double y2){
    return sqrt(((x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2)));
}

int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> mouse[i].x >> mouse[i].y;
    }
    
    return 0;
}
