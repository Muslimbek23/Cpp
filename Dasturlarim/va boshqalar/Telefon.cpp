#include <iostream>
#include<iomanip>
#include <cmath>
using namespace std;
int main(){  
   string s;    char x;
    getline(cin, s);
 for (int i=0; i<s.length(); i++){      x=s[i];
  if (isalpha(x)){
  int b=toupper(x);
    if      (b==65||b==66||b==67) cout<<"2";
    else if (b==68||b==69||b==70) cout<<"3";
    else if (b==71||b==72||b==73) cout<<"4";
    else if (b==74||b==75||b==76) cout<<"5";
    else if (b==77||b==78||b==79) cout<<"6";
    else if (b==80||b==81||b==82||b==83) cout<<"7";
    else if (b==84||b==85||b==86) cout<<"8";
    else if (b==87||b==88||b==89||b==90) cout<<"9";
  }	
  else cout<<s[i];
}



return 0;
}

