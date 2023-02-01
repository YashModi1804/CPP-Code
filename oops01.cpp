#include<bits/stdc++.h>
using namespace std;
class student{
    public:
    string name;//by deafult class is a private function so int main cannnot access it
    //but by using public keyword it is accesible 
    int age;
    bool gender;//name age gender are data members or attribute of a class student
     void print(){//this 
        cout<<"name:";
        cout<<name<<endl;
        cout<<"age:";
        cout<<age<<endl;
        cout<<"gender:";
        cout<<gender<<endl;
     }
};//we use terminator after the bracket in class
int main(){
   /*student a;//a is object of a class or you say part of student class
    a.name="yash";
    a.age=18;
    a.gender=0;   //0 -male and  1- female*/
    student ar[2];
    for(int i=0;i<2;i++){
        cin>>ar[i].name;
        cin>>ar[i].age;
        cin>>ar[i].gender;
    }
    for(int i=0;i<2;i++){
        ar[i].print();
    }

    
}