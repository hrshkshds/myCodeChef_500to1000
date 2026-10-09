#include <bits/stdc++.h>
// using namespace std;

int main() {
	// your code goes here

    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    
    int T;
    std::cin >> T;
    
    while ( T-- ) {
        
        int n, x, y;
        std::cin >> n >> x >> y;
        
        if ( n*x >= y && y%x == 0 ) {
            std::cout << "YES\n";
        } else {
            std::cout << "NO\n";
        }
        
    }
    
    return 0;
}
