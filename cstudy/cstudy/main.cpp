#include <iostream> //cout, cin, endl, ...
#include <cstdio> // prinf

using namespace std;

//function foward declartion
int add(int a, int b);
int multiply(int a, int b);

int main(int argc, const char * argv[]) {
    cout << add(1, 2) << endl;
    return 0;
}

int add(int a, int b) {
    return a + b;
}

int multiply(int a, int b) {
    return a * b;
}
