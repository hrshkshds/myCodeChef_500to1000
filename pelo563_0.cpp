#include <bits/stdc++.h>
// using namespace std;

int main() {
	// your code goes here

    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    
    int npkg = (1 * 1000) / 100;
    
    int T;
    std::cin >> T;
    
    while ( T-- ) {
        
        int n;
        std::cin >> n;
        
        std::cout << (npkg * n) << "\n";
        
    }
    
    return 0;   
}
