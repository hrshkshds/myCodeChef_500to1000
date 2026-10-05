#include <bits/stdc++.h>
// using namespace std;

int main() {
	// your code goes here
	
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(NULL);
	
	int T;
	std::cin >> T;
	
	while ( T-- ) {
	    
	    int X, Y;
	    std::cin >> X >> Y;
	    
	    std::cout << (((Y * 2) >= X)? "YES" : "NO") << "\n";
	    
	}

    return 0;
}
