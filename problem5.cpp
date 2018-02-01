#include <iostream>
using namespace std;
unsigned long int gcd(unsigned long int a,unsigned long int b)
{
  if(b==0)return a;
  return gcd(b,a%b);
}
unsigned long int lcm(int n)
{
  unsigned long int ans=1;
  for(int i=1;i<=n;i++)
  {
    ans=(i*ans)/gcd(i,ans);
  }
  return ans;
}
int main(){
    int n;
    cin >> n;
    cout<<lcm(n)<<endl;
    return 0;
}
//problem 5 in project euler
//to find the smallest multiple
//equivalent to finding the lcm of n numbers
