#include <iostream>
using namespace std;
int main()
{
    int n ;
    cin >> n;

    int even_sum =0, odd_sum =0;
    int even_count =0, odd_count =0;
    cout<< endl;

    for(int i =1; i <=n; i++)
    {
        int num;
        cin>> num;
        if(i%2 == 0)
        {
            even_sum += num;
            even_count++;
        }
        else if(i%2 != 0)
        {
            odd_sum += num;
            odd_count++;
        }

    }
    int odd_avg , even_avg;
    if (odd_count > 0)
    {
        odd_avg = odd_sum / odd_count;
    }
    else {cout<< "0";}
    if (even_count >0)
    {
        even_avg = even_sum / even_count;
    }else {cout<< "0";}

    cout<< odd_avg << " "<< even_avg;
    return 0;
}
