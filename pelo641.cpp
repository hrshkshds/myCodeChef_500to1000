#include <bits/stdc++.h>
// using namespace std;

int main() {
	// your code goes here
    
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    
    int T;
    std::cin >> T;
    
    while (T--) {
        
        int n, x;
        std::cin >> n >> x;
        
        std::cout << std::min(x, (n - x)) << "\n";
        
    }
    
    return 0;
}
