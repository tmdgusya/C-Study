#include <iostream> //cout, cin, endl, ...
#include <limits.h>

using namespace std;

int main(int argc, const char * argv[]) {
    using namespace std;
    
    cout << numeric_limits<float>::lowest() << endl;
    cout << numeric_limits<double>::lowest() << endl;
    cout << numeric_limits<long double>::lowest() << endl;
    
    cout << 3.14 << endl;
    cout << 31.4e-1 << endl;
    
    
    return 0;
}

