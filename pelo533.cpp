#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	
	std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    
    int ready = 0;// notready = 0;
    
    int T;
    std::cin >> T;
    
    for ( int i = 0; i < T; i++ ) {
        
        int soldier;
        std::cin >> soldier;
        
        if ( soldier % 2 == 0 ) {
            ready++;
        } 
        // else {
        //     notready++;
        // }
        
    }
    
    std::cout << ((ready > (T - ready))? "READY FOR BATTLE" : "NOT READY") << "\n";
    
    return 0;

}
