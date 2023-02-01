#include<bits/stdc++.h>
using namespace std;
void swap(int ar[],int x,int y){
int  temp=ar[x];
    ar[x]=ar[y];
    ar[y]=temp;
}
void wave_sort(int ar[],int n){
    
    for(int i=1;i<n;i+=2){//i+2 cannot be used here 
        if(ar[i]>ar[i-1]){
               swap(ar,i,i-1);
        }
        if(ar[i]>ar[i+1] && i<=n-2){
            swap(ar,i,i+1);
        }
    }
}
int main(){
    int ar[]={2,3,4,1,0,9,99,46};
    wave_sort(ar,8);
    for(int i=0;i<8;i++){
        cout<<ar[i]<<" ";
    }
}