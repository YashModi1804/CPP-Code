//0 1 2 algo or red white blue dutch national flag algo
/*the concept of dnf is helpful when there are three different number
and only 3 different numbers are present in the array to sort
we can use low,mid,high pointer to divide all three ind ifferent 
region and than follow up
if 
1 than mid++
0 than mid and low replace low++ and mid++
2 than mid and high replace high-- */
#include<bits/stdc++.h>
using namespace std;
void swap(int ar[],int x,int y){
     int temp;
     temp=ar[x];
     ar[x]=ar[y];
     ar[y]=temp;

}
void dnf(int ar[],int n){
    int low=0,mid=0,high=n-1;
    while(mid<=high){
    if(ar[mid]==0){
      swap(ar,mid,low);
      mid++;
      low++;
    }
    else if(ar[mid]==1){
        mid++;
    }
    else{
        swap(ar,mid,high);
        high--;
    }}


}
int main(){
    int ar[9]={1,2,2,0,0,2,1,2,0};
    dnf(ar,9);
    for(int i=0;i<9;i++){
        cout<<ar[i]<<" ";
    }

}