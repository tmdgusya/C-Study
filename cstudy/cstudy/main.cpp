#include <iostream> //cout, cin, endl, ...
#include <bitset>

using namespace std;

int main(int argc, const char * argv[]) {
    using namespace std;

    bool bValue = false;
    float fValue = 3.141592f;
    
    auto aValue = 3.141592; // auto type
    
    cout << (bValue ? 1 : 0) << endl;
    cout << fValue << endl;
    cout << aValue << endl;
    
    int a(123); // direct initialization
    int b{123}; // uniform initialization
    
    cout << sizeof(aValue) << endl; // 8byte
    cout << a << endl;
    cout << b << endl;
    
    return 0;
}

