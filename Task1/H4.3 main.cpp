//Task1.H4.3
#include <iostream>

using namespace std;

int main()
{   //solution1
    //int odd1,odd2,odd3,odd4;
    //int even1,even2,even3,even4;

    //cin>>odd1>>even1;
    //cin>>odd2>>even2;
    //cin>>odd3>>even3;
    //cin>>odd4>>even4;

    //int evenSum = even1+even2+even3+even4;
    //int oddSum = odd1+odd2+odd3+odd4;
    //cout<<evenSum<<" "<<oddSum <<endl;

    //solution2
    int array[8];
    int evenSum=0;
    int oddSum =0;
    cin>>array[i];
    cout<<endl;
    for(i=0;i<8;i++)
    {
        if((i+1)%2 == 0)
        {
            evenSum += array[i];
        }
        else{
            oddSum += array[i];
        }
    }
    cout<< evenSum <<" "<< oddSum<<endl;
    return 0;
}
