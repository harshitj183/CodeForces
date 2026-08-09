#include <bits/stdc++.h>
using namespace std;
 
int main() {
 
    int it;
            cin >> it;
 
    while (it--){
 
        int a;
        int b;
        int c;
 
        cin >> a;
        cin >> b;
        cin >> c;
 
        int res = max({a,b,c}) - min({a,b,c});
 
        if(a>b && a>c)
            a = b+c;
 
              if(b>a && b>c)
            b = a+c;
 
         if(c>b && c>a)
            c = b+a;
 
        int res1 = max({a,b,c}) - min({a,b,c});
 
              cout << min(res1,res) << endl;
    }
 
    return 0;
}