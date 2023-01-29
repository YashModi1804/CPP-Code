//RAT IN THE MAZE
#include<iostream>
using namespace std;
bool is_safe(int** ar,int n,int x,int y){//** is used for dynamic memory allocation 
    if(x<n && y<n && ar[x][y]==1){
        return true;
    }
    return false;
}
bool maze(int** ar,int n,int x,int y,int** solution  ){
if(x==n-1 && y==n-1){
    solution[x][y]=1;//base condition
    return true;
}
 if(is_safe(ar,n,x,y)){
        solution[x][y]=1;
        if(maze(ar,n,x+1,y,solution)){
            return true;
        }
        if(maze(ar,n,x,y+1,solution)){
            return true;
        }
        solution[x][y]=0;// backtracking
        return false;
        
    }
    return false;
    }
int main(){
 //2d array dynamic memory allocation method given below;
     int n;
     cin>>n;
     int** ar=new int*[n];
     for(int i=0;i<n;i++){
        ar[i]=new int[n];
     }
     for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>ar[i][j];
        }
     } 
     int** solution=new int*[n];
     for(int i=0;i<n;i++){
        solution[i]=new int[n];
        for(int j=0;j<n;j++){
            solution[i][j]=0;
        }   
     }
     if(maze(ar,5,0,0,solution)){
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                cout<<solution[i][j]<<" ";
            }
            cout<<endl;
        }
     }


}
