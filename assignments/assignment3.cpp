#include<iostream>
using namespace std;
int main(){
    int r;
    cout<<"enter the radius";
    cin>>r;
    float c= 2*3.14*r;
    float a = 3.14*r*r;
     
     if(a>c)  cout<<"area > circumfer";
     if(a<c)  cout<<"area < circumference";
    if(a=c)   cout<<"area = circumference";
}