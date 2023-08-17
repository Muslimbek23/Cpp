#include <iostream>
#include<iomanip>
#include <cmath>
using namespace std;
int main(){  
   string s;    char x, y, z;    int sana=0;
    getline(cin, s);
    cin>>y;

    
 for (int i=0; i<s.length(); i++){      x=s[i];
   
  if (isalpha(x)){
    z=tolower(x);
    if(z==y || z==y-32 ||z==y+32) sana++; 
  }
  else if(x==y) sana++;	
}

cout<<sana;

return 0;
}
