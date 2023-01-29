#include<bits/stdc++.h>
using namespace std;
void count_sort(int ar[],int n,int ans[]){
    int k=INT_MIN;
    for(int i=0;i<n;i++){
        k=max(k,ar[i]);
    }
    int count[k+1]={0};
    for(int i=0;i<n;i++){
        count[ar[i]]++;
    }
    for(int i=1;i<=k;i++){
        count[i]=count[i]+count[i-1];
    }
   
    
    for(int i=n-1;i>=0;i--){
        ans[count[ar[i]]-1]=ar[i];
        count[ar[i]]--;
    }
    

}
int main(){
    int ar[]={1,3,2,3,4,1,6,4,3};
    int ans[9];
    int n=9;
    count_sort(ar,n,ans);
    for(int i=0;i<n;i++){
        cout<<ans[i]<<" ";
    }
       

}