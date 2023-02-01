//INHERITANCE
//so inheritance here refer to classes which inherit or derive the function which are publically available in one class to other this means that if one class have function x which is public and another class is a inheritance of the previous class than second class is also allowed to use the fucntion x even if it is not defined in  his own class domain
#include<bits/stdc++.h>
using namespace std;
class a{
    public:
    void function(){
        cout<<"inheritance";
    }//similarly multiple inheritance is also possible in the same way where two or more base class inherit function to single inherit

};
class b: public a{

};
int main(){
    b x;
    x.function(); 
}