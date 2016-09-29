#include <iostream>
#include<math.h>
using namespace std;

int main() {
	int n,t,j=1, ng,s=0;
	cin>>t;
	while(t--){
	    cin>>n;
	    int a[n];
	    for(int k=0; k<n;k++ )
	    { cin>>a[k];
	        if(a[k]<0){
	            a[k]=pow(a[k],2);
	            a[k]=pow(a[k],0.5);
	            s+=a[k];
	            ng+=a[k];
	        }
	        else s+=a[k];
	    }
	    cout<<"Case "<<j++<<": "<<s-ng<<"\n";
	    s=0;
	    ng=0;
	    
	}
	return 0;
}
