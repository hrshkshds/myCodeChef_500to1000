#include <bits/stdc++.h>
// using namespace std;

int main() {
	// your code goes here

    std::ios_base::sync_with_stdio (false);
    std::cin.tie (NULL);
    
    int T;
    std::cin >> T;
    
    while (T--) {
        
        int n1, n2, sum=0;
        
        for (int i = 0; i < 2; i++) {
            
            std::cin >> n1 >> n2;
            
            sum += std::max({n1, n2});
            
        }
        
        std::cout << sum << "\n";
    }
    
    return 0;
}
