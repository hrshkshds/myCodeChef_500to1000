#include <bits/stdc++.h>
// #include <algorithm>
// using namespace std;

int main() {
	// your code goes here
	
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(NULL);
	
	int T;
	std::cin >> T;
	
	while ( T-- ) {
	    
	    int a, b, c;
	    std::cin >> a >> b >> c;
	    
	   // if (a <= b && c <= b) {
	   if (std::max(a, c) <= b) {
	        std::cout << "YES\n";
	    } else {
	        std::cout << "NO\n";
	    }
	    
	}
	
	return 0;
}
