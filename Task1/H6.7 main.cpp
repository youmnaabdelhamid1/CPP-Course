//Task1.H6.7
#include <iostream>

using namespace std;

int main()
{
    int num ;
    cin>> num;
    int even = num%2 ==0;
    int odd = 1-even ;
    int result = even*100 +odd *7 ;
    cout<< result <<endl;
    return 0;
}
