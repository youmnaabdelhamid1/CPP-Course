//Task1.H2.3
// مثلث قائم
#include <iostream>

using namespace std;

int main()
{
    int n =5;
    for(int i =1; i<=n ; i++)
    {
        for(int j =1 ; j<=i ; j++)
        {
            cout<< "*";
        }
        cout<<endl;
    }

   // cout << "*" << endl;
   // cout << "**" << endl;
   // cout << "***" << endl;
   // cout << "****" << endl;
   // cout << "*****" << endl;

    return 0;
}
