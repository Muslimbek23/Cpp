#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;
int main(){
int x,y;
 cout<<" Bu (";       srand(time(0));
  x=rand()%600-300;  y=rand()%600-300;
if (-150<=x && x<=150 && y>=-150 && y<=150)
cout<<x<<", "<<y<<") nuqta kvadrat ichida";
else cout<<x<<", "<<y<<") nuqta kvadrat ichida emas";}

