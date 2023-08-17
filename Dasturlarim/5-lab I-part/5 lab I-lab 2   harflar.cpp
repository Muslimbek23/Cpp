#include <bits/stdc++.h>
using namespace std;
int main (){
  int  c=0, unli=0, undo=0;       string a;   
  getline(cin, a);         
  
while (c<a.length())
  {  char   b=a.at(c);   b=toupper(b);
   if (b=='A' || b=='O' || b=='E' || b=='I' || b=='U')
     unli++; 
  else if(b>'A'&&b<='Z') undo++;
  c++;
  }
  cout<<" unlilar soni "<< unli;
  cout<<" \n undoshlar soni "<<undo;
  return 0;
}
