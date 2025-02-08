//Task1.H4.1
#include <iostream>

using namespace std;

int main()
{
    int a,b;
    //cout << "Enter two numbers: " << endl;
    cin >> a >> b ;
    cout << a << " + " << b << " = " << a + b << endl;
    cout << a << " - " << b << " = " << a - b << endl;
    cout << a << " * " << b << " = " << a * b << endl;

    if(b!=0)
    {
       cout << a << " / " << b << " = " << a / b << endl;
    }else
    {
         cout<<"Cannot divide by zero "<<endl;
    }

    return 0;
}
