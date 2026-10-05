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
        std::cin >> a >> b >> c >> d;
        
        std::cout << (((a + b + c + d) == 0)? "IN" : "OUT") << "\n";
        
    }


    return 0;
}
