#include <iostream> //cout, cin, endl, ...
#include <cstdio> // prinf
#include "add.hpp"

using namespace std;

#define LIKE_APPLE

int main(int argc, const char * argv[]) {
#ifdef LIKE_APPLE
    cout << "Apple" << endl;
#endif
    
#ifndef LIKE_APPLE
    cout << "Orange" << endl;
#endif
    return 0;
}

