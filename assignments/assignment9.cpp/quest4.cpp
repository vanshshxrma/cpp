#include<iostream>
using namespace std;
int squareofcount(int n){
    int count =0;
    while(n!=0){
        n /=10;
        count++;
    }
    return count*count;
}
int main(){
    int n;
    cout<<"enter the number";
    cin>>n;
    cout<<squareofcount(n);
}