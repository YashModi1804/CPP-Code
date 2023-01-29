#include<bits/stdc++.h>
using namespace std;
void permutation(string s,string ans){
    if(s.length()==0){
        cout<<ans<<endl;
        return;
    }
    for(int i=0;i<s.length();i++){
        char ch=s[i];
        string ros=s.substr(0,i)+s.substr(i+1);
        permutation(ros,ans+ch);
    }

    
}/*in this question we are find the number of ways 
to move from 0 1 2 3 blocks like wise if we have starting point
at 0 and ending pt at 3 than number of ways to travel is 4 
so another way is that we should sum up the number of ways
from the upcoming s++ values like 1-3 + 2-3 + when s=e should give one way to reach
so return 1
*/
int count_path(int s,int e){
    if(s==e){
        return 1;
    }
    if(s>e){
        return 0;
    }
    int count=0;
    for(int i=1;i<=6;i++){
        count+=count_path(s+i,e);
        }
        return count}
int maze_path(int n,int x,int y){
        if(x==n-1 && y==n-1){
            return 1;
        }
        if(i>=n || j>=n){
            return 0;   
        } 
      return  maze_path(n,x+1,y)+maze_path(n,x,y+1);

}

int main(){
    permutation("ABC","");
}