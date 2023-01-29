//practice problem 01 find maximum element till i th element
#include<bits/stdc++.h>
using namespace std;
int maxi(int ar[],int n,int i){
    int maxx=INT_MIN;
    if(i<n){
    for(int k=0;k<=i;k++){
        maxx=max(ar[k],maxx);
    cout<<maxx<<" ";}
    }
    
    else{
        cout<<i<<" is greater out of array error";
    }
    
return 0;}
int main(){
   /*int ar[6]={2,44,5,77,90,0};
   int n=6;
  int  i=3;
  maxi(ar,n,i);*/
    

//practice problem 02 find longest possible arithmetic sub arraint ar[6]={2,5,8,11,10};
/*int n=6;
int d=0;

int check[]={};
for(int i=0;i<n;i++){
    for(int j=i;j<n;j++){
        d=ar[i]-ar[j];
        
        
        
    }

//google kickstart problem record breaking day
int ar[8]={1,2,0,7,2,0,2,2};
int n=8;
int count=0;
if(ar[0]>ar[1]){
    count++;
}
for(int i=1;i<n;i++){
     for(int j=i-1;j>=0;j--){
        if(ar[j]>ar[i]){
            break;
        
        }
        else if(ar[j]<ar[i] && j==0){
            count++;
        }
       
        }
     }
     cout<<count;
     int ar[8]={2,3,6,9,3,5,9,6};
     int n=8;
     int check;
     int follow=0;
     for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(ar[i]==ar[j]){
               check=i;
               follow=1; 
                break;
            }
            if(follow==1){//this method is n^2 time complexity approach
                break;
            }
        }
     }cout<<check<<endl<<ar[check];
     int n=6;
     int ar[6]={2,8,1,6,3,0};
     
     int j=0,sum=0;
     int st,en;
     while(j<n && sum<5){
       
        sum+=ar[j];
         j++;


     }
     while(j<n && sum<=5){
        sum+=ar[j];
        en=j;
        j++;
        

     }
for(int i=0;i<n;i++){
    if(ar[i]=5-ar[en]){
        st=i;
    }
}
cout<<st<<" "<<en;*/
int n;
cin>>n;
int ar[n];
int sum=0;
int m=INT_MIN;


for(int i=0;i<n;i++){
    cin>>ar[i];
}
for(int i=0;i<n;i++){
    for(int j=i;j<n;j++){
        sum+=ar[j];
    }

    m=max(sum,m);
    sum=0;

}
cout<<m;

}

