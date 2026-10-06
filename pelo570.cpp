#include <bits/stdc++.h>
// using namespace std;

int main() {
	// your code goes here

    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    
    int T;
    std::cin >> T;
    
    while ( T-- ) {
        
        int n, x;
        std::cin >> n >> x;
        
        std::cout << ((n <= x)? 0 : (((n-x)+3)/4)) << "\n";
        
    }
    
    return 0;
}
