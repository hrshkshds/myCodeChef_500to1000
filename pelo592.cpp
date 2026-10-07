#include <bits/stdc++.h>
// using namespace std;

// double valuation (int a, int b) {
    
//     double v = (a * 100.0) / b;
    
//     return v;
// }

int main() {
	// your code goes here
    
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    
    int T;
    std::cin >> T;
    
    while ( T-- ) {
        
        int a, b;
        std::cin >> a >> b;
        
        // a = valuation(a, 10);
        // b = valuation(b, 20);
        
        if ( 2 * a > b ) {
            std::cout << "FIRST\n";
        } else if ( 2 * a < b ) {
            std::cout << "SECOND\n";
        } else {
            std::cout << "ANY\n";
        }
        
    }
    
    return 0;
}
