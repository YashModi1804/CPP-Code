#include<bits/stdc++.h>
using namespace std;
int insertion_sort(int ar[],int n){
    for(int i=1;i<n;i++){
        int current=ar[i];
        int j=i-1;
        while(ar[j]>current && j>=0){
            ar[j+1]=ar[j];
            j--;

        }
        ar[j+1]=current;

    }
for(int i=0;i<n;i++){
    cout<<ar[i]<<" ";
}
return 0;}
int main(){
    int ar[6]={2,16,3,9,0,4};
    int n=6;
    insertion_sort(ar,n);


}