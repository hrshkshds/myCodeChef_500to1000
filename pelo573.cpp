#include <bits/stdc++.h>
// using namespace std;

int main() {
	// your code goes here
    
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    
    int a, b, c, x;
    std::cin >> a >> b >> c >> x;
    
    std::cout << ((a==x || b==x || c==x)? "Yes" : "No") << "\n";
    
    return 0;
}
