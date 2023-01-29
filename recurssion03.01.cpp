#include<bits/stdc++.h>
using namespace std;
string remove_duplicate(string s){//remove continuous dup char
    if(s.length()==0){
        return "";
    }
    char ch=s[0];
    string ans=remove_duplicate(s.substr(1));
    if(ch==ans[0]){
        return ans;
    }
    return ch+ans;
}
//shift all x at the end
string shift(string s){
    if(s.length()==0){
       return "";
    }
    char ch=s[0];
    string ans=shift(s.substr(1));
    cout<<s<<endl;
    
    if(ch=='x'){
        return ans+ch;
    }

    return ch+ans;
}

//get substring out of a string
void subseq(string s,string ans){
    if(s.length()==0){
        cout<<ans<<endl;
        return;
    }
    char ch=s[0];
    string rest=s.substr(1);
    subseq(rest,ans);
    subseq(rest,ans+ch);
}
//substring and ascii value
void asci_substring(string s,string ans){
    if(s.length()==0){
        cout<<ans<<endl;
        return;
    }
    char ch=s[0];
    int ascii=int(ch);
    string num=to_string(ascii);
    string rest=s.substr(1);
    asci_substring(rest,ans);
    asci_substring(rest,ans+ch);
    asci_substring(rest,ans+num);
}
//there is one key pad question take a look

int main(){
    //cout<<remove_duplicate("aaabbbbcccccccde");
    //shift("axxxdxs");
    //subseq("abc","");
    asci_substring("AB","");
}