#include "std_lib_facilities.h"

int main()
{
    double a = 0;
    cin >> a;
    cout << "a = " << a << "\n";
    double max = a;
    double min = a;
    
    while(cin >> a)
    {
        if(a > max)
            {
            cout << "a = " << a << " the largest so far\n";
            max = a;
            }
        else if(a < min)
            {
            cout << "a = " << a << " the smallest so far\n";
            min = a;
            }
        else
            cout << "a = " << a << "\n";
        
    }
}