#include <iostream>

using namespace std;

int main()
{
    int num;
    string symbol;
    cin>> num >> symbol;
    string result;
    for(int i= num; i>0; i--)
    {
        result += symbol;
        cout<< result << endl;
    }
    return 0;
}
