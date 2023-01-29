#include<bits/stdc++.h>
using namespace std;
int main(){
   int  ar[2][3]={{1,2,3},{4,5,6}};
    int m=2,n=3,o=4;
   int  a[3][4]={{1,2,3,10},{4,5,6,11},{7,8,9,12}};
    int need=0;
    int ans[m][n];
    for(int i=0;i<m;i++){
        for(int j=0;j<o;j++){
           ans[i][j]=0;
        }
        
    }
    for(int i=0;i<m;i++){
        for(int j=0;j<o;j++){
            for(int k=0;k<n;k++){
                ans[i][j]+=ar[i][k]*a[k][j];

                
            }
        }
    }
    for(int i=0;i<m;i++){
        for(int j=0;j<o;j++){
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }

}