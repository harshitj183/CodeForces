#include <bits/stdc++.h>
using namespace std;
 
int main() {
 
    int t;
    cin >> t;
 
    while (t--) {
 
        int n;
        cin >> n;
 
        vector<int> arr(n + 1);
 
        for (int i = 1; i <= n; i++)
            cin >> arr[i];
 
        vector<int> p1(n + 1, 0), p2(n + 1, 0), p3(n + 1, 0);
 
        for (int i = 1; i <= n; i++) {
            p1[i] = p1[i - 1];
            p2[i] = p2[i - 1];
            p3[i] = p3[i - 1];
 
            if (arr[i] == 1) p1[i]++;
            else if (arr[i] == 2) p2[i]++;
            else p3[i]++;
        }
 
        bool ok = false;
 
        for (int i = 1; i <= n - 2 && !ok; i++) {
 
            int one = p1[i];
            int other = p2[i] + p3[i];
 
            if (one < other)
                continue;
 
            for (int j = i + 1; j <= n - 1; j++) {
 
                int one2 = p1[j] - p1[i];
                int two2 = p2[j] - p2[i];
                int three2 = p3[j] - p3[i];
 
                if (one2 + two2 >= three2) {
                    ok = true;
                    break;
                }
            }
        }
 
        cout << (ok ? "YES" : "NO") <<endl;
    }
 
    return 0;
}