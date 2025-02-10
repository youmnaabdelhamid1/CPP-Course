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

    //another solution
    #include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter n: ";
    cin >> n;

    
    int sum = n * (n + 1) / 2;

    cout << "Sum: " << sum << endl;
    return 0;
}

    return 0;
}
