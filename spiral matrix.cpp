#include<bits/stdc++.h>
using namespace std;
int main(){
   int n,m;
   cin>>n>>m;
   int ar[n][m];
   for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
        cin>>ar[i][j];
    }
   }
   //spiral order print
   int row_start=0,row_end=n-1,col_start=0,col_end=m-1;
   while(row_start<=row_end && col_start<=col_end){
   for(int i=col_start;i<=col_end;i++){
    cout<<ar[row_start][i]<<" ";
   }
   row_start++;
   for(int i=row_start;i<=row_end;i++){
    cout<<ar[i][col_end]<<" ";
    
   }
   col_end--;
   for(int i=col_end;i>=col_start;i--){
    cout<<ar[row_end][i]<<" ";
   }
   row_end--;
   for(int i=row_end;i>=row_start;i--){
    cout<<ar[i][col_start]<<" ";
   }
   col_start++;
}}