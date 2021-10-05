#include "std_lib_facilities.h"

int main()
{
    const double m_to_cm = 100;
    const double in_to_cm = 2.54;
    const double ft_to_in = 12;
    
    double a = 0;
    string unit;
    double a_meter = 0;
    cin >> a >> unit;
    
    if(unit == "cm")
        a_meter = a/m_to_cm;
    else if(unit == "m")
        a_meter = a;
    else if(unit == "in")
        a_meter = (a*in_to_cm)/m_to_cm;
    else if(unit == "ft")
        a_meter = (a*ft_to_in*in_to_cm)/m_to_cm;
    else
        {
        cout << "Please use cm, m, in or ft";
        return 0;
        }
    
    cout << "a = " << a << " " << unit<< "\n";
    double max = a;
    string max_unit = unit;
    double max_meter = a_meter;
    double min = a;
    string min_unit = unit;
    double min_meter = a_meter;
    double sum_of_values = a_meter;
    double number_of_values = 1;
    vector<double> v;
    v.push_back(a_meter);
    
    cout << "Smallest : " << min << " " << min_unit << ", "
            << "Largest : " << max << " " << max_unit << ", "
            << "Number of values : " << number_of_values << ", "
            << "Sum of values : " << sum_of_values << " m \n";
    for (int i = 0; i < v.size(); ++i)
            cout << v[i] << "\n";
    
    while(cin >> a >> unit)
    {
        
        if(unit == "cm")
            a_meter = a/m_to_cm;
        else if(unit == "m")
            a_meter = a;
        else if(unit == "in")
            a_meter = (a*in_to_cm)/m_to_cm;
        else if(unit == "ft")
            a_meter = (a*ft_to_in*in_to_cm)/m_to_cm;
        else
            {
            cout << "Please use cm, m, in or ft";
            return 0;
            }
        
        cout << "a = " << a << " " << unit<< "\n";
        
        if(a_meter > max_meter)
            {
            max_meter = a_meter;
            max = a;
            max_unit = unit;
            }
        else if(a_meter < min_meter)
            {  
            min_meter = a_meter;
            min = a;
            min_unit = unit;
            }
        
        sum_of_values = sum_of_values + a_meter;
        ++number_of_values;
        v.push_back(a_meter);
        
        cout << "Smallest : " << min << " " << min_unit << ", "
            << "Largest : " << max << " " << max_unit << ", "
            << "Number of values : " << number_of_values << ", "
            << "Sum of values : " << sum_of_values << " m \n";
        sort(v);
        for (int i = 0; i < v.size(); ++i)
            cout << v[i] << ", ";
        cout << "\n";
    }
}