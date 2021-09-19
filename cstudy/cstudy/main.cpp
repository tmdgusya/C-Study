#include <iostream> //cout, cin, endl, ...
#include <cstdio> // prinf
#include "add.hpp"

using namespace std;

//function foward declartion
int multiply(int a, int b);

int main(int argc, const char * argv[]) {
    cout << add(1, 2) << endl;
    return 0;
}

int multiply(int a, int b) {
    return a * b;
}
