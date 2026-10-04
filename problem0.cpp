#include <iostream>

int main () {
    
    int T = 0;
    std::cin >> T;
    
    while (T--) {
        
        int A, B, C;
        std::cin >> A >> B >> C;
        
        if ( (A + B) > (2 * C) ) {
            std::cout << "YES\n";
        } else {
            std::cout << "NO\n";
        }
    }
    
    return 0;
}
