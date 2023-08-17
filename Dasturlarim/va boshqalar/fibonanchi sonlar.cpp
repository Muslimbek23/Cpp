#include <iostream>    
#include <cmath>
#include <iomanip>   
using namespace std;   
int main() {  long long int a1=0,a2=1, n, k;
 cin>>n;
  for(int i=1; i<=n; i++ ){
   cout<<a1<<" ";
   k=a2; a2=a1+a2; a1=k;
  
 }
 
 	
 
 }
 
