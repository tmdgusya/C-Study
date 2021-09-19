#include <iostream> //cout, cin, endl, ...
#include <bitset>

using namespace std;

int main(int argc, const char * argv[]) {
    using namespace std;

    int i = -1;
    char a = 'H';
    
    cout << (uintptr_t)static_cast<void *>(&a) << endl;
    cout << (uintptr_t)static_cast<void *>(&i) << endl;
    
    return 0;
}

