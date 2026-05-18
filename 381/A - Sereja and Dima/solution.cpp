#include <iostream>
#include <vector>
using namespace std;
 
int main() {
 
    int n;
    cin >> n;
 
    int itr = n;
 
    vector<int> arr;
 
    while (itr--) {
 
        int val;
        cin >> val;
 
        arr.push_back(val);
    }
 
    int ops = n;
 
    int srj = 0;
    int dima = 0;
 
    int left = 0;
    int right = n - 1;
 
    bool chalo = true;
 
    while (ops--) {
 
        int pick = max(arr[left], arr[right]);
 
        if (chalo) {
            srj += pick;
        } else {
            dima += pick;
        }
 
        if (arr[left] >= arr[right]) {
            left++;
        } else {
            right--;
        }
 
        chalo = !chalo;
    }
 
    cout << srj << " " << dima;
 
    return 0;
}