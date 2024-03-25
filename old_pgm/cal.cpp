#include <iostream>

using std::cin;
using std::cout;

enum Choice
{
  add = 1,
  sub = 2
};

double calc(int a, int b, std::string o){
    if(o=="add"){
        return a+b;
    }
    else if(o=="sub"){
        return a-b;
    }
    else if(o=="mul"){
        return a*b;
    }
    else if(o=="div"){
        return a/ (double)b;
    }
    else if(o=="mod"){
        return a%b;
    }
   
}

int main(){
    double a,b,c;
    std::string operation;
    cout << "\n \ttype mul for * , add of + , sub for - , div for /, mod for %\n";
    cin >> operation;
    cout << "Enter num one";
    cin >> a ;
    cout << "Enter num two";
    cin >> b ;

    cout << a << operation << b << "is " << calc(a,b,operation);
    return 0;
}