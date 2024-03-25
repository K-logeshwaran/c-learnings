#include <iostream>

using namespace std;

#define LOG(x) std::cout << x << std::endl;
#define INPUT(x) std::cin >> x;
void factorial(int &a, int &b);

int main()
{
    int fact = 1, loki;
    LOG("Enter a number");
    INPUT(loki);

    factorial(loki, fact);

    LOG("Factorial of " << loki << " is " << fact);
    // reference
    int a = 34;

    // here allias is an allisa to the variable a
    int &allias = a;
    int *ptr = &a;
    LOG("Actuall value");
    LOG(a);
    LOG("allias");
    LOG(allias);
    LOG("pointer");
    LOG(ptr);
    allias = 89;
    LOG("Actuall value");
    LOG(a);
    LOG("allias");
    LOG(allias);
    LOG("pointer");
    LOG(ptr);
    return 0;
}

// it takes refference so no return required
//  i mean allias
void factorial(int &a, int &fact)
{
    LOG(a);
    for (int i = 1; i <= a; i++)
    {
        fact *= i;
    }
}