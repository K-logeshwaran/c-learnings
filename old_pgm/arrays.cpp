#include <iostream>

using namespace std;



int main() {
    
    string names[] = {"loki","dham","ramand","bhu","bum"};

    

    for (auto &&i : names)
    {   
        names->append(" poda venna");
        cout << i << "\n";
    }
    
    for (int i = 0; i < 5; i++)
    {
        printf("\n%d\n",i*2);
    }
    
    return 0;
}

