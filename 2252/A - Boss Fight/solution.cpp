#include <bits/stdc++.h>
using namespace std;
 
int main() {
 
    int test;
    cin >> test;
 
    while (test--) {
 
                 int size;
        cin >> size;
 
        map<int, int> ginti;
 
        long long jawab = 0;
 
        for  (int i = 0; i < size; i++) {
 
            int nuksan;
            cin >> nuksan;
 
            jawab += nuksan;
            ginti[nuksan]++;
        }
 
        int sabseJyada = 0;
        int taqat = 0;
 
        for (auto &it : ginti) {
 
            if (it.second > sabseJyada) {
                sabseJyada = it.second;
                taqat = it.first;
            }
        }
 
        int baki = size - sabseJyada;
 
        if (sabseJyada <= baki + 1) {
 
            cout << jawab << endl;
        }
        else {
 
            int extra = sabseJyada - (baki + 2);
 
            if (extra < 0)
                extra = 0;
 
            jawab -= 1LL * extra * taqat;
 
            cout << jawab << endl;
        }
    }
 
    return 0;
}