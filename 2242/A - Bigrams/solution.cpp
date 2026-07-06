#include <bits/stdc++.h>
using namespace std;
 
int main() {
 
    int t;
    cin >> t;
 
    while (t--) {
 
        int n;
        cin >> n;
 
        vector<int> arr;
 
        for (int i = 0; i < n; i++) {
            int val;
            cin >> val;
            arr.push_back(val);
        }
 
        bool ok = false;
        int cnt = 0;
 
        for (int i = 0; i < n; i++) {
            if (arr[i] >= 3)
                ok = true;
 
            if (arr[i] >= 2)
                cnt++;
        }
 
        if (ok || cnt >= 2)
            cout << "YES" <<endl;
        else
            cout << "NO"<<endl;
    }
 
    return 0;
}