#include<bits/stdc++.h>
using namespace std;
int main(){
vector<int> a;
a.push_back(5);//push back a pre defined funciton used to enter 
//element one after other you can also conside like append;
a.push_back(3);
a.push_back(0);
/*for(int i=0;i<a.size();i++){
    cout<<a[i]<<" ";
}
//another method to find the output of array
vector<int>::iterator it;//here it is a defined iterator
for(it=a.begin();it!=a.end();it++){
    cout<<*it<<endl;//we use *it because it is pointer
}
//another way is very simple 
//here we use auto keyword which take the datatype automatically
//and than use keyword element to signify every index value
//of the array*/
for(auto element:a){
    cout<<element;
}
//the another funciton is pop which pops the last value
v.pop_back();
//to intialize a vector type with same values
vector<int> b (3,50);//50 50 50
swap(a,b);// for swaping values of two vectors
sort(a.begin(),a.end())//for sorting functions
}