/*one can consider this whole thing as stack in which 
we use first in last out property by which 
it firstly return the last called function */
#include<bits/stdc++.h>
using namespace std;
int sum(int n){
    if(n==0){     
        return 0;
    }
    int prev_sum=sum(n-1);
    return n+sum(n-1);

}
int power(int n,int p){
    if(p==0){
        return 1;
    }
    int prev=power(n,p-1);
    return n*prev;
}
int factorial(int n){
    if(n==0){
        return 1;
    }
    int prev=factorial(n-1);
    return n*prev;
}
int nth_fibo(int n){
    if(n==0)
    return 0;
    
    if(n==1)
    return 1;

    int ans=nth_fibo(n-1)+nth_fibo(n-2);

    return ans;
}

int main(){
    //cout<<sum(4);
    //cout<<power(2,10);
   // cout<<factorial(5);
    //cout<<nth_fibo(6);
}
