#include<bits/stdc++.h>
using namespace std;
const int m=3;
void search(int ar[m][m],int key){
   for(int i=0;i<m;i++){
        for(int j=0;j<m;j++){
            if(ar[i][j]==key){
                cout<<"element found"<<"row "<<i<<"column "<<j;
            }

        }
    }
}
int main(){
   int key,n;
    cin>>n>>key;
    int ar[n][n]={};
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>ar[i][j];


        }
    }
    search(n,ar[n][n],key);
}