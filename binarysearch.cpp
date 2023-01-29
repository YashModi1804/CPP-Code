#include<bits/stdc++.h>
using namespace std;
int binary_search(int ar[],int n,int key){
    int s=0,e=n-1;
    while(s<=e){
      int mid=(s+e)/2;
    if(ar[mid]==key){
        return mid; 
    }
    if(ar[mid]>key){
        e=mid-1;
    }
    else{
        s=mid+1;
    }
    }
    return -1;
}
int main(){
    int n;
    cin>>n;
    int ar[n];
    int key;
    
    for(int i=0;i<=n;i++){
        cin>>ar[i];
    }
    cin>>key;
    
    
   cout<<binary_search(ar,n,key);

return 0;

}