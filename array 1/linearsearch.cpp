#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter size of array";
    cin>>n;
    //input
    int arr[n];
    for(int i=0;i<=n-1;i++){
        cin>>arr[i];

    }
    int x;
    cout<<"enter the element you want to search";
    cin>>x;
    //search
    for(int i=0;i<=n-1;i++){
        if(arr[i]==x) cout<<"present";
    }

}