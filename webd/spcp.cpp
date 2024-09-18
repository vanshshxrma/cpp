#include<iostream>
using namespace std;
int main(){
    cout<<"enter the cost price:";
    int cp;
    cin>>cp;
    cout<<"enter the selling price:";
    int sp;
    cin>>sp;
    if(sp>cp){
        cout<<"profit";

    }
    if(cp>sp){
        cout<<"loss";
    }

    if(cp==cp){
        cout<<"no profit,no loss";
    }
}
