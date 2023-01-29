#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
   int temp[n],ar[n];

    for(int i=0;i<n;i++){
        cin>>ar[i];
        temp[i]=-ar[i];

    }
    int m=INT_MIN;
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=temp[i];
        if(sum<0){
            sum=0;
        }
        m=max(m,sum);
        
        
    }
    m=-m;
    int org_sum=0;
    for(int i=0;i<n;i++){

        org_sum+=ar[i];

    }
    int ans=0;
    ans=org_sum-m;
    cout<<m;

    }
