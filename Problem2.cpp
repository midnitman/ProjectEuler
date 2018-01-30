#include<iostream>
using namespace std;
unsigned long long int fibo(unsigned long long int n)
{
  unsigned long long int a=2;
  unsigned long long int b=8;
  unsigned long long int c=10;
  unsigned long long int sum=0;
  while(b<n)
  {
  sum+=c;
  c=4*b+a;
  a=b;
  b=c;
  }
  return sum;
}

int main(){
        unsigned long long int  n;
        cin >> n;
        cout<<fibo(n)<<endl;
        return 0;
}
//input will be a number and the output will be the sum of even valued fibonacci terms not exceeding the number
