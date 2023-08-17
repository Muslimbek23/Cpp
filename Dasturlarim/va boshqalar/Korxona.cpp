#include <iostream>
#include <iomanip>
using namespace std;
int main (){
	int a, b[101]={0}, n;  int q=0;
	cin>>n;
  for(int i=0; i<n; i++)
  {
  	cin>>a;
  	
	  b[a]++;	
  } 
   for( int j=0; j<=100; j++)
   {
   	 if(b[j]!=0)
	  cout<<j<<" "<<b[j]<<endl;
  }
	return 0;
}
