//Task1.H2.4
#include <iostream>

using namespace std;

int main()
{
    int n = 4;
    for(int i =1 ; i<=n ;i++)
    {
        int num =i;
        for(int j =1; j<=(2*i-1); j++)
        {
            cout<< num <<" ";
            if(j<1)
            {
                num++;
            }else{
            num--;
            }
        }
        cout<< endl;
    }
    return 0;
}
