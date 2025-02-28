#include <iostream>

using namespace std;

int main()
{
    int num;
    string symbol;
    cin>> num >> symbol;
    string result;
    for(int i= 0; i<num; i++)
    {
        result += symbol;
        cout<< result << endl;
    }
    return 0;
}
