#include<bits/stdc++.h>
using namespace std;
bool sorted(int ar[],int n){

    if(n==1){
    return true;
    }
    bool rest=sorted(ar+1,n-1);//ar+1 is done to shift the pointer to the first position from zeroth
    return (ar[0]<=ar[1] && rest);
}

void dec(int n){//print number in decreasing order
    if(n==0){
        return;
    }
    cout<<n<<endl;
    dec(n-1);
}
void asec(int n){//number is ascending order 
    if(n==0){
        return;
    }
    asec(n-1);
    cout<<n<<endl;}
int first_occ(int ar[],int n,int num,int i){//first occurence of num in the array cout the index

    if(ar[i]==num){
        return i;
    }
    return (first_occ(ar,n,num,i+1));
}
int last_occ(int ar[],int n,int num,int i){
    int rest=last_occ(ar,n,num,i+1);
    if(rest!=-1){
        return rest;
    }
    if(ar[i]==num){
        return i;
    }
     return -1;
    
}

int main(){
  int ar[]={1,2,5,4,5,2,0};
   cout<<last_occ(ar,7,2,0);
}