#include <bits/stdc++.h>
using namespace std;   
int main()
 {   int a, b, c=0;  cout<<" These numbers are divisible by 3 and 4:  \n";
 
  for(int n=1;n<500; n++) 
  { if (n%3==0 && n%4==0)
   { c++;
      if(c%5==0)  cout<<setw(4)<<n<<" "<<endl;
     else     cout<<setw(4)<<n<<" "; 
   }
  }
 }
