#include<iostream>
using namespace std;
int main(){
    int arr[] = {1,2,3,4,5,6,7,8,9,12,13,15,16,17,17 };
    int n= sizeof(arr)/ (sizeof(arr[6])+sizeof(arr[3]));
    cout<<n<<" ";
}