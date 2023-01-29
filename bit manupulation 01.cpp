#include<bits/stdc++.h>
using namespace std;
int getbit(int n,int pos){
    return (n&(1<<pos))!=0;
}
//set bit means that putting 1 at the desired pos;
int setbit(int n,int pos){
    return (n |(1<<pos));
}
//clear bit means that putting zero /or clearing at given position
int clearbit(int n,int pos){
    return (n& ~(1<<pos));
}

int updatebit(int n ,int pos,int q){
    if(q==1)
    return (n |(1<<pos));
        
    
    else if(q==0)
    return (n & (0<<pos));
        
    
}
int main(){
   // cout<<getbit(5,2);
    //cout<<setbit(5,1);
    //cout<<clearbit(7,1);
     cout<<updatebit(5,4,1);
}