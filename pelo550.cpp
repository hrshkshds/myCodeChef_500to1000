#include <bits/stdc++.h>
// using namespace std;

int main() {
	// your code goes here

    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    
    int T;
    std::cin >> T;
    
    while ( T-- ) {
        
        bool isin = true;
        int opinion;
        
        for (int i = 0; i < 4; i++) {
            
            std::cin >> opinion;
            
            if ( opinion == 1 ) {
                isin = false;
            }
            
        }
        
        std::cout << ((isin)? "IN" : "OUT") << "\n";
        
    }


    return 0;
}
