#include <iostream>
#include <vector>
using namespace std;
 
bool solve(vector<int> &arr, int idx, int sum) {
 
    if (idx == arr.size()) {
        return (sum % 360 + 360) % 360 == 0;
    }
 
    return solve(arr, idx + 1, sum + arr[idx]) ||
           solve(arr, idx + 1, sum - arr[idx]);
}
 
int main() {
 
    int n;
    cin >> n;
 
    vector<int> arr;
 
    for (int i = 0; i < n; i++) {
        int temp;
        cin >> temp;
        arr.push_back(temp);
    }
 
    int sum = 0;
 
    if (solve(arr, 0, sum))
        cout << "YES";
    else
        cout << "NO";
 
    return 0;
}