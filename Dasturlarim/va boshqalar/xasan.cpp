#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;
int main(){
  long long d, n;cin>>n;unsigned long long s=1, c=0;
  if(n%2==0)d=n/2-1;
  else d=n/2;
  c+=(1+d-1)*(d-1)/2;  
  s+=d*5+c*4;
  if(n%2==0)cout<<s+1;
  else cout<<s;
}
