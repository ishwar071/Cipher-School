#include <iostream>
using namespace std;

int main() 
{
    int password;
    
    do {
        cout<<"Enter the password: ";
        cin>>password;
    }
    while(password<99);
    {
        cout<<"Your password meets the required condition. ";
    }
    return 0;
}