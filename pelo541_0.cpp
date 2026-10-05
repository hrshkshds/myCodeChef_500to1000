#include <bits/stdc++.h>
// using namespace std;

int main() {
	// your code goes here

    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    
    int T;
    std::cin >> T;
    
    while ( T-- ) {
        
        int X;
        std::cin >> X;
        
        std::cout << ((X <= 100)? (X) : (X<=1000)? (X-25) : (X<=5000)? (X-100) : (X-500)) << "\n";
        
    }
    
    return 0;

}
