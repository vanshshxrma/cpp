#include<iostream>
using namespace std;
int main()
{
    int age;
    cout<<"enter your age"<<endl;
    cin>>age; 

    if(age>150)
    {
        cout<<"invalid age";

    } 
    else if (age>=18){
        cout<<"ypu can vote";

    }
    else
    {
        cout<<"you cannot vote";

    }
    



    return 0;
}