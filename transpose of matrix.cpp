#include<bits/stdc++.h>
using namespace std;
int main(){
    
   int ar[3][3];
   for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){
        cin>>ar[i][j];
    }
   }
   int temp=0;
   //transpose **only applicable for sq matrix
   for(int i=0;i<3;i++){
    for(int j=i;j<3;j++){
       
            temp=ar[i][j];
            ar[i][j]=ar[j][i];
            ar[j][i]=temp;
         

    
   }}
    for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){
        cout<<ar[i][j]<<" ";
    }
    cout<<endl;
   }
}