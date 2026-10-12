#include <bits/stdc++.h>
// using namespace std;

int main() {
	// your code goes here

    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    
    int T;
    std::cin >> T;
    
    while (T--) {
        int police, thief;
        std::cin >> police >> thief;
        
        std::cout << std::abs(police - thief) << "\n";
        // since the relative speed is 2-1=2-1
        // so abs(policePosition - thiefPosition)
    }
    
    return 0;
}
