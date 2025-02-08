//Task1.H7.7
#include <iostream>

using namespace std;

int main()
{
    int x , s1 ,e1 , s2 ,e2 , s3 , e3;
    cin>> x >> s1 >> e1 >> s2 >> e2 >> s3 >> e3 ;
    int Count =0;
     if( s1<= x && x<= e1) Count++;
     if( s2<= x && x<= e2) Count++;
     if( s3<= x && x<= e3) Count++;

     cout<< Count <<endl;
    return 0;
}
