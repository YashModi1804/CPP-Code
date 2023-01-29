#include<bits/stdc++.h>
using namespace std;
int bubble_sort(int ar[],int n){
    int imp=0;
    for(int i=1;i<n-1;i++){
        

        for(int j=0;j<n-imp;j++){
           if(ar[j]>ar[j+1]){
            int temp=ar[j+1];
            ar[j+1]=ar[j];
            ar[j]=temp;
            imp++;
           }
        }
    }
    for(int i=0;i<n;i++){
        cout<<ar[i]<<" ";
    }

return 0;
}
int main(){
    int ar[6]={2,1,7,3,0,5};
    int n=6;
    bubble_sort(ar,n);

}