#include <iostream>

typedef std::string text_t;
using number_t = int;
using std::cin;
using std::cout;

long factorial(int num){
    if (num == 0)
    {
        return 1;
    }
    else {
        return num* factorial(num-1);
    }
    
}



int main()
{
    text_t greet = "\nHello ";
    int n;
    text_t name;
    cout << "Hello mom" << '\n';
    cout << "Hello mom";
    cout << greet;
    number_t x = 0;
    cout << x;
    cout << '\n'
         << "Enter your name :";
    cin >> name;
    cout << greet << name << '\n';

    cout << "Enter a number to find its factorial ";
    cin >> n;
    cout << "\nThe factorial of " << n << "is " << factorial(n);
    
    return 0;
}

