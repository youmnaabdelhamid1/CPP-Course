#include <iostream>
using namespace std;
int main()
{
    int n ;
    cout<< "Enter num between 1 and 30: ";
    cin>> n ;
    cout<< endl;
    if (n < 1 || n >30)
    {
        cout<<"choose num between 1 and 30 " <<endl;
        return 1;
    }
    int count =0;
    int i= 1;
    while(count < n)
    {
        if (i%3 == 0 && i%4 != 0 )
        {
            cout<< i <<" ";
            count++;
        }i++;
    }
    return 0;
}
