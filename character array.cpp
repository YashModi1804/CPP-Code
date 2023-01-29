#include<bits/stdc++.h>
using namespace std;
int main(){
    char ar[5];
    cin>>ar;
    int n=5;
    int flag=0;
    //check if pallindrome or not
    for(int i=0;i<n;i++){
        if(ar[i]==ar[n-1-i]){
            flag++;
        }
    }
    if(flag==n){
        printf("yes it is a pallindrome %c",ar);

    }
    else{
        cout<<"no it is not a pallindrome";
    }
}