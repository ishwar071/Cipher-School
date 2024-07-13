#include<iostream>
using namespace std;
int main()
{

    int a,b;
    int c,d;
    cout<<"Input 4 integer a,b,c and d"<<endl;
    
    cin>>a;
    cin>>b;
    cin>>c;
    cin>>d;
    
    //Statement : a>b

    cout<<(a>b && c>d);
    
    // c++ interprets true as 1
    // c++ interprets false as 0


    return 0;

}