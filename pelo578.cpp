#include <bits/stdc++.h>
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
        
        std::cout << ((p>(q+r+s) || q>(p+r+s) || r>(p+q+s) || s>(p+q+r))? "YES" : "NO") << "\n";
        
    }
    
    return 0;
}
