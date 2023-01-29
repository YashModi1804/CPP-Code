#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
    int rev=0;
	int temp=n;
	while(n>0){
		
	int last=n%10;
	if(n==temp){
			if(last==0){
				last=1;

			}
		}
	n/=10;
	rev=rev*10+last;
	}
	cout<<rev;
	return 0;
}