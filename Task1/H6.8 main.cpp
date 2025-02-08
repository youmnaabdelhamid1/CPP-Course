//Task1.H6.8
#include <iostream>

using namespace std;

int main()
{
    int num,years , months ,days ;
    cin>> num;
    int remaining_days ;

    years = num / 360 ;
    remaining_days = num % 360;
    months = remaining_days / 30;
    days = remaining_days % 30 ;

    cout <<years<<" " << months <<" "<< days <<endl;
    return 0;
}
