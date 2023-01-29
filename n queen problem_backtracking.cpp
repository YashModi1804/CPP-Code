#include<bits/stdc++.h>
using namespace std;
bool is_safe(int** ar,int x,int y,int n){
    for(int row=0;row<x;row++){//checking for the column 
        if(ar[row][y]==1)
        return false;
    }
    //checking for diagonal 
    for(int row=0,col=0;row>=0 && col>=0;row--,col--){
        if(ar[row][col]==1){
        return false;}
        
    }
    
    for(int row=0,col=0;row>=0 && col<y;row--,col++){
        if(ar[row][col]==1){
            return false;
        }
        
    }

    return true;
}
bool nqueen(int** ar,int x,int y,int n){
    if(x>=n){
        return true;
    }
    for(int col=0;col<n;col++){
        if(is_safe(ar,x,col,n)){
            ar[x][col]=1;
            if(nqueen(ar,x+1,y,n)){
                return true;
            }
            ar[x][col]=0;
        }

    }
    return false;
}
int main(){
    int n;
    cin>>n;
    int** ar=new int*[n];
    for(int i=0;i<n;i++){
        ar=new int*[n];  
        for(int j=0;j<n;j++){
            ar[i][j]=0;
        }
    }
    if(nqueen(ar,0,0,n)){
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                cout<<ar[i][j];
            }
        }
    }
    
}