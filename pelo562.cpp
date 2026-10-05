#include <bits/stdc++.h>
// using namespace std;

int main() {
	// your code goes here
    
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    
    int T;
    std::cin >> T;
    
    while ( T-- ) {
        
        int A, B, X, Y;
        std::cin >> A >> B >> X >> Y;
        
        std::cout << (((A * B) <= (X * Y))? "YES" : "NO") << "\n";
        
    }
    
    return 0;
}
