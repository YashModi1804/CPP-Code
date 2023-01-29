#include<bits/stdc++.h>
using namespace std;
int main(){
    //different method to declare string
   /* string str(6,'y');//for repetetive character like yyyyyy
    cout<<str;
    string str1="yash";
    cout<<str1;
    string str2;
    cin>>str2;
    cout<<str2;*/

/*now in case of sentence where we have spaces 
we use getline function to get input
 string str3;
 getline(cin,str3);
 cout<<str3;
//now functions in strings 1]append;
string st1="yash ";
string st2="modi";
st1.append(st2);
cout<<st1;
//similarly s1+s2 also works a apppend
cout<<st1+st2;
string st1="hi how are u";
st1.clear();
cout<<st1;
//compare function 
string o="hi";
string n="modi";
cout<<o.compare(n);

if(o.empty()){
    cout<<"it is empty";
*/

//erase function with syntax the starting index, number of characcter to erase
string sample="anamotopia";
cout<<sample.erase(0,5);
//find function is use to find the location of 
//insert function is used to insert the string inside the word
sample.insert(0,"pre");
cout<<sample;
cout<<sample.length()<<endl;
string ok=sample.substr(0,3);
cout<<ok;
//in order to covert string to integer there is stoi function
string a="hi how are u";
//similary there is a function to_string()
sort(a.begin(),a.end());
cout<<a;
}