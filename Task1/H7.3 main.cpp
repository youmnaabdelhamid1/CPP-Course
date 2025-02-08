//Task1.H7.3
#include <iostream>

using namespace std;

int main()
{
    int a, b, c;
    cin >> a >> b >> c;

    int maxNum = -1;

    if (a < 100 && a > maxNum)
        maxNum = a;
    if (b < 100 && b > maxNum)
        maxNum = b;
    if (c < 100 && c > maxNum)
        maxNum = c;

    cout << maxNum << endl;

    return 0;
}
