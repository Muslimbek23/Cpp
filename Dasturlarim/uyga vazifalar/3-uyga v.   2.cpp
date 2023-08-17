#include <bits/stdc++.h>
using namespace std;
int main(){     char y;   int x;       
  cin>>y>>x;
  if('A'<=y && y<='H' && 1<=x && x<=8)
{
   if((y+x)%2==0)	
	 cout<<" BLACK ";
   else  	
	 cout<<" WHITE ";	
}
   return 0;
}
