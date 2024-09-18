#include<iostream>
using namespace std;
void printsquare(int n){
    for(int i=1;i<=n;i++){
        cout<<i*i<<endl;
    }
}
int main(){
    int n;
    cout<<"enter n";
    cin>>n;
    printsquare(n);
}