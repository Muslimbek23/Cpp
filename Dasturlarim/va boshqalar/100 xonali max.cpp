#include <iostream>
using namespace std;
int main(){
	string a,b,c;    int x, y, z,katta, kichik;
	cin>>a>>b>>c;
	x=a.length();
    y=b.length();
    z=c.length();
     katta=max(max(x, y), z);
      kichik=min(min(x, y), z);
     
      if(x!=y && y!=z){
            	  if(katta==x) cout<<a;
             else if(katta==y) cout<<b;
             else if(katta==z) cout<<c;
 }
 else if((x>y&&x>z)||(y>x&&y>z)||(z>x&&z>y)){
            	  if(katta==x) cout<<a;
             else if(katta==y) cout<<b;
             else if(katta==z) cout<<c;
 }  
 else if((x<y&&x<z)||(y<x&&y<z)||(z<x&&z<y)){
 	if(x<y&&x<z)
	 	for(int i=0; i<y; i++){
 		         if(b[i]>c[i]) {cout<<b;break;}
        	else if(b[i]<c[i]) {cout<<c;break;}
 	     }
 	else if(y<x&&y<z)
	 	for(int i=0; i<y; i++){
 		         if(a[i]>c[i]) {cout<<a;break;}
        	else if(a[i]<c[i]) {cout<<c;break;}
 	     }
 	else if(z<x&&z<y)
	 	for(int i=0; i<y; i++){
 		         if(a[i]>b[i]) {cout<<a;break;}
        	else if(a[i]<b[i]) {cout<<b;break;}
 	     }
 	
 }
 else if(x==y && y==z) 
    for(int i=0; i<x; i++){
           if (a[i]>b[i] && a[i]>c[i]) {cout<<a;break;}
	  else if (b[i]>a[i] && b[i]>c[i]) {cout<<b;break;}
      else if (c[i]>a[i] && c[i]>b[i]) {cout<<c;break;}
      
      
           if (a[i]<b[i] && a[i]<c[i])  
		         for( ;i<x; i++){
		         	     if(b[i]>c[i]) {cout<<b;break;}
		            else if(b[i]<c[i]) {cout<<c;break;}
		         }
	  else if (b[i]<a[i] && b[i]<c[i]) 
	             for( ;i<x; i++){
		         	     if(a[i]>c[i]) {cout<<a;break;}
		            else if(a[i]<c[i]) {cout<<c;break;}
		         }
      else if (c[i]<a[i] && c[i]<b[i]) 
                  for( ;i<x; i++){
		         	     if(a[i]>b[i]) {cout<<a;break;}
		            else if(a[i]<b[i]) {cout<<b;break;}
                  }
    }
	return 0;
}
