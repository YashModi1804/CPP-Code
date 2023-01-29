#include<bits/stdc++.h>
using namespace std;
void increment(int a){
   a++;
}
int main(){
   /* int n=4;
   int ar[4]={1,20,3,4};
   
   array also behave like a pointer where ar its self is memory
   memory location and *ar denotes the zeroth index value 
   the only difference here in terms of pointer is that pointer
   works on memory location basis in which if we to change memory
   it should be in multiple of four as integer take 4byte data
   but in case of array it just on the basis of index
   so if we want next element in the array after the deafult
   zeroth element than we have to use *(ar +i)and certainly we c
   use i in a for looop and extend its value in order to get
   the next index element;
   for(int i=0;i<n;i++){
      cout<<*(ar+i)<<endl;
   }
   int a=10;
   int *p;
   p=&a;
   int **v;
   v=&p;
   cout<<*v;
   int x=10;
   int *p=&x;
   cout<<p;
   cout<<*p;
/*now it is important to understand that pointer application is to change the orignal variablevalue from anywhere in the program*/
int a=10;
increment(a);
cout<<a;
/*here value of a will not change bcz increment is only 
changing the value by using another local variable which 
in concidencally is "a" but a declared in int main being a 
variable of superior scope its value at its own memory location 
remain 10 only that why we see no change even after using 
 increment fucntion to increase the value of the input so in 
 order to change the value of a at  its own location it is
  important to acces the actual a variable 's address which 
  can be done by declaring pointer in the fucntion instead of 
  local variable thse pointer will acces the variable by its 
  variable location like wise give below*/
  /*int increment(int *a or anyother variable){
   *a++;
  }
  int a=10;
increment(&a)*/
    
   
}