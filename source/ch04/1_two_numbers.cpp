#include "std_lib_facilities.h"

int main()
{
    double a = 0;
    double b = 0;
    
    while(cin >> a >> b)
    {
        cout << "a = " << a << " b = " << b << "\n";
        if (a > b)
            cout << "the smaller value is : " << b << "\n"
                << "the larger value is: " << a << "\n";
        else if (b > a)
            cout << "the smaller value is : " << a << "\n"
                << "the larger value is: " << b << "\n";
        if (a == b)
            cout << "the numbers are equal\n";
        else if (abs(a - b) < 0.01)
            cout << "the numbers are almost equal\n";
        
    }
}