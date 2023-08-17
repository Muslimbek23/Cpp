#include <iostream>
#include <iomanip>
using namespace std;
int main (){
	int a[1001], b[1001], n,x, y;  int q=0;
	cin>>n;
  for(int i=0; i<n; i++)
  {
  	cin>>x;
    a[i]=x;	
  } 
  for( int j=0; j<n; j++)
   {
   	cin>>y;
	b[j]=y;
  }
  bool p=1;
  for(int k=0; k<n; k++)
  if(a[k]!=b[k]){
    p=0;
  	break;
  }  
  
  if(p)  cout<<"teng";
  else cout<<"teng emas";
	return 0;
}
