#include <bits/stdc++.h>
using namespace std;

const int Max = 1e7;
    
int main() {
    bool p[Max];
    for (int i = 0; i <= Max; ++i) {
        p[i] = 1;
    }
    for (int i = 2; i * i <= Max; ++i) {
        if (p[i]) {
            for (int j = i * i; j <= Max; j += i) {
                p[j] = 0;
            }
        }
    }
    vector<int> a;
    for (int i = 2; i <= Max; ++i) {
        if (p[i])
            a.push_back(i);
    }
    
    int n;
    for (int q = 0; q < t; ++q) {
        cin >> n;
        cout << a[n - 1] << "\n";
    } 
    return 0;
}
// storing arrays would cause you a memory!
