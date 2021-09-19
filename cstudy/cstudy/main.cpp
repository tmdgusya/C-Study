#include <iostream> //cout, cin, endl, ...
#include <cstdio> // prinf
#include "add.hpp"

using namespace std;

#define MAX(a,b) ((a > b) ? a : b)

int main(int argc, const char * argv[]) {
    cout << MAX(1, 2) << endl;
    return 0;
}

