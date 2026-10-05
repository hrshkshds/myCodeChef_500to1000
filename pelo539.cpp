#include <bits/stdc++.h>
// using namespace std;

int main() {
	// your code goes here
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    
    int T;
    std::cin >> T;
    
    while ( T-- ) {
        
        int cvalue, noc;
        std::cin >> cvalue >> noc;
        
        std::cout << (cvalue * noc) / 100 << "\n";
        
    }
    
    return 0;
}
