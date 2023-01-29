#include<bits/stdc++.h>
using namespace std;
int divisible(int n,int a,int b){
    int c1=n/a;
    int c2=n/b;
    int c3=n/(a*b);
    return c1+c2-c3;
}
int hcf(int a,int b){
    int rem=0;
    int ans=0;
    while(b!=0){
    
    rem=a%b;
    
    
    a=b;
    b=rem;
    
    
    }
    return a;
}
int main(){
    int a,b;
    cin>>a>>b;
    cout<<hcf(42,24);

}