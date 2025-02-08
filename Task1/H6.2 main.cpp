//Task1.H6.2
#include <iostream>

using namespace std;

int main()
{
    double num1 , num2 , num3 , num4 , num5 ;
    cin >> num1>> num2 >> num3 >> num4 >> num5 ;
    double average = (num1+num2+num3+num4+num5)/5.0 ;
    double sum = (num1+num2+num3)/(num4+num5) ;
    double first3_avg = (num1+num2+num3)/3.0;
    double last2_avg = (num4+num5)/2.0;
    double average2 = first3_avg / last2_avg;

    cout<< average <<endl;
    cout<<sum << endl;
    cout<< average2 <<endl;
    return 0;
}
