#include<iostream>
using namespace std;
unsigned long int prime(unsigned long int n)
{
  unsigned long int temp=n;
  unsigned long int lafact = 0;
  unsigned long int inplay=2;
  while(inplay*inplay<=temp)
  {
    if(temp%inplay==0){
      temp=temp/inplay;
      lafact=inplay;
    }
    else
    inplay+=1;
  }
  if(temp>inplay)return temp;
  else return lafact;
}
int main(){
        long n;
        cin >> n;
        cout<<prime(n)<<endl;
    return 0;
}
//to find the largest prime factor of a given number
//for project euler problem 3
