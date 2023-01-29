#include<bits/stdc++.h>
using namespace std;
void rev_string(string a){
    if(a.length()==0){
        return;
    }
    string rest=a.substr(1);
    rev_string(rest);
    cout<<a[0];
}
void pi(string s){//funciton to replace string pi with 3.14
    if(s.length()==0){//base case
        return;
    }
    if(s[0]=='p' && s[1]=='i'){
        cout<<"3.14";
       string rest=s.substr(2);
        pi(rest);
        
    }
    else{
      string  rest=s.substr(1);
        cout<<s[0];
        pi(rest);
    }
    
    
    
}

int main(){
    string s="ypiapspih";
   //rev_string(a);
   pi(s);
}