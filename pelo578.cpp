#include <bits/stdc++.h>
// #include <algorithm>
// using namespace std;

int main() {
	// your code goes here

    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    
    int T;
    std::cin >> T;
    
    while ( T-- ) {
        
        int p, q, r, s;
        std::cin >> p >> q >> r >> s;
    
        if ( (2 * std::max({p, q, r, s})) > (p + q + r + s) ) {
            std::cout << "YES\n";
        } else {
            std::cout << "NO\n";
        }
    
    }
    
    return 0;
}
