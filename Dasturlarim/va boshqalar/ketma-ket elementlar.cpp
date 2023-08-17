#include <iostream>
#include <iomanip>
using namespace std;
int main (){
	int a, b[10000]={0}, k,  n;  int q=0;
	cin>>n;
  for(int i=0; i<n; i++)
  {
  	cin>>a;
  	
  	 b[i]++;	   	
  } 
  for(int k=0; k<n-4; k++){
	 if(b[k]==b[k+1] && b[k+1]==b[k+2] && b[k+2]==b[k+3])
	 q++;
	 }	
  
  if(q==1) cout<<"ha";
  else cout<<"yo'q";
	return 0;
}
