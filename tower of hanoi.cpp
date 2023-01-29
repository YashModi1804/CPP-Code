#include <bits/stdc++.h> // header file includes every Standard library
using namespace std;
void towerofhanoi(int n,char src,char destination,char helper){
    if(n==0){
        return;
    }
    towerofhanoi(n-1,src,helper,destination);
    cout<<"move from "<<src<<" to "<<destination<<endl;
    towerofhanoi(n-1,helper,destination,src);
    cout<<"move from "<<helper<<" to "<<destination<<endl;
}

int main() {
    towerofhanoi(3,'a','b','c');

}
