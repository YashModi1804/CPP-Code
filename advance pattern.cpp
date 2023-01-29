#include<bits/stdc++.h>
using namespace std;
void pattern1(int n){
    for(int i=n;i>0;i--){
        for(int j=1;j<=i;j++){
            cout<<j<<" ";
        }
        cout<<endl;
    }
}
void pattern2(int n){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            if((i+j)%2==0){
                cout<<1<<" ";
            }
            else{
                cout<<0<<" ";
            }
        }
        cout<<endl;
    }
}
void pattern3(int n){
    for(int i=n;i>=1;i--){
        for(int j=1;j<=i-1;j++){
            cout<<" ";
        }
        for(int k=1;k<=n;k++){
            cout<<"* ";
        }
        cout<<endl;

    }
}
void pattern4(int n){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i;j++){
            cout<<" ";
        }
        for(int k=1;k<=i;k++){
            cout<<k<<" ";
        }
        cout<<endl;

    }
}
void pattern5(int n){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i;j++){
            cout<<" ";
        }
        for(int k=i;k>=1;k--){
            cout<<k<<"";
        }
        for(int l=2;l<=i;l++){
            cout<<l<<"";
        }
        cout<<endl;

    }
}
void pattern6(int n){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i;j++){
            cout<<" ";
        }
        for(int k=1;k<=i;k++){
            cout<<"*"<<"";
        }
        for(int l=2;l<=i;l++){
            cout<<"*"<<"";
        }
        cout<<endl;

    }
    for(int i=1;i<=n;i++){
        for(int j=n-i;j<=n-1;j++){
            cout<<" ";
        }
        for(int k=n;k>=i;k--){
            cout<<"*"<<"";
        }
        for(int l=2;l<=n;l++){
            cout<<"*"<<"";
        }
        cout<<endl;

    }
}
int main(){
    int n;
    cin>>n;
    pattern6(n);

return 0;}