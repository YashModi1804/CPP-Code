#include<iostream>
using namespace std;
int prime_range(int num1,int num2){
        int check;
        for(int i=num1;i<=num2;i++){
            for(int j=2;j<=i;j++){
                if(i%j==0){
                    check=j;
                    break;
                }
            }if(check==i){
                cout<<check<<endl;
            }
        }
    return 0;}
int main(){
    
    prime_range(4,10);
}
