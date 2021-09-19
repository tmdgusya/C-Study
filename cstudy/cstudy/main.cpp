#include <iostream> //cout, cin, endl, ...
#include <bitset>

using namespace std;

int main(int argc, const char * argv[]) {
    using namespace std;
    
    void *my_void;
    
    int i = 123;
    
    my_void = (void*)&i;
    
    cout << my_void << endl;
    
    return 0;
}

