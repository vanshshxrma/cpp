#include<iostream>
using namespace std;
void print(int a, int b){
    for(int i=a;i<=b;i++){
        cout<<i<<" ";
    }
}
int main(){
    int a;
    cout<<"enter 1st number";
    cin>>a;
    int b;
    cout<<"2nd number";
    cin>>b;
    print(a,b);

}