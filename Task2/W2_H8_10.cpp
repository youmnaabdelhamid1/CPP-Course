#include <iostream>

using namespace std;

int main()
{
    int n ;
    cin>> n;
    cout<< endl;
    int revs = 0;
    int tmp = n;

    while (tmp > 0)
    {
        int digit = tmp %10;
        revs = revs *10 +digit;
        tmp /= 10;
    }
    cout << revs <<" " << revs*3 << endl;

    return 0;
}
