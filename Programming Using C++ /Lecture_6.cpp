#include<iostream>
using namespace std;
int main()
{
    int Marks ;
    cout<<"Dear Student, Please enter the marks to calculate the grade : ";
    cin>>Marks;
    
    if(Marks > 90 ){
        cout<<"A";
    }
    else if (Marks > 80){
        cout<<"B";
    }
    else if (Marks > 70){
        cout<<"C";
    }
    else{
        cout<<"Pass";
    }

return 0;

}