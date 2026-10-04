#include <iostream>

int main () {
    
    int T = 0;
    std::cin >> T;
    
    while ( T-- ) {
        
        int N = 0, X = 0;
        std::cin >> N >> X;
        
        int n = (((N % 6) == 0) ? (N / 6) : ((N / 6) + 1)) * X;
        
        std::cout << n << "\n";
        
    }
    
    return 0;
}
