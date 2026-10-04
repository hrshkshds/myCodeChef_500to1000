#include <iostream>

int main () {
    
    int T = 0;
    std::cin >> T;
    
    while ( T-- ) {
        
        int x, y, z;
        std::cin >> x >> y >> z;
        
        if ( (2 * z) > (x * y) ) {
            std::cout << "YES\n";
        } else {
            std::cout << "NO\n";
        }
        
    }
    
    return 0;
}
