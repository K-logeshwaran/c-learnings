#include <iostream>

using std::cin;
using std::cout;

// cel to other

double CelToKelvin(double c)
{
    return c + 273.15;
}
double CelToFahrenheit(double c)
{
    return ((9 / (double)5) * c) + 32;
}
//(32°F − 32) × 5/9 = 0°C

double Fahrenheit_to_cel(double f)
{
    return (32 * f - 32) * 5 / 9;
}

double kelvinToCle(double k)
{
    return k - 273.15;
}

int main()
{
    char from, to;
    double value;
    cout << "\n \t c,k,f";
    cout << "from :";
    cin >> from;
    cout << "to :";
    cin >> to;
    cout << "value :";
    cin >> value;
    if (from == 'k' && to == 'c')
    {
        cout << kelvinToCle(value);
    }
    else if (from == 'c' && to == 'k')
    {
        cout << CelToKelvin(value);
    }
    return 0;
}

