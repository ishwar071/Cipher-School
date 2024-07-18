#include<iostream>
using namespace std;

int main () 
{
    int i;
    int input;
    
    i=100;
    for(i=1;i<101;i++)
    {
        cout << "Guess the number (between 1 and 100): ";
        cin>>input;
        if(input == 65)
        {
            cout<<"Congrats you have guessed correct. ";
            break;

        }
        else {
            cout<<"Wrong guess, Try again... "<<endl;
        }

    }
    return 0;

}