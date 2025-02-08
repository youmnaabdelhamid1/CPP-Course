//Task1.H6.4
#include <iostream>

using namespace std;

int main()
{
    int num;
    cin>> num;
    int digit4 =0;
    for(int i = 0;i<4; i++)
    {
        if(num==0){
            digit4= 0;
            break;
        }
        digit4 = num % 10;
        num /= 10;
    }
    cout<<digit4<<endl;
    return 0;
}
