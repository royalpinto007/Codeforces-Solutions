#include <iostream>
using namespace std;

int n, k, a, b = 0, arr[10000];
int main() {
    cin >> n >> k;

    // input the array 
    for (int i = 1; i <= n; i++) {
        cin >> a;
        arr[i] = a;
    }
    
    // score must be positive 
    // element at kth position must be checked with all the elements in the array
    for (int j = 1; j <= n; j++) {
        if (arr[j] >= arr[k] && arr[j] > 0) {
            b++;
        }
    }
    cout << b;
}
