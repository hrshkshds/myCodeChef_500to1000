#include <bits/stdc++.h>
// using namespace std;

int main() {
	// your code goes here
	
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(NULL);
	
	int T;
	std::cin >> T;
	
	while ( T-- ) {
	    
	    int N, X;
	    std::cin >> N >> X;
	    
	    std::cout << (((N * X) + 3) / 4) << "\n";
	    
	}
	
	return 0;

}
