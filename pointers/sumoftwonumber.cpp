#include<iostream>
using namespace std;
int main(){
    int x=6;
    int y= 9;
    int*p1 = &x;
    int *p2 = &y;
    cout<<*p1 + *p2;
}