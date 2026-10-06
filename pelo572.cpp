#include <bits/stdc++.h>
// using namespace std;

int main() {
	// your code goes here
	
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(NULL);
	
	int T;
	std::cin >> T;
	
	while ( T-- ) {
	    
	    int a, b, c, d;
	    std::cin >> a >> b; 
	    std::cin >> c >> d;
	    
	    if (a > c || b > d) {
	        std::cout << "IMPOSSIBLE\n";
	    } else {
	        std::cout << "POSSIBLE\n";
	    }
	    
	}
    
    return 0;
}
