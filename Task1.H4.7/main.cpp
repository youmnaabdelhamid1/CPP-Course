//Task1.H4.7
#include <iostream>

using namespace std;

int main()
{
    int a,b,c,d=-1;
    cout<<"Enter  values of a,b and c in order: "<<endl;
    cin>>a>>b>>c;
    d=a;
    a=b;
    b=c;
    c=d;
    cout<<"a= "<<a<<","<<"b= "<<b<<","<<"c= "<<c<<endl;
    return 0;
}
