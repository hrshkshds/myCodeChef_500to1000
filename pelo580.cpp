#include <bits/stdc++.h>
// using namespace std;

int main() {
	// your code goes here
    
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    
    int T;
    std::cin >> T;
    
    while ( T-- ) {
        
        int count = 0;
        
        int n;
        std::cin >> n;
        
        while ( n-- ) {
            
            int c;
            std::cin >> c;
            
            if (c >= 1000) {
                
                count++;
                
            }
            
        }
        
        std::cout << count << "\n";
        
    }
}
