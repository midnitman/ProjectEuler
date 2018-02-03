#include <iostream>
using namespace std;
int main(){
        int s;
        cin >> s;
        int a = 0, b = 0, c = 0;
        bool found = false;
        for (a = s/3; a >=1; a--) {
            for (b = a; b < s / 2; b++) {
                c = s - a - b;
                if (a * a + b * b == c * c) {
                    found = true;
                    break;
                }
            }
            if(found)break;
        }
        if (found) {
        cout<<a*b*c<<endl;
        }
        else
          cout<<-1<<endl;
    return 0;
}
