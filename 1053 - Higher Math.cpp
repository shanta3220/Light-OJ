#include <iostream>
#include <cstdio>
#include <cmath>
#include <algorithm>

using namespace std;
 
int main() {
    unsigned int  a, b,res,c,h;
    int t, j = 1;
    scanf("%d", &t);
    while(t--){
        scanf("%u%u%u",&a,&b,&c);
        h = max (max(a,b),c);
        res = min (min(a,b),c);
        b = a + b + c - h - res;
        if(h * h == b*b + res*res) printf("Case %d: yes\n", j++) ;
        else printf("Case %d: no\n", j++) ;
        
        
    }
   
    return 0;
}
