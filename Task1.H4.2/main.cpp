//Task1.H4.2
#include <iostream>
using namespace std;

int main()
{
    string name1, name2;
    int id1,id2;
    double grade1,grade2;
    double average;
    cout<<"What is student 1 name: ";
    cin>>name1;
    cout<<endl;
    cout<<"His id: ";
    cin>> id1;
    cout<<endl;
    cout<<"His math exam grade: ";
    cin>>grade1;
    cout<<endl;

    cout<<"What is student 2 name: ";
    cin>>name2;
    cout<<endl;
    cout<<"His id: ";
    cin>> id2;
    cout<<endl;
    cout<<"His math exam grade: ";
    cin>>grade2;
    cout<<endl;

    cout<<"Students grades in math "<<endl;
    cout<< name1 <<"(with id "<< id1<<")"<< "got grade: "<<grade1<<endl;
    cout<< name2 <<"(with id "<< id2<<")"<< "got grade: "<<grade2<<endl;
    cout<<"Average grade is "<< (grade1 + grade2)/2 <<endl;
    return 0;
}
