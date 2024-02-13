#include <iostream>
#include <vector>

#define LOG(x) std::cout << x << std::endl;
#define INPUT(x) std::cin >> x;
using std::vector;

class EvalExp
{
private:
    /* data */
    vector<int> nums;
    vector<std::string> operations;
public:
    std::string expression;
    
    EvalExp(std::string &);
    void eval()

    {
        
        for (int i = 0; i < expression.length() - 1; i++)
        {
            if (&expression.at(i) == "+")
            {
                LOG("found");
                operations.push_back("add");
            }
            else if (&expression.at(i) == "-")
            {
                operations.push_back("sub");
            }
            else
            {
                nums.push_back(static_cast<int>(expression.at(i)));

            }
        }
        for (auto &&t : nums)
        {
            LOG("TTTTTTTTTTTTTTTTTTTTTt");
            LOG(t);
        }
        for (auto &&j : operations)
        {
            LOG("JJJJJJJJJJJJJJJJ");
            LOG(j);
        }
        
        
    }

    
    

};

EvalExp::EvalExp(std::string &exp)
{
    expression = exp;
}

int mult(int &a, int &b)
{
    return (a * b);
}
int add(int &a, int &b)
{
    return (a + b);
}
int sub(int &a, int &b)
{
    return (a - b);
}
int div(int &a, int &b)
{
    return (a / b);
}

int main()
{
    system("CLS");
    LOG("Enter an expression: ");
    std::string myex ;
    INPUT(myex);
    EvalExp e {myex};
    e.eval();
    std::cin.get();
}