#include<iostream>
using namespace std;
int main(){
    int a;
    cout<<"enter 1st student marks";
    cin>>a;
    int b;
    cout<<"enter 2nd student marks";
    cin>>b;
    int c;
   cout<<"enter 3rd number";
   cin>>c;
   if(a<=b && a<=c) cout<<a;
   else if(b<=a && b<=c) cout<<b;
   else cout<<c;

}    