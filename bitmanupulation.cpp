#include<bits/stdc++.h>
using namespace std;
//find the unique number in the given array
/*\now here we will use xor opperator as for same bits wheather its
0 or 1 it always give 0 as output so if and only if the two bits 
are different it will return true value so by this we can 
get to know the unique number in the array

*/
int find_unique(int ar[],int n){
    int xor_sum=0;
    for(int i=0;i<n;i++){
        xor_sum=xor_sum^ar[i];
    }
    return xor_sum;
}
//2 unique number in the array
/*now in this question problem is that if we do xor sum of all the 
elements of this array than atlast we will get combined xor
of 2 unique number now the question arise is how to extract the 
unique numbers from the xorsum now we need to understand that 
if there is a set bit in the xorsum means 1 than in one of the 
and only in one of the number there will be that setbit at same
position so we will run another independent loop on arry and using 
xor again likewise nd' as expected xorsum will return one of those unique
number now we just have to xor the one unique numbere and xor
of the both number to get the second unique number 
so by this we can get both the unique number very easily*/
int setBit(int n,int pos){
    return(n&(1<<pos))!=0;
}
void findunique2(int ar[],int n){
    int xorsum=0;
    for(int i=0;i<n;i++){
        xorsum=xorsum^ar[i];

    }
    int pos=0;
    int setbit=0;
    while(setbit!=1){
        setbit=setbit&1;
        pos++;
        1<<pos;
    }
    for(int i=0;i<n;i++){
        
    }


}
int main(){
    int ar[5]={1,2,1,4,4};
    int n=5;
  cout<<find_unique(ar,5);
}