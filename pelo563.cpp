#include <bits/stdc++.h>
// using namespace std;

int main() {
	// your code goes here
    
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    
    int T;
    std::cin >> T;
    
    int pps = 50 * (1 - (0.2 + 0.2 + 0.3));
    
    while ( T-- ) {
        
        int n;
        std::cin >> n;
        
        std::cout << (n * pps) << "\n";
        
    }
    
    return 0;
}
