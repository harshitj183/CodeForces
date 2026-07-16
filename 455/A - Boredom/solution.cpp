#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int n;
    cin >> n;
 
    const int MAX = 100000;
 
    vector<long long> sum(MAX + 1, 0);
 
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        sum[x] += x;
    }
 
    vector<long long> dp(MAX + 1, 0);
 
    dp[1] = sum[1];
 
    for (int i = 2; i <= MAX; i++) {
        dp[i] = max(dp[i - 1], dp[i - 2] + sum[i]);
    }
 
    cout << dp[MAX];
 
    return 0;
}