#include <bits/stdc++.h>

using namespace std;

// void add() {
//   int a[MAXN],b[MAXN],c[MAXN];
//   memset(a, 0, sizeof(a));
//   memset(b, 0, sizeof(b));
//   memset(c, 0, sizeof(c));
//   string A,B;
//   cin>>A>>B;
//   int len = max(A.length(), B.length());
//   for(int i=A.length()-1, j=1;i>=0;i--,j++){
//     a[j] = A[i]-'0';
//   }
//   for(int i=B.length()-1, j=1;i>=0;i--,j++){
//     b[j] = B[i]-'0';
//   }
//   for(int i=1;i<=len;i++){
//     c[i]+=a[i]+b[i];
//     c[i+1] = c[i]/10;
//     c[i]%=10;
//   }
//   if(c[len+1])
//     len++;
//   for(int i=len; i>=1; i--){
//     cout<<c[i];
//   }
// }
//
// void multiplication() {
//   int a[MAXN],b[MAXN],c[MAXN];
//   memset(a, 0, sizeof(a));
//   memset(b, 0, sizeof(b));
//   memset(c, 0, sizeof(c));
//   string A,B;
//   cin>>A>>B;
//   int lena = A.length();
//   int lenb = B.length();
//   for(int i=A.length()-1, j=0;i>=0;i--,j++){
//     a[j] = A[i]-'0';
//   }
//   for(int i=B.length()-1, j=0;i>=0;i--,j++){
//     b[j] = B[i]-'0';
//   }
//
//   for (int i = 0; i < lena; i++)
//     for (int j = 0; j < lenb; j++)
//       c[i + j] += a[i] * b[j];
//
//   int lenc = lena + lenb;
//   for (int i = 0; i < lenc; i++) {
//     c[i + 1] += c[i] / 10;
//     c[i] %= 10;
//   }
//
//   for (; !c[lenc];)
//     lenc--;
//   for(int i=lenc; i>=0; i--){
//     cout<<c[i];
//   }
// }

namespace BigInt {
    #include <bits/stdc++.h>
    using namespace std;
    class Bigint {
        private:
          const static int MAXN = 600;

        public:
          int len, a[MAXN];
          Bigint (){
            memset(a, 0, sizeof(a));
            len = 1;
          }
          int &operator[](int i) { return a[i]; }
          void flatten(int L) {
            len = L;
            for (int i = 0; i < len; i++)
              a[i + 1] += a[i] / 10, a[i] %= 10;
            for (; !a[len-1];)
              len--;
          }
          Bigint operator+(Bigint &b){
            Bigint c;
            int l = max(len, b.len)+1;
            for (int i = 0; i < l; i++)
              c[i] += a[i] + b[i];
            c.flatten(l + 1);
            return c;
          }
          Bigint operator*(Bigint &b){
            Bigint c;
            int lena = len, lenb = b.len;
            for (int i = 0; i < lena; i++)
              for (int j = 0; j < lenb; j++)
                c[i + j] += a[i] * b[j];

            int lenc = lena + lenb;
            for (int i = 0; i < lenc; i++) {
              c[i + 1] += c[i] / 10;
              c[i] %= 10;
            }
            c.flatten(len+11);
            return c;
          }
          Bigint &operator=(int num){
              char a[MAXN];
              for (int l = 0; num; l++)
                a[l] = num % 10, num /= 10;
              *this=a;
              return *this;
          }
          Bigint &operator=(const char *num){
            memset(a, 0, sizeof(a));
            len=strlen(num);
            for(int i=0;i<len;++i)
                a[i]=num[len-i-1]-'0';
            return *this;
          }

          Bigint (const int num)
          {
              *this=num;
          }
          Bigint (const char * num)
          {
              *this=num;
          }
    };

    ostream& operator<<(ostream &out,const Bigint& x)   //重载一下输出
    {
        for(int i=max(x.len-1, 0);i>=0;--i)
            cout<<x.a[i];
        return out;
    }
    istream& operator>>(istream &in,Bigint &x)       //重载一下输入
    {
        char num[9999];
        in>>num;
        x = num;
        return in;
    }
} /* BigInt */

using namespace BigInt;

int main() {
    // multiplication();
    Bigint a = 121, b = 111;
    cin>>a>>b;
    a = a*b;
    cout<<a;
    return 0;
}
