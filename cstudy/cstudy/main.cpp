#include <iostream> //cout, cin, endl, ...
#include <limits.h>

using namespace std;

int main(int argc, const char * argv[]) {
    using namespace std;
    
    double d1(100 - 99.99);
    double d2(10 - 9.99);
    
    const double epsilon = 1e-10;
    
    if(std::abs(d1 - d2) < epsilon) {
        cout << "Approximately equal" << endl;
    }
    
    cout << std::abs(d1 - d2) << endl;
    
    return 0;
}

