#include <iostream> //cout, cin, endl, ...
#include <cstdio> // prinf

using namespace std;

int main(int argc, const char * argv[]) {

    int x = 0;
    
    {
        int x = 1; // another block
    }
    
    {
        int y = 2; // another block
    }
    
    cout << x << endl;
    
}
