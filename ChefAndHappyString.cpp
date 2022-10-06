
// Hi I am S M Tarqiuql Islam.
// University:Eastern University.



/* Question: https://www.codechef.com/submit/HAPPYSTR

*/

#include<bits/stdc++.h>
#include <string>
using namespace std;
#include<cstdlib>

int main(){

    int t;
    cin>>t;

    while(t--){

        string s;

        cin>>s;

        int ans=0;
int c=0;
    for (int i = 0; i <s.size(); i++){

        
        if (s[i]=='a' || s[i]=='A' || s[i]=='i' || s[i]=='I' || s[i]=='e' || s[i]=='E' || s[i]=='u' || s[i]=='U' || s[i]=='o' || s[i]=='O'){
            
            c++;

            if(c>2){
                cout<<"happy"<<"\n";
                break;
            }

           }
           else{
            c=0;
           }


   

  }

  if(c<2){
    cout<<"sad"<<"\n";
  }

 }  
   
}