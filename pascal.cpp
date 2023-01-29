#include<bits/stdc++.h>
using namespace std;
int fact(int a){
    int factorial=1;
    for(int i=1;i<=a;i++){
    factorial*=i;
    }
    return factorial;
}
int ncr(int n,int r){
    int output=fact(n)/(fact(n-r)*fact(r));
    return output;
    }
void pascal(int row){
    for(int i=0;i<=row;i++){
        for(int j=0;j<=i;j++){
            cout<<ncr(i,j)<<" ";
        }
        cout<<endl;
    }
}
int main(){
    pascal(6);

}