#include <iostream>
using namespace std;

int main() {
	int t, l, j = 1, m;
	cin >> t;
	while(t--){
	    cin >>  m >> l;
	    if(m > l)  l = m + (m - l);
	    l = l * 4;
	    
	    cout << "Case " << j++ << ": " << l + 19 << "\n";
	}
	return 0;
}
