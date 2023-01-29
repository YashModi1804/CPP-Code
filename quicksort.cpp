#include<bits/stdc++.h>
using namespace std;
int partition(int ar[],int low,int high){
    int i=low-1;
    int pivot=ar[high];
    for(int j=low;j<high;j++){
        if(ar[j]<pivot){
            i++;
            int temp=ar[i];
            ar[i]=ar[j];
            ar[j]=temp;
        }
    }
    int temp=ar[i+1];
    ar[i+1]=ar[high];
    ar[high]=temp;
    return i+1;
}
void quick_sort(int ar[],int low,int high){
    if(low<high){
        int pi=partition(ar,low,high);
        quick_sort(ar,low,pi-1);
        quick_sort(ar,pi+1,high);
    }
}
int main(){
    int ar[]={2,7,1,9,0};
    int n = sizeof(ar)/sizeof(ar[0]);
    quick_sort(ar,0,n-1);
    for(int i=0;i<n;i++){
        cout<<ar[i]<<" ";
    }
    return 0;
}
