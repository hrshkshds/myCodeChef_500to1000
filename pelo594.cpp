#include <bits/stdc++.h>
// using namespace std;

int main() {
	// your code goes here
    
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    
    int T;
    std::cin >> T;
    
    while ( T-- ) {
        
        int x, a, b;
        std::cin >> x >> a >> b;
        
        if ( (a*1 + b*2) >= x ) {
            std::cout << "Qualify\n";
        } else {
            std::cout << "NotQualify\n";
        }
        
    }
    
    return 0;
}
