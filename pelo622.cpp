#include <bits/stdc++.h>
// using namespace std;

int main() {
	// your code goes here

    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    
    int T;
    std::cin >> T;
    
    while ( T-- ) {
        
        int n, max=0;
        
        for (int i = 0; i < 3; i++) {
            std::cin >> n;
            if (max < n) {
                max = n;
            }
        }
        
        std::cout << max << "\n";
        
    }
    
    return 0;
}
