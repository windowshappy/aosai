//c++98

#include <bits/stdc++.h>

using namespace std;

int wNum[30], maxn = -343;

int main()
{
    char t;
    while (cin >> t)
    {
        if (t >= 'A' && t <= 'Z')
        {
            wNum[t - 'A']++;
        }
        if (wNum[t - 'A'] > maxn)
            maxn = wNum[t - 'A'];
    }

    for (int j = maxn; j > 0; j--)
    {
        bool flag = true;
        for (int i = 0; i < 26; i++)
        {
            // if(flag){
            //     if(wNum[i] >= j)
            //         cout << "*";
            //     else{
            //         cout << " ";
            //     }
            //     flag = 0;
            // }
            // else{
            //     if(wNum[i] >= j)
            //         cout << " *";
            //     else{
            //         cout << "  ";
            //     }
            // }
            if (wNum[i] >= j)
                printf("* ");
            else
            {
                 printf("  ");
            }
        }
        cout << " \n";
    }
    cout << "A B C D E F G H I J K L M N O P Q R S T U V W X Y Z\n";

    return 0;
}
