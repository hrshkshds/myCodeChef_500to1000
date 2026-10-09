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
        
        int count = 0;
        
        for (int i = 0; i < n; i++) {
            
            int a;
            std::cin >> a;
            
            if (a >= x) {
                count++;
            }
            
        }
        
        std::cout << count << "\n";
        
    }
    return 0;
}
