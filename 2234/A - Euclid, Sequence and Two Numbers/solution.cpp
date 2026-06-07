#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
 
int main() {
 
    int tc;
    cin >> tc;
 
    while (tc--) {
 
        int n;
        cin >> n;
 
        vector<int> arr;
 
        while (n--) {
            int t;
            cin >> t;
            arr.push_back(t);
        }
 
        sort(arr.begin(), arr.end(), greater<int>());
 
        if (arr.size() == 2) {
            cout << arr[0] << " " << arr[1] << endl;
            continue;
        }
 
        bool ok = true;
 
        for (int i = 0; i + 2 < arr.size(); i++) {
            if (arr[i] % arr[i + 1] != arr[i + 2]) {
                ok = false;
                break;
            }
        }
 
        if (ok)
            cout << arr[0] << " " << arr[1] << endl;
        else
            cout << -1 << endl;
    }
 
    return 0;
}