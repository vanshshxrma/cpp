#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter no. of lines";
    cin>>n;
    for(int i=1;i<=2*n-1;i++){
        cout<<"*";
    }
    cout<<endl;
     int  m = n-1;    //new lines
     int nsp=1;
     for(int i=1;i<=m;i++){
        for(int j=1;j<=m+1-i;j++){
        cout<<"*";
     }
     //spaces
     for(int k=1;k<=nsp;k++){
        cout<<" ";
     }
     nsp+=2;
     //stars
     for(int j=1;j<=m+1-i;j++){
        cout<<"*";
     }
     cout<<endl;
}

}