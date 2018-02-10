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
  for(int a0 = 0; a0 < t; a0++){
        int n;
        cin >> n;
        long long unsigned int sum=0;
        for(int i=0;a[i]<=n;i++)
        {
            sum+=a[i];
        }
        cout<<sum<<endl;
    }
    return 0;
}
