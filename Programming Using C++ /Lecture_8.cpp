#include<iostream>
using namespace std;

int main(){

    int a[9];
    int i;

    cout<<"Give the 10 integers as an input : "<<endl;
    for(i=0;i<10;i++)
    {
        cin>>a[i];
    }

    cout<<"The 10 given input are : "<<endl;
    for(i=9;i>=0;i--)
    {
        cout<<a[i]<<" ";
    }

    return 0;
}