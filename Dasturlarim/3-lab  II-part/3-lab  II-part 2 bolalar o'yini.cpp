#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;
int main(){
int a,e;
srand(time(0));
a=rand()%3;
cout<<" Qaychi (0), tosh (1), qog'oz (2): ";
cin>>e;
cout<<" kompyuter tanladi ";
switch(a){
case 0:cout<<" qaychi";break;
case 1:cout<<" quduq";break;
case 2:cout<<" qog'oz";break;	
}
cout<<", siz tanladingiz ";
switch(e){
case 0:cout<<" qaychi.";break;
case 1:cout<<" quduq.";break;
case 2:cout<<" qog'oz.";break;	
}
if ( a==e) cout<<" o'yin durrang ";
else if ((a==0&&e==1)||(a==1&&e==2)||(a==2&&e==0))
cout<<" siz yutdingiz ";
else cout<<" siz yutqizdingiz ";}
