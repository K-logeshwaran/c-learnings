#include <iostream>

using namespace std;



int main() {
    
    string names[] = {"loki","dham","ramand","bhu","bum"};

    

    for (auto &&i : names)
    {   
        names->append(" poda venna");
        cout << i << "\n";
        //cout << names->length();
    }
    

    return 0;
}

