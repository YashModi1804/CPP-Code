#include<bits/stdc++.h>
using namespace std;
int binary_decimal(int n){
   int n2=1,sum=0;
    while(n>0){
   
    sum+=(n%10)*n2;
    n/=10;
    n2*=2;
   

}cout<<sum;
return 0;}
int main(){
    binary_decimal(111001);

}