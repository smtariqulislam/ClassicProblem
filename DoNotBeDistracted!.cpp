
/* 
        Hi I am S M Tarqiuql Islam.

   University:Eastern University. Bangladesh.


*/

// Question: https://codeforces.com/contest/1520/problem/A


#include<bits/stdc++.h>
#include <string>
using namespace std;
#include<cstdlib>



int main(){


int t;
    cin>>t;
    while(t--){
        int n,c=0;
        string s;
        cin>>n>>s;
        for(int i=0;i<s.size();i++){
            for(int j=i+1;j<s.size();j++){
                if(s[i]!=s[i+1]&&s[i]==s[j])
                c++;
            }
        }
        if(c==0)
        cout<<"YES"<<endl;
        else
        cout<<"NO"<<endl;
    }
    
   

return 0;

}



 
