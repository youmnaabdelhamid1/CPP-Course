//Task1.H2.2
// هرم من *
#include <iostream>

using namespace std;

int main()
{
    int rows;
    cout<<"Enter number of rows: "<<endl;
    cin>> rows;
    for(int i =1; i<=rows ; i++)
    {
        //spaces
        for(int j =1; j<=rows - i;j++)
        {
            cout<<" ";
        }
        //stars
        for(int c =1; c<=(2*i-1);c++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}
