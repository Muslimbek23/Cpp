#include <iostream>
using namespace std;
int main(){
  int u, q;  cin>>u>>q;
  
  if(2*u>q){
  	cout<<q/2*3;
  }
  else if(2*u<q){
  	cout<<3*u;
  }
  else cout<<3*u;
  
   return 0;
}
