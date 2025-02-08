//Task1.H7.7
#include <iostream>

using namespace std;

int main()
{
    int a1,b1,a2,b2;
    cout<<"Enter the intervals (a1 b1 a2 b2): "<<endl;
    cin>> a1 >> b1>> a2 >> b2;

    int Start ,End;
     if(a1 >= a2)
     {
         Start = a1;
     }else
     {
        Start = a2;
     }

     if(b1 <= b2)
     {
         End= b1;
     }else
     {
         End= b2;
     }

     if(Start <= End )
     {
         cout << Start <<" " << End <<endl;
     }else {cout<< -1 <<endl;}
    return 0;
}
