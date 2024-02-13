#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <limits>

class PasswordGenerator
{
private:
    const std::vector<std::string> strengthOptions = { "Weak", "Strong", "Very Strong" };
    const std::vector<std::string> charSets = { "qwertyuiopasdfghjklzxcvbnm", 
                                                "QWERTYUIOPASDFGHJKLZXCVBNM", 
                                                "1234567890", 
                                                "?/';{}[]=+!@#$%^&*()" };

    std::string generatePassword(int strength)
    {
        int numCharSets = strength + 2; // use more character sets for stronger passwords
        std::string password;
        for (int i = 0; i < 10; ++i) // generate 10 characters for the password
        {
            int charSetIndex = i % numCharSets;
            const std::string& charSet = charSets[charSetIndex];
            int charIndex = rand() % charSet.size();
            password += charSet[charIndex];
        }
        return password;
    }

public:
    void run()
    {
        std::cout << "Welcome to the password generator!\n";

        while (true)
        {
            std::cout << "\nSelect password strength:\n";
            for (int i = 0; i < strengthOptions.size(); ++i)
            {
                std::cout << i+1 << ". " << strengthOptions[i] << "\n";
            }

            int selection;
            std::cin >> selection;
            if (std::cin.fail() || selection < 1 || selection > strengthOptions.size())
            {
                std::cout << "Invalid input. Please enter a number between 1 and " << strengthOptions.size() << ".\n";
                std::cin.clear();
                std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
                continue;
            }

            std::string password = generatePassword(selection);
            std::cout << "\nYour generated password is: " << password << "\n";
            std::cout << "Press Enter to generate another password, or type 'q' to quit.\n";
            std::string input;
            std::getline(std::cin, input);
            if (input == "q")
            {
                break;
            }
        }

        std::cout << "Thanks for using the password generator!\n";
    }
};

int main()
{   
    std::cout <<"Hello\n";
    PasswordGenerator generator;
    generator.run();
    return 0;
}
