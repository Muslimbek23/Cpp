#include <iostream>
#include <iomanip>
using namespace std;
int main (){
	int a, b[1001]={0}, n;  int q, max=0;
	cin>>n;
  for(int i=0; i<n; i++)
  {
  	cin>>a;
	  b[i]=a;
	  if(a>max){
	    max=a;	 
	   q=i;
	 }
  } 
   cout<<q+1;
	return 0;
}
