#include<bits/stdc++.h>
using namespace std;
int main(){
    int ar[6]={2,4,1,6,7,9};
    int n=6;
    int m=INT_MIN;
    int sum=0;
    for(int i=0;i<n;i++ ){
        sum+=ar[i];
        if(sum<0){
            sum=0;
        }
        m=max(m,sum);
    }
    cout<<m;
    
    
    
}