#include <bits/stdc++.h>
using namespace std;
 
int compression(string &str) {
 
    int ginti = 1;
 
    int i = 1;
 
    while (i < str.size()) {
 
        if (str[i] != str[i - 1]) {
            ginti++;
        }
 
        i++;
    }
 
    return ginti;
}
 
int main() {
 
    int test;
    cin >> test;
 
    while (test--) {
 
        int sz;
        cin >> sz;
 
        string str;
        cin >> str;
 
        int totalGroup = compression(str);
 
        vector<int> lambai(sz);
 
        int i = 0;
 
        while (i < sz) {
 
            int agla = i;
 
            while (agla < sz && str[agla] == str[i]) {
                agla++;
            }
 
            int kitna = agla - i;
 
            while (i < agla) {
                lambai[i] = kitna;
                i++;
            }
        }
 
        int ans = totalGroup;
 
        i = 1;
 
        while (i < sz - 1) {
 
            if (lambai[i] == 1) {
 
                if (str[i - 1] == str[i + 1]) {
                    ans = min(ans, totalGroup - 2);
                } else {
                    ans = min(ans, totalGroup - 1);
                }
            }
 
            i++;
        }
 
        cout << ans << endl;
    }
 
    return 0;
}