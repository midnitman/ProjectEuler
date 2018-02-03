#include <iostream>
using namespace std;
void maxprod(int arr[],int n, int k)
{
  long unsigned int max=0;
  for(int i=0;i<n-k;i++)
  {
  long unsigned int prod=1;
    for(int j=0;j<k;j++)
    {
      prod*=arr[i+j];
    }
    if(max<prod)max=prod;
  }
  cout<<max<<endl;
}
int main(){
  int n;
  int k;
  cin >> n >> k;
  string num;
  cin >> num;
  int arr[n];
  for(int i=0;i<n;i++)arr[i]=num[i]-'0';
  maxprod(arr,n,k);
  return 0;
}
