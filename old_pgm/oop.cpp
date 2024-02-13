#include <iostream>

using namespace std;

#define LOG(x) std::cout << x << std::endl;
#define INPUT(x) std::cin >> x;

class Log
{
public:
    const  int MAX_WARNING = 3;
    const  int MIN_WARNING = 0;
    const  int NORM_WARNING = 2;

private:
    int m_WarningLevel = NORM_WARNING;

public:
    void Warn(char *c)
    {
    }
    void SetWarningLevel(int warningLevel)
    {
        m_WarningLevel = warningLevel;
    }
};

int main()
{
    // Code goes here
    Log logger;
    logger.SetWarningLevel(logger.NORM_WARNING);
    char msg[] = "Bye Bro";
    logger.Warn(msg);
    return 0;
}