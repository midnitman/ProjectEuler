#include <iostream>
using namespace std;
long long unsigned int power(long long unsigned int x,long long unsigned int y,long long unsigned int p)
{
    long long unsigned int res = 1;
    x = x % p;
    while (y > 0)
    {
        if (y & 1)
            res = (res*x) % p;
        y = y>>1;
        x = (x*x) % p;
    }
    return res;
}
bool miillerTest(long long unsigned int d,long long unsigned int n)
{
    long long unsigned int a = 2 + rand() % (n - 4);
    long long unsigned int x = power(a, d, n);
    if (x == 1  || x == n-1)
       return true;
    while (d != n-1)
    {
        x = (x * x) % n;
        d *= 2;
        if (x == 1)      return false;
        if (x == n-1)    return true;
    }
    return false;
}
bool checkprime(long long unsigned int n, int k)
{
    if (n <= 1 || n == 4)  return false;
    if (n <= 3) return true;
    long long unsigned int d = n - 1;
    while (d % 2 == 0)
        d /= 2;
    for (int i = 0; i < k; i++)
      {
         if (miillerTest(d, n) == false)
              return false;
      }
    return true;
}
bool isprime(long long unsigned int a)
{
  int k=4;
  return checkprime(a,k);
}
long long unsigned int nthprime(int n)
{
  if(n<0) return 0;
  int count=1;
  long long unsigned i=2;
  while(count<=n)
  {
    if(isprime(i))
    {
      count++;
    }
    if(i==2)i++;
    else
    i+=2;
  }
  return i-2;
}

int main(){
    int n;
    cin >> n;
    cout<<nthprime(n)<<endl;
    return 0;
}
