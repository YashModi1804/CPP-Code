#include<bits/stdc++.h>
using namespace std;
int main(){
  /*  string a;
    getline(cin,a);
    //converting upper case to lower and vice versa
    for(int i=0;i<a.length();i++){
        if(a[i]>='a' && a[i]<='z'){
            a[i]-=32;
        }
        else{
            a[i]+=32;
        }
    }
    cout<<a;

//inbuilt function for the above mentioned program
string ok;
getline(cin,ok);
transform(ok.begin(),ok.end(),ok.begin(),::tolower);
cout<<ok;
string a;
cin>>a;
sort(a.begin(),a.end(),greater<int>());//this greater int is used to sort in descending order
cout<<a;*/
string a="jsadddddklfahgirg";
int ar[26];
for(int i=0;i<26;i++)
ar[i]=0;
for(int i=0;i<a.length();i++)
ar[a[i]-'a']+=1;
char ans='a';
int maxf=0;
for(int i=0;i<26;i++){
    if(ar[i]>maxf){
        maxf=ar[i];
        ans=i+'a';
    }
}
cout<<maxf<<" "<<ans;





}