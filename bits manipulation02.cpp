#include<bits/stdc++.h>
using namespace std;
//if number is power of 2
bool pow_2(int n){
   return (n && !(n&(n-1)));
}
//to count number of ones in binary format of number
int numberofones(int n){
    int count=0;
    while(n){
        n=n&(n-1);
        count++;
    }
    return count;
}
//number of subsets of a set
void subset(int ar[],int n){
    for(int i=0;i<(1<<n);i++){//as we know there are 2^n subsets
    //and 1<<n represent 2^n
    for(int j=0;j<n;j++){
        if(i &(1<<j)){
            cout<<ar[j]<<" ";
        }
    }
    cout<<endl;

    }
}
int main(){
   // cout<<pow_2(8);
   //cout<<numberofones(8);
   int ar[4]={1,23,4,5};
     subset(ar,4);
}