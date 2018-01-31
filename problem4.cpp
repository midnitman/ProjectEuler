#include<iostream>
using namespace std;
bool ispalindromic(unsigned int a)
{
  unsigned int temp=a;
  unsigned int rev=0;
  for(;a;)
  {
    rev=(rev*10)+(a%10);
    a/=10;
  }
  if(temp==rev)return true;
  else return false;
}
unsigned int lapalin(unsigned int n)
{
  unsigned int max=0;
  unsigned int p=0;
  for(int i=999;i>99;i--)
  {
    for(int j=990;j>99;)
    {
      p=i*j;
      if(p<max)break;
      if(p<n && ispalindromic(p))
      {
        max=p;
      }
      i%11==0?j-=11:j-=1;
    }
  }
  return max;
}

int main(){
  unsigned int n;
  cin >> n;
  cout<<lapalin(n)<<endl;
  return 0;
}
