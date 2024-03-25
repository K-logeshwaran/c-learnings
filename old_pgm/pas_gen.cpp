#include <iostream>
#include <windows.h> // for Windows only

using namespace std;

#define LOG(x) std::cout << x << std::endl;
#define INPUT(x) std::cin >> x;
#define printWithClr(hConsole, clr, val)    \
    SetConsoleTextAttribute(hConsole, clr); \
    std::cout << val << std::endl;
#define toDefault(hConsole) SetConsoleTextAttribute(hConsole, 7);

class pas_gen
{

private:
    int random_int(int max)
    {

        int random_num = rand() % (max - 0 + 1); // generate random number between min and max
        return random_num;
    }
    string chars = "qwertyuiopasdfghjklzxcvbnm";
    string caps = "QWERTYUIOPASDFGHJKLZXCVBNM";
    string nums = "0987654321";
    string specials = "?/';{}[]=+!@#$%^&*()";
    int passwordStrength = BASE_PASS_STRENGTH;
    int passwordLength = 10;

    string generateBasePassword()
    {
        string password = "";

        for (int i = 0; i <= passwordLength / 3; i++)
        {

            password += chars.at(random_int(chars.length() - 1));
            password += caps.at(random_int(caps.length() - 1));
            password += nums.at(random_int(nums.length() - 1));
        }
        return password;
    }
    string generateMINPassword()
    {
        string password = "";

        for (int i = 0; i < passwordLength / 2; i++)
        {
            password += chars.at(random_int(chars.length() - 1));
            password += caps.at(random_int(caps.length() - 1));
        }
        return password;
    }

    string generateMaxPassword()
    {
        string password = "";

        for (int i = 0; i <= passwordLength / 4; i++)
        {

            password += chars.at(random_int(chars.length() - 1));
            password += caps.at(random_int(caps.length() - 1));
            password += nums.at(random_int(nums.length() - 1));
            password += specials.at(random_int(specials.length() - 1));
        }
        return password;
    }

public:
    pas_gen()
    {
        srand(time(NULL));
        // initialize random seed based on current time
    }

    static const int BASE_PASS_STRENGTH = 2;
    static const int MIN_PASS_STRENGTH = 1;
    static const int MAX_PASS_STRENGTH = 3;

    string generatePassword(int &passwordStrengthLevel)
    {
        if (passwordStrengthLevel == BASE_PASS_STRENGTH)
        {

            return generateBasePassword();
        }
        else if (passwordStrengthLevel == MIN_PASS_STRENGTH)
        {
            return generateMINPassword();
        }
        else if (passwordStrengthLevel == MAX_PASS_STRENGTH)
        {
            return generateMaxPassword();
        }
        else
        {
            return "Only 3 strength levels";
        }
    }
};

int main()
{
    int strength, c;
    pas_gen p;
    system("CLS");
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    toDefault(hConsole)
        printWithClr(hConsole, 5, "\n\n\t____________________ RANDOM PASSWORD GENERATOR APP ____________________")
            toDefault(hConsole)
                printWithClr(hConsole, 9, "\n\tEnter either  1,2 or 3 (strength level) \n \t\t 1 -> weak password\n\t\t 2 -> Strong password\n\t\t 3 -> Very Strong password\n")
                    toDefault(hConsole)
                        printWithClr(hConsole, 5, "Enter Password strength level (1,2,3):")
                            INPUT(strength)
                                printWithClr(hConsole, 9, "Password is " << p.generatePassword(strength))
                                    toDefault(hConsole)
                                        INPUT(c)
}
