#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n, k; cin >> n >> k;
    int a[n];
    for (int i = 0; i < n; i++) cin >> a[i];
    sort(a, a + n);
    int count = 0;
    for (int i = 0; i < n - 1; i++) {
        if (a[i + 1] - a[i] > k) ++count;
    }
    cout << count + 1;
    return 0;
}