#include <iostream>
using namespace std;

int main() {
	int n,t,n2;
	cin >> t;
	while(t--){
	    n2=0;
	    cin >> n;
	    if(n>10){
	        n2=10;
	        cout << n2 << " " << n-n2 << "\n";
	    }
	    else cout << n << " " << n2 <<"\n";
	   
	} 
	    
	
	return 0;
}
