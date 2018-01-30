#include<iostream>
using namespace std;
long int nsum(long int n,int r)
{
  return r*(n/r)*((n/r)+1)/2;
}
long int sum(long int n)
{
  return nsum(n-1,3)+nsum(n-1,5)-nsum(n-1,15);
}
int main(){
    int n;
    cin >> n;
    cout<<sum(n)<<endl;
    return 0;
}
//input will be a number and output will be the sum of multiples of 3 and 5 below that number
