#include <iostream>

int main () {
    
    int T = 0;
    std::cin >> T;
    
    while ( T-- ) {
        
        int X = 0;
        std::cin >> X;
        
        if ((10 - X) >= 3) {
            std::cout << "YES\n";
        } else {
            std::cout << "NO\n";
        }
        
    }
    
    return 0;
}
