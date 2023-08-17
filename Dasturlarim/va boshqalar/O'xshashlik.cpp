#include <iostream>
#include <iomanip>
using namespace std;
int main (){
	int a[1001], b[1001], x, y, k, j;  
	cin>>x>>y;
	
  for(int i=0; i<x; i++)  {
   cin>>a[i];
}
  for(int i=0; i<y; i++){
  	cin>>b[i];
}
    for(int i=0; i<x; i++)
  {
      for(int j=0; j<y; j++)
     {   
  	     if(a[i]==b[j]){
  	     
  	     cout<<a[i]<<" ";
  	    break;}
  	    
     } 
	
  } 

	return 0;
}
