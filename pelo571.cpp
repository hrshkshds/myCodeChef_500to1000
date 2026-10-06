#include <bits/stdc++.h>
// using namespace std;

int main() {
	// your code goes here
	
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(NULL);
	
	int T;
	std::cin >> T;
	
	while ( T-- ) {
	    
	    int x, y;
	    std::cin >> x >> y;
	    
	    std::cout << ((x<y)?"BIKE":(y<x)?"CAR":"SAME") << "\n";
	    
	}

    return 0;
}
