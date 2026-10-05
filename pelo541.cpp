#include <bits/stdc++.h>
// using namespace std;

int main() {
	// your code goes here
	
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(NULL);
	
	int T;
	std::cin >> T;
	
	while ( T-- ) {
	    
	    int a,b,c;
	    std::cin >> a >> b >> c;
	    
	    std::cout << (((a + b + c) >= 2)? "Not now" : "Water filling time" ) << "\n";
	    
	}

    return 0;
}
