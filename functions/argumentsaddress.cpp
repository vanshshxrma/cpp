#include<iostream>
using namespace std;
int a=9;
void fun(int x, int y){
    cout<<"Address of fun x"<<&x<<endl;
    cout<<"address of fun y"<<&y<<endl;
}
void f(){
    cout<<a;
}
int main(){
    cout<<a+7<<endl;
    f();
}