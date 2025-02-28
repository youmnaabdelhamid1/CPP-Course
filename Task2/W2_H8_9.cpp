#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n ;

    for(int i=0 ; i< n ; i++)
    {
        string str ;
        cin >> str;

        if ( str.length() == 2)
        {
            if ((str[0] == 'n' && str[1] == 'o')||
                (str[0] == 'n' && str[1] == 'O')||
                (str[0] == 'N' && str[1] == 'o')||
                (str[0] == 'N' && str[1] == 'O')||
                (str[0] == 'o' && str[1] == 'n')||
                (str[0] == 'o' && str[1] == 'N')||
                (str[0] == 'O' && str[1] == 'n')||
                (str[0] == 'O' && str[1] == 'N')
               )
               {
                   cout<< str<< " ";
               }
        }
    }
    cout<< endl;
    return 0;
}
