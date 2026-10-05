#include <iostream>

int main () {
    
    int T;
    std::cin >> T;
    
    while ( T-- ) {
        
        int X, Y;
        std::cin >> X >> Y;
        
        std::cout << ((4 * X) + Y) << "\n";
        
    }
    
    return 0;
}
