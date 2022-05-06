#include "std_lib_facilities.h"
constexpr double cm_to_m = 0.01;
constexpr double in_to_m = 2.54 * cm_to_m;
constexpr double ft_to_m = 12.0 * in_to_m;
const vector<string> legal_units = {"cm", "m", "in", "ft"};
bool legal(string unit)
{
    bool legal = false;
    for (string legal_unit : legal_units)
    {
        if (unit == legal_unit)
        {
            legal = true;
        }
    }
    return legal;
}
double convert(double input, string unit)
{
    if ("cm" == unit) 
        return input * cm_to_m;
    else if ("in" == unit) 
        return input * in_to_m;
    else if ("ft" == unit) 
        return input * ft_to_m;
    else 
        return input;

}
int main ()
{
    double a = 0.0, min = 0.0, max = 0.0, meterval = 0.0, sum = 0.0;
    int count = 0;
    bool first = true;
    string unit = " ";
    vector<double> values;
    
    while (cin >> a >> unit)
    {

        if(legal(unit))
        {
            meterval = convert(a, unit);
            cout << a << unit;
            if (unit != "m")
            {
                cout << " is (" << meterval << "m)";
            }

            if (first == true)
            {
                first = false;
                min = meterval;
                max = meterval;
            
            cout << " and first value entered\n";
            }
    
        else if (meterval > max)
            {
            cout << " and largest so far\n";
            max = meterval;
            }

        else if (meterval < min)
            {
            cout << " and smallest so far\n";
            min = meterval;
            }
        else
            cout << '\n';

        
        sum += meterval;
        values.push_back(meterval);
        ++count;

        }

        else 
            cout << "Error: illegal unit\n";
        

    } 

    cout << "The smallest: " << min << "m\n"
         << "The largest: " << max << "m\n"
         << "Number of values: " << count << '\n'
         << "Sum of values: " << sum << "m\n";
    
    sort(values);

    for (double value : values)
        cout << value << " ";

    cout << '\n';
     return 0;
}
