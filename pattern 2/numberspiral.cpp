#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter number of lines";
    cin>>n;
     //1 1 1 1 
     //1 2 2 2 
     //1 2 3 3 
     //1 2 3 4
     for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            cout<<min(i,j);
        }
        cout<<endl;
     }
}