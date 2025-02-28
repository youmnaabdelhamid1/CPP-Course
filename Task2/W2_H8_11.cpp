#include <iostream>

using namespace std;

int main()
{
    int t;
    cin>> t;
    while(t--)
    {
        int n;
        cin>> n;
        int min_val ;
        cin>> min_val;

        for(int i =1 ; i<n; i++)
        {
            int num;
            cin>> num ;
            if (num < min_val)
            {
                min_val= num;
            }
        }
        cout<< min_val << endl;
    }
    return 0;
}
