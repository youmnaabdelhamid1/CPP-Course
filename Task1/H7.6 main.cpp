//Task1.H7.6
#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>> n;

    if(n<2 || n>10)
    {
        cout<<" Invalid. n should be between 2 and 10"<<endl;

    }
    int max_val = -1000;
    for (int i =0; i<n ;i++)
    {
        int num;
        cin >> num;
        if (num> max_val)
        {
            max_val=num;
        }
    }
    cout<< endl;
    return 0;
}
