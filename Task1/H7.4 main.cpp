//Task1.H7.4
#include <iostream>

using namespace std;

int main()
{
    int x, num ;
    cin>> x ;
    int lessOrEqual= 0 ;
    int Greater =0;
    for (int i=1; i<5 ;i++)
    {
        cin >> num;
        if (num<=x)
        {
            lessOrEqual++;
        }else{
        Greater++;
        }

    }
    cout<<lessOrEqual<<" "<< Greater<< endl;


    return 0;
}
