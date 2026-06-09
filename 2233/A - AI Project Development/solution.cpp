#include <iostream>
using namespace std;
 
int main()
{
    int cn;
    cin >> cn;
 
    while (cn--)
    {
        long long n,   x, y, z;
        cin >> n >>    x >> y >> z;
 
            long  long reswthoutai = (n + (x + y) - 1) / (x + y);
 
             long long resai;
 
        // maxim ai setup tak kitna kaam kiya
        long long    w1 = z * x;
 
             if (w1 >= n)
        {
            resai    = (n + x - 1) / x;
        }
                  else
        {
            // remaining work
            long long remwork = n - w1;
 
 
 
            long long botheff = x + (y * 10);
 
            resai    = z;
 
            resai +=    (remwork + botheff - 1) / botheff;
        }
 
               cout << min(resai, reswthoutai) << '
';
    }
 
    return 0;
}