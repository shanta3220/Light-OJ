#include <iostream>
#include <cstdio>
#include <cmath>

double pi = 2 * acos (0.0);
using namespace std;
 
int main() {
    double r;
    int t, j = 1;
    scanf("%d", &t);
    while(t--){
        scanf("%lf", &r);
        
        printf("Case %d: %0.2lf\n", j++,(4 * r *r)-  pi*(r * r)) ;
    }
   
    return 0;
}
