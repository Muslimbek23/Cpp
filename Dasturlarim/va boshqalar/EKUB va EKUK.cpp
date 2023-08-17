#include <iostream>
#include <iomanip>
using namespace std;
int main (){
  int G, L, k=0, l=0;
  cin>>G>>L;
  if(G>L)  swap(G, L);
  
  for(int i=G+1; i<=L; i++){
  
  	 if(L%i==0 && (L/i)%i!=0)	 
  	  {
  	    	l=G*L/i;
  	    	k=i;
    	   break;
  	 }
  	  
  }
    cout<<k<<" "<<l;
  
  
  
  
  
  
	return 0;
}
