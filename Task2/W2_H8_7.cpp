#include <iostream>

using namespace std;

int main()
{
    int n ;
    cout<< "Enter num between 1 and 200: ";
    cin>> n ;
    cout<< endl;
    if (n < 1 || n >200)
    {
        cout<<"choose num between 1 and 200 " <<endl;
        return 1;
    }
    for(int i =0 ; i<= n ; i++)
    {
        if (i % 8 ==0 || (i%4 == 0 && i%3 ==0) )
        {
            cout<< i <<" ";
        }

    }

    return 0;
}
