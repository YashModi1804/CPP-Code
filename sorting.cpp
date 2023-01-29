#include<bits/stdc++.h>
using namespace std;
int selection_sort(int ar[],int n){
    int s=0,e=n-1;
    int MIN=INT_MAX;
    int check;
    while(s<=e){
        for(int i=s;i<=e;i++){
        MIN=min(ar[i],MIN);
        
        }
        for(int j=0;j<n;j++){
            if(ar[j]==MIN){
                check=j;
            break;}
        }
        
        int temp2=MIN;
        MIN=INT_MAX;
  int temp=ar[s];
        ar[s]=temp2;
        ar[check]=temp;
        s++;

    }
    for(int j=0;j<n;j++){
        cout<<ar[j]<<" ";
    }
    return 0;
    
}
int main(){
    int n=6;
    int ar[6]={334,567,2,0,1110,-16};
    selection_sort(ar,n);

}