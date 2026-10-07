#include <bits/stdc++.h>
// using namespace std;

int main() {
	// your code goes here
	
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(NULL);
	
	int T;
	std::cin >> T;
	
	while ( T-- ) {
	    
	    int n;
	    std::cin >> n;
	    
	    int r = 0;
	    
	    while (n > 0) {
	        r = (r * 10) + (n % 10);
	        n /= 10;
	    }
	    
	    std::cout << r << "\n";
	    
	}
	
	return 0;
}
