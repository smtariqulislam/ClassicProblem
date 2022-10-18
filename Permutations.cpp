
/* 
        Hi I am S M Tarqiuql Islam.

   University:Eastern University. Bangladesh.


*/

/* 
     Question: https://cses.fi/problemset/result/4828315/

*/

#include<bits/stdc++.h>
#include <string>
using namespace std;
#include<cstdlib>


int main(){

int n;
    cin>>n;
    if(n==1)cout<<1<<"\n";
    else if(n<=3)cout<<"NO SOLUTION"<<"\n";
    else{
        for(int i=2;i<=n;i+=2)cout<<" "<<i;
            for(int i=1;i<=n;i+=2)cout<<" "<<i;
    }
    

  
   

return 0;

}



 
