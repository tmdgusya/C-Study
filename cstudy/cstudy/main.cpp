#include <iostream> //cout, cin, endl, ...
#include <cstdio> // prinf
#include "add.hpp"

using namespace std;

namespace MySpace1 {
    int doSomething(int a, int b) {
        return a + b;
    }
}

int doSomething(int a, int b) {
    return a * b;
}

int main(int argc, const char * argv[]) {
    cout << doSomething(3, 4) << endl;
    cout << MySpace1::doSomething(3, 4) << endl;
    return 0;
}

