#include <iostream>    
#include <iomanip>   
using namespace std;   
int main()
{
string s; 
cin>>s;
  int low=0, high=s.length()-1;
  bool pal=1;
  while( low<high){
  	if (s[low]!=s[high])
	{
  		pal=0;    break;
	}
	low++;  high--;
  }
  if(pal)  cout<<"Yes";
  else cout<<"No";
}
 
