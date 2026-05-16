#include <bits/stdc++.h>
using namespace std;
 
int main() {
 
    int n;
    cin >> n;
 
    unordered_map<string, int> mp;
 
    while (n--) {
 
        string s;
        cin >> s;
 
        // username not exists
        if (mp.find(s) == mp.end()) {
 
            cout << "OK" << endl;
 
            mp[s] = 1;
        }
        else {
 
            string newName = s + to_string(mp[s]);
 
            cout << newName << endl;
 
            mp[s]++;
            mp[newName] = 1;
        }
    }
}