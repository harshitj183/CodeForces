#include <iostream>
using namespace std;
 
int main() {
    string s, t;
    cin >> s >> t;
 
    string res = "";
 
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == t[i])
            res += '0';
        else
            res += '1';
    }
 
    cout << res;
}