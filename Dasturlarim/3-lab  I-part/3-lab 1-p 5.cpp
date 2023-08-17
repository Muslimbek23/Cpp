#include <iostream>
#include <math.h>
using namespace std;
int main(){
int a,b;
cout << " hafta kunini kiriting ";
cin >>a;
cout << " bugundan keyingi kunni kiriting ";
cin >>b;
if (a%7==0)cout << " yakshanba ";
else if (a%7==1) cout <<" dushanba ";
else if (a%7==2) cout << " seshanba ";
else if (a%7==3) cout << " chorshanba ";
else if (a%7==4) cout << " payshanba ";
else if (a%7==5) cout << " juma ";
else if (a%7==6) cout << " shanba ";
cout << " keyingi kun " << b ;
if ((a+b)%7==0) cout << " yakshanba ";
else if ((a+b)%7==1)cout << " dushanba ";
else if ((a+b)%7==2)cout << " seshanba ";
else if ((a+b)%7==3) cout << " chorshanba ";
else if ((a+b)%7==4) cout << " payshanba ";
else if ((a+b)%7==5) cout << " juma ";
else  ((a+b)%7==6); cout << " shanba ";


}
