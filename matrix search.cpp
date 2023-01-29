//one method could be the bruteforce one which will have n sq tc.
#include<bits/stdc++.h>
using namespace std;
int main(){
    int ar[4][6]{{1,2,3,4,5,6},{7,8,9,10,11,12},{13,14,15,16,17,18},{19,20,21,22,23,24}};
    int r=0,c=5;
    int search;
    cin>>search;
    while(r<4 && c>=0){
        if(ar[r][c]==search){
            cout<<"found "<<r<<","<<c;
            break;
        }
        else if (ar[r][c]<search)
        {
            r++;
        }
        else{
            c--;
        }
        

    }

}