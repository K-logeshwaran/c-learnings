#include <iostream>
#include <ctime>
#include <cmath>
using namespace std;

int random_int(int min, int max) {
    srand(time(NULL)); // initialize random seed based on current time
    int random_num = rand() % (max - min + 1) + min; // generate random number between min and max
    return random_num;
}

double dist(int pos1,int pos2){
    int d = sqrt(pow((pos1-pos2),2));
    //cout<< "d is "<<d << "\n";
    return (100-d);
}

int main() {
    cout << "******* Number gussessing game *********";
    cout << "\nGuess a number between 1-100\n";
    int randNum = random_int(1,100),user_guess;
    int tries =  5;

    while (tries >0)
    {
        cout<< "\nChances left -> " << tries << '\n';
        cout << "\nEnter utr guess "     ;
        cin >> user_guess;
        cout << "\t " << dist(randNum,user_guess) << " percent close";

        if(user_guess>randNum){
            cout << "\nToo High";
        }
        else if(user_guess<randNum){
             cout << "\nToo low";
        }
        else{
            cout << "\nYou  guessed correctly the number is " << randNum;
            break;
        }

        tries-=1;
    }

    if(tries <=0){
        cout << "\nThe number is " << randNum << "\n You can't guess, go eat your poop\n";

    }
    int cpp;
    cin >>cpp;
    return 0;
}