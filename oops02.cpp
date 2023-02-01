#include<bits/stdc++.h>
using namespace std;
class student{
    string name;//as name is out of public than it become a private data member
    //if we do not declare name public but we can use public udf to access it

    public:
    // now if the object is passed without than deafult constructor is executed
    student(){
    cout<<"deafult constructer"<<endl;
        }

   

   
   student(string s,int a,bool g){//now it would be great that rather than use all this function we could have made it little easy by using something like student a("yash") so that i can directly input the name in the main function so it is possible by using a constructor and defining the name of the class a funciton in the class mentioned out of the main()
    name=s;
    age=a;
    gender=g;}
    student(student &a){//copy constructor
        name=a.name;
        age=a.age;
        gender=a.gender;
    }
    ~student(){
        cout<<"destructur"<<endl;
    }
    
   
    void setname(string s){
         name=s; 
     }
     int age;
    bool gender;
    void print(){
    cout<<name;
     }

};
int main(){
   /* student a;
    string s="yash";
    a.setname(s);
    a.print();*/
    student b("yash",18,0);//deafult constructor eg
    student c=b;//copy constructor eg
    student d;
    if(c==b){
        cout<<"same";
    }
    else{
        cout<<"not same";
    }
}