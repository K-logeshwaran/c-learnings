#include <iostream>
#include <cmath>
using std::cout;
using std::cin;

double hypo (double a, double b){
    return sqrt(((a*a) +(b*b)));
}

int main(){
    double a,b,c;
    cout << "Enter two side of the triangle";
    cin >> a;
    cin >> b;
    cout << "The length of hypotoneous is " << hypo(a,b) <<" units";

    return 0;
}