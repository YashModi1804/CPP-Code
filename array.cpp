#include<bits/stdc++.h>
using namespace std;
int main(){
    int ar[10]={2,56,44,7,0,12,16,90,34,46};
    int n;
    cout<<"enter the number to search in the given array:";
    cin>>n;
    int flag=1;
    int out;
    for(int i=0;i<10;i++){
        if(ar[i]==n){
            out=i;
            flag=0;
            break;
        }
    }
    if(flag==0){
        cout<<n<<"is at the "<<out+1<<"position"<<endl;
    }
    else{
        cout<<"given number is not present in the array";
    }
    return 0;
    

}