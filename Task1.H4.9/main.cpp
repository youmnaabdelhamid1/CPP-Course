//Task1.H4.9
#include <iostream>

using namespace std;

int main()
{
    int n;
    int sum =0;
    cout << "Enter n: "<<endl;
    cin>> n;
    for(int i=1;i<=n;i++)
    {
        sum += i;
    }
    cout<<sum<<endl;
    return 0;
}
