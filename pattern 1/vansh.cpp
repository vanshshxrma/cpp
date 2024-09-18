#include<bits/stdc++.h>
using namespace std;

int main(){
    for(int i=0; i<5; i++){
        for(int j=0; j<25; j++){
            if(i-j==0 or i+j==8 or i-j==-15 or i+j==14 or (i==2 and j>11 and j<17)) cout<<'*';
            else cout<<' ';
        }
        cout<<endl;
    }
}