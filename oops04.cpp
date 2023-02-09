//POLYMORPHISM
//the simple definetion of the above word is mutliple forms of the same thing like carbon in the form of diamond graphite and fullerene 
//polymorphism in oops majory divided into two parts compile time and run time the compile time is further divided into function overloading and operator overloading and  runtime further divide to virtual function

// class a{
//     public:
//     void function(){
//         cout<<"fucntion1";
//     }
//     void function(int ok){
//         cout<<"function2";
//     }
//     void function(string a){
//         cout<<"functioin3";
//     }
// };
// int main(){
//     a b;   
//     b.function();
//     b.function(55);
//     b.function("yash");
// }
#include<bits/stdc++.h>
using namespace std;
// class Complex{
//  private:
//     int real,imag;
//     public:
//     Complex(int r,int i){//parametrised constructor
//         real = r;
//         imag = i;

//     }
//     Complex(){

//     }
//     Complex operator +(Complex const &a){
//         Complex res;
//         res.imag=imag+a.imag;
//         res.real=real+a.real;
//         return res;
//     }
//     void display(){
//         cout<<real<<" + (i)"<<imag;
//     }
// };
// int main(){
// Complex c1(2,3);
// Complex c2(4,7);
// Complex c3;
// c3=c1 + c2;
// c3.display();

// }
class base{
    public:
   virtual void print(){
        cout<<"base case print";
    }
    void display(){
        cout<<"base case display";
    }
};
class derive :public base{
    public:
    void print(){
        cout<<"derive case print";
    }
    void display(){
        cout<<"derive case display";
    }
};
int main(){
    base *baseptr;
    derive d;
    baseptr=&d;
    baseptr -> print();
    baseptr->display(); 

}