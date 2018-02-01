#include<iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    long int s1=(n*(n+1))/2;
    s1=s1*s1;
    long int s2;
    s2=n*(n+1);
    int a=2*n+1;
    s2=s2*a;
    s2=s2/6;
    cout<<s1-s2<<endl;
    return 0;
}
//solution for problem 6 in project euler
//sum square difference
