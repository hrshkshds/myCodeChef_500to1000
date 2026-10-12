#include <bits/stdc++.h>
// using namespace std;

int main() {
	// your code goes here
    
    std::ios_base::sync_with_stdio (false);
    std::cin.tie(NULL);
    
    int T;
    std::cin >> T;
    
    while (T--) {
        
        int n;
        std::cin >> n;
        
        if (n <= 10) {
            std::cout << "Lower Double\n"; 
        } else if (n <= 15) {
            std::cout << "Lower Single\n";
        } else if (n <= 25) {
            std::cout << "Upper Double\n";
        } else {
            std::cout << "Upper Single\n";
        }
        
    }
    
    return 0;
}
