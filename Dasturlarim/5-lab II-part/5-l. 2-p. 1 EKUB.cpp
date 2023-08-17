#include <iostream>     
using namespace std;   
int main()
 {  int a, b, c, z, k, l;
 	  cin>>a>>b;   
 	  k=a;  l=b;
 	  while(a!=0 && b!=0) {
 	  	if(a<b)  swap(a, b);
        a=a%b;       }
 	z=max(a, b);
 	cout<<z<<" "<<k*l/z;
 }
 
