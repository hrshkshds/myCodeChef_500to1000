#include <bits/stdc++.h>
// using namespace std;

int main() {
	// your code goes here
    
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    
    int T;
    std::cin >> T;
    
    while ( T-- ) {
        
        int x;
        std::cin >> x;
        
        if (x > 50){
            std::cout << "RIGHT\n";
        } else {
            std::cout << "LEFT\n";
        }
        
    }
    
    return 0;
}
